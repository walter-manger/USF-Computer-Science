using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Threading;

namespace WeatherProject
{
    public partial class Form1 : Form
    {
        const string weatherResultFormat = "Weather for {0}";

        public Form1()
        {
            InitializeComponent();
        }

        private void btnSearch_Click(object sender, EventArgs e)
        {
            this.lblResultLoader.Visible = true;
            GetWeather();
        }

        public void GetWeather()
        {
            WeatherService.WeatherSoapClient wsc = new WeatherService.WeatherSoapClient();
            this.lblResult.Text = wsc.GetWeather(this.txtSearch.Text);
            this.groupBox1.Text = string.Format(weatherResultFormat, this.txtSearch.Text);
            this.groupBox1.Visible = !string.IsNullOrEmpty(this.lblResult.Text);
            this.lblResultLoader.Visible = !this.groupBox1.Visible;
        }

    }
}
