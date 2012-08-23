using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;
using System.Windows.Forms.DataVisualization.Charting;
using System.Collections.Specialized;
using System.Collections;

namespace Stocks
{
    public partial class DataEntryForm : Form
    {
        public DataEntryForm()
        {
            InitializeComponent();
        }

        private void DataEntryForm_Load(object sender, EventArgs e)
        {
            FillFileList();
        }

        public void FillFileList()
        {
            List<FileInfo> tickerFiles = new List<FileInfo>();
            DirectoryInfo di = new DirectoryInfo(Environment.CurrentDirectory);

            this.cboTickers.Items.Clear();
            

            if (di.Exists)
            {
                foreach (var file in di.GetFiles("*.csv"))
                {
                    this.cboTickers.Items.Add(file.Name.Replace(".csv", ""));
                }
            }

            if (this.cboTickers.Items.Count > 0)
                this.cboTickers.SelectedIndex = 0;
        }

        private void llRefresh_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            FillFileList();
        }

        private void btnSearch_Click(object sender, EventArgs e)
        {
            this.crtStocks.Series[0].Points.Clear();
            this.dgStocks.Rows.Clear();

            Quotes q = GetStockQuotes(this.cboTickers.SelectedItem.ToString());
            var filtered = q.QuoteList.Cast<DictionaryEntry>()
                .Select(x => new KeyValuePair<DateTime, StockQuote>((DateTime)x.Key, (StockQuote)x.Value))
                .Where(y => y.Key >= this.dtpStart.Value.Date && y.Value.Date < this.dtpEnd.Value.Date);

            this.Width = 794;
            this.Height = 638;

            if (filtered.Count() > 0)
            {
                FillDataGrid(filtered);
                FillChart(filtered);

                lbError1.Visible = false;
                lbError2.Visible = false;
                dgStocks.Visible = true;
                crtStocks.Visible = true;
                tcStocks.Enabled = true;
            }
            else
            {
                lbError1.Visible = true;
                lbError2.Visible = true;
                dgStocks.Visible = false;
                crtStocks.Visible = false;
                tcStocks.Enabled = false;
            }
            
            // Indexing Example
            //StockQuote dateInt = q[3];
            //StockQuote dateSQ = q[new DateTime(2011, 11, 1)];
        }

        private Quotes GetStockQuotes(string stockName)
        {
            DirectoryInfo di = new DirectoryInfo(Environment.CurrentDirectory);
            FileInfo fi = new FileInfo(Path.Combine(di.FullName, string.Format("{0}.csv", stockName)));
            string row = string.Empty;
            bool skipHeader = true;
            bool isPrimed = false;
            Quotes q = new Quotes(stockName);

            if (fi.Exists)
            {
                try
                {
                    StreamReader reader = new StreamReader(fi.FullName);

                    while (reader.Peek() != -1)
                    {
                        if (skipHeader && !isPrimed)
                        {
                            reader.ReadLine();
                            isPrimed = true;
                        }

                        row = reader.ReadLine();
                        string[] columns = row.Split(',');

                        q.AddQuote(columns);
                    }
                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }

            }

            return q;
        }


        private void FillDataGrid(IEnumerable<KeyValuePair<DateTime,StockQuote>> quotes)
        {


            foreach (KeyValuePair<DateTime, StockQuote> quote in quotes)
            {
                dgStocks.Rows.Add(quote.Key, quote.Value.HighPrice, quote.Value.LowPrice, quote.Value.OpeningPrice, quote.Value.ClosingPrice);
            }

        }

        private void FillChart(IEnumerable<KeyValuePair<DateTime, StockQuote>> quotes)
        {
            //High, Low, Close, Open 80,20,30,60
            foreach (KeyValuePair<DateTime, StockQuote> quote in quotes)
            {
                this.crtStocks.Series[0].Points.AddXY(quote.Key, quote.Value.HighPrice, quote.Value.LowPrice, quote.Value.OpeningPrice, quote.Value.ClosingPrice);
            }

            this.crtStocks.ChartAreas[0].AxisX.IsStartedFromZero = false;
            this.crtStocks.ChartAreas[0].AxisY.IsStartedFromZero = false;
        }
    }
}
