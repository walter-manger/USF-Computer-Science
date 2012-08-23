using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Stocks
{
    public class StockQuote
    {
        public DateTime Date { get; set; }
        public double OpeningPrice { get; set; }
        public double HighPrice { get; set; }
        public double LowPrice { get; set; }
        public double ClosingPrice { get; set; }
        public double Volume { get; set; }

        public StockQuote()
        {
            Date = DateTime.MinValue;
            OpeningPrice = 0;
            HighPrice = 0;
            LowPrice = 0;
            ClosingPrice = 0;
            Volume = 0;
        }

        public StockQuote(string[] row)
        {
            try
            {
                Date = DateTime.Parse(row[0]);
                OpeningPrice = Double.Parse(row[1]);
                HighPrice = Double.Parse(row[2]);
                LowPrice = Double.Parse(row[3]);
                ClosingPrice = Double.Parse(row[4]);
                Volume = Double.Parse(row[5]);
            }
            catch (Exception)
            {
                throw;
            }

        }
    }
}
