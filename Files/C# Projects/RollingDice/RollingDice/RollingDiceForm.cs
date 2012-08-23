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
    public partial class RollingDiceForm : BaseForm
    {
        private int numberOfDice = 0;
        private int numberOfRolls = 0;

        public RollingDiceForm()
        {
            InitializeComponent();
        }

        /// <summary>
        /// Self explanitory
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void btnRolling_Click(object sender, EventArgs e)
        {
            RollDice();
        }

        /// <summary>
        /// Creates new instances of Die and Histogram
        /// Takes data from the form and parses data.
        /// </summary>
        private void RollDice()
        {
            die = new Die();
            histogram = new Histogram(6);

            if (int.TryParse(this.txtNumberDice.Text, out numberOfDice) && int.TryParse(this.txtNumberRolling.Text, out numberOfRolls))
            {
                for (int i = 0; i < numberOfDice; i++)
                {
                    histogram.Add(die.Roll(numberOfRolls));
                }
            }
        }

        /// <summary>
        /// Event handler for the Show Table button
        /// Checks to see if the data is changed before showing the data table
        /// If there are changes in data, create a new instance of the Die and Histogram 
        /// classes and parse the data again. 
        /// Open the DataDisplay form and pass the instances of Die and Histogram
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void btnShowTable_Click(object sender, EventArgs e)
        {
            if (IsDataChanged())
                RollDice();

            var f = new DataDisplay();
            f.die = this.die;
            f.histogram = this.histogram;
            f.Show();
        }

        /// <summary>
        /// Event handler for the Show Chart button
        /// Checks to see if the data is changed before showing the chart
        /// If there are changes in data, create a new instance of the Die and Histogram 
        /// classes and parse the data again
        /// Open the ChartDisplay form and pass the instances of Die and Histogram
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void btnShowChart_Click(object sender, EventArgs e)
        {
            if (IsDataChanged())
                RollDice();

            var f = new ChartDisplay();
            f.die = this.die;
            f.histogram = this.histogram;
            f.Show();
        }

        /// <summary>
        /// Created to avoid compounded rolls. 
        /// Other methods use this to determine if another Die and Histogram instance is needed.
        /// </summary>
        /// <returns></returns>
        private bool IsDataChanged()
        {
            if (this.txtNumberDice.Text != numberOfDice.ToString() || this.txtNumberRolling.Text != numberOfRolls.ToString())
                return true;

            return false;
        }
    }
}
