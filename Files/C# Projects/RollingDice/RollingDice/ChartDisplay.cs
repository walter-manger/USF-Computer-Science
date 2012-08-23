using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;

namespace RollingDice
{
    public partial class ChartDisplay : BaseForm
    {
        public ChartDisplay()
        {
            InitializeComponent();
        }

        /// <summary>
        /// Creates DataPoints for each of the Rows in the Histogram.occurences table
        /// then styles them accordingly.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void ChartDisplay_Load(object sender, EventArgs e)
        {
            Series series1 = new Series();
            series1.ChartArea = "ChartArea1";
            series1.Legend = "Legend1";
            series1.Name = "Occurence";
            
            this.crtHistogram.Series.Add(series1);
            this.crtHistogram.DataSource = this.histogram.GetTable();
            this.crtHistogram.Series["Occurence"].XValueMember = "Number";
            this.crtHistogram.Series["Occurence"].YValueMembers = "Occurence";

            this.crtHistogram.DataBind();

            StyleBar(0, Color.LightGreen);
            StyleBar(1, Color.Yellow);
            StyleBar(2, Color.Orange);
            StyleBar(3, Color.Blue);
            StyleBar(4, Color.Red);
            StyleBar(5, Color.Brown);
        }

        /// <summary>
        /// Applies style (Color, Border, and Lable) to the DataPoints created in ChartDisplay_Load
        /// </summary>
        /// <param name="dataPointIndex"></param>
        /// <param name="color"></param>
        private void StyleBar(int dataPointIndex, System.Drawing.Color color)
        {
            DataPoint dp = this.crtHistogram.Series[0].Points[dataPointIndex];

            dp.Color = color;
            dp.BorderColor = System.Drawing.Color.Black;
            dp.Label = dp.YValues[0].ToString();
            dp.BorderWidth = 2;
        }
    }
}
