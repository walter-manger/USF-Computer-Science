using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace RollingDice
{
    public partial class DataDisplay : BaseForm
    {
        public DataDisplay()
        {
            InitializeComponent();
        }

        /// <summary>
        /// Adds a sum row to the Histogram occurences table and displays the table 
        /// in a DataGridView
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void DataDisplay_Load(object sender, EventArgs e)
        {
            DataTable dt = this.histogram.GetTable().Copy();
            dt.Rows.Add("Sum", this.histogram.GetSumOfRows());

            this.dgvData.DataSource = dt;
        }
    }
}
