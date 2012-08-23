namespace RollingDice
{
    partial class ChartDisplay
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea1 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend1 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            this.crtHistogram = new System.Windows.Forms.DataVisualization.Charting.Chart();
            ((System.ComponentModel.ISupportInitialize)(this.crtHistogram)).BeginInit();
            this.SuspendLayout();
            // 
            // crtHistogram
            // 
            chartArea1.AxisX.MajorGrid.Enabled = false;
            chartArea1.AxisX.Title = "Random Numbers";
            chartArea1.AxisY.TextOrientation = System.Windows.Forms.DataVisualization.Charting.TextOrientation.Stacked;
            chartArea1.AxisY.Title = "OCCURRENCE";
            chartArea1.BorderColor = System.Drawing.Color.Peru;
            chartArea1.Name = "ChartArea1";
            this.crtHistogram.ChartAreas.Add(chartArea1);
            legend1.Enabled = false;
            legend1.Name = "Legend1";
            this.crtHistogram.Legends.Add(legend1);
            this.crtHistogram.Location = new System.Drawing.Point(12, 12);
            this.crtHistogram.Name = "crtHistogram";
            this.crtHistogram.Size = new System.Drawing.Size(393, 357);
            this.crtHistogram.TabIndex = 0;
            this.crtHistogram.Text = "chart1";
            // 
            // ChartDisplay
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(417, 381);
            this.Controls.Add(this.crtHistogram);
            this.Name = "ChartDisplay";
            this.Text = "ChartDisplay";
            this.Load += new System.EventHandler(this.ChartDisplay_Load);
            ((System.ComponentModel.ISupportInitialize)(this.crtHistogram)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.DataVisualization.Charting.Chart crtHistogram;
    }
}