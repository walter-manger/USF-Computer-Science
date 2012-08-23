namespace Stocks
{
    partial class DataEntryForm
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
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea3 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend3 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series3 = new System.Windows.Forms.DataVisualization.Charting.Series();
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle11 = new System.Windows.Forms.DataGridViewCellStyle();
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle12 = new System.Windows.Forms.DataGridViewCellStyle();
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle13 = new System.Windows.Forms.DataGridViewCellStyle();
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle14 = new System.Windows.Forms.DataGridViewCellStyle();
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle15 = new System.Windows.Forms.DataGridViewCellStyle();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.dtpEnd = new System.Windows.Forms.DateTimePicker();
            this.dtpStart = new System.Windows.Forms.DateTimePicker();
            this.btnSearch = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.llRefresh = new System.Windows.Forms.LinkLabel();
            this.cboTickers = new System.Windows.Forms.ComboBox();
            this.crtStocks = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.dgStocks = new System.Windows.Forms.DataGridView();
            this.tcStocks = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.Date = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.High = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Low = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Opening = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Closing = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.lbError2 = new System.Windows.Forms.Label();
            this.lbError1 = new System.Windows.Forms.Label();
            this.groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.crtStocks)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dgStocks)).BeginInit();
            this.tcStocks.SuspendLayout();
            this.tabPage1.SuspendLayout();
            this.tabPage2.SuspendLayout();
            this.SuspendLayout();
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(24, 106);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(55, 13);
            this.label3.TabIndex = 13;
            this.label3.Text = "End Date:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(24, 75);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(58, 13);
            this.label2.TabIndex = 12;
            this.label2.Text = "Start Date:";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(24, 36);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(91, 13);
            this.label1.TabIndex = 11;
            this.label1.Text = "Available Tickers:";
            // 
            // dtpEnd
            // 
            this.dtpEnd.Location = new System.Drawing.Point(145, 99);
            this.dtpEnd.Name = "dtpEnd";
            this.dtpEnd.Size = new System.Drawing.Size(200, 20);
            this.dtpEnd.TabIndex = 9;
            // 
            // dtpStart
            // 
            this.dtpStart.Location = new System.Drawing.Point(145, 69);
            this.dtpStart.Name = "dtpStart";
            this.dtpStart.Size = new System.Drawing.Size(200, 20);
            this.dtpStart.TabIndex = 8;
            // 
            // btnSearch
            // 
            this.btnSearch.Location = new System.Drawing.Point(359, 96);
            this.btnSearch.Name = "btnSearch";
            this.btnSearch.Size = new System.Drawing.Size(75, 23);
            this.btnSearch.TabIndex = 7;
            this.btnSearch.Text = "Search";
            this.btnSearch.UseVisualStyleBackColor = true;
            this.btnSearch.Click += new System.EventHandler(this.btnSearch_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.llRefresh);
            this.groupBox1.Controls.Add(this.cboTickers);
            this.groupBox1.Controls.Add(this.dtpEnd);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.btnSearch);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.dtpStart);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Location = new System.Drawing.Point(12, 12);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(711, 162);
            this.groupBox1.TabIndex = 14;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Search Box";
            // 
            // llRefresh
            // 
            this.llRefresh.AutoSize = true;
            this.llRefresh.Location = new System.Drawing.Point(352, 33);
            this.llRefresh.Name = "llRefresh";
            this.llRefresh.Size = new System.Drawing.Size(82, 13);
            this.llRefresh.TabIndex = 15;
            this.llRefresh.TabStop = true;
            this.llRefresh.Text = "Refresh File List";
            this.llRefresh.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.llRefresh_LinkClicked);
            // 
            // cboTickers
            // 
            this.cboTickers.FormattingEnabled = true;
            this.cboTickers.Location = new System.Drawing.Point(145, 33);
            this.cboTickers.Name = "cboTickers";
            this.cboTickers.Size = new System.Drawing.Size(200, 21);
            this.cboTickers.TabIndex = 14;
            // 
            // crtStocks
            // 
            chartArea3.AxisX.IntervalType = System.Windows.Forms.DataVisualization.Charting.DateTimeIntervalType.Days;
            chartArea3.AxisY.IntervalType = System.Windows.Forms.DataVisualization.Charting.DateTimeIntervalType.Number;
            chartArea3.Name = "ChartArea1";
            this.crtStocks.ChartAreas.Add(chartArea3);
            legend3.Enabled = false;
            legend3.Name = "Legend1";
            this.crtStocks.Legends.Add(legend3);
            this.crtStocks.Location = new System.Drawing.Point(6, 6);
            this.crtStocks.Name = "crtStocks";
            this.crtStocks.Palette = System.Windows.Forms.DataVisualization.Charting.ChartColorPalette.Excel;
            series3.ChartArea = "ChartArea1";
            series3.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Candlestick;
            series3.CustomProperties = "PriceUpColor=1\\, 153\\, 52, PriceDownColor=174\\, 15\\, 37";
            series3.IsVisibleInLegend = false;
            series3.Legend = "Legend1";
            series3.Name = "Series1";
            series3.YValuesPerPoint = 4;
            this.crtStocks.Series.Add(series3);
            this.crtStocks.Size = new System.Drawing.Size(718, 362);
            this.crtStocks.TabIndex = 15;
            this.crtStocks.Text = "chart1";
            this.crtStocks.Visible = false;
            // 
            // dgStocks
            // 
            this.dgStocks.AllowUserToAddRows = false;
            this.dgStocks.AllowUserToDeleteRows = false;
            this.dgStocks.AllowUserToOrderColumns = true;
            this.dgStocks.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgStocks.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.Date,
            this.High,
            this.Low,
            this.Opening,
            this.Closing});
            this.dgStocks.Location = new System.Drawing.Point(8, 6);
            this.dgStocks.Name = "dgStocks";
            this.dgStocks.Size = new System.Drawing.Size(732, 377);
            this.dgStocks.TabIndex = 16;
            this.dgStocks.Visible = false;
            // 
            // tcStocks
            // 
            this.tcStocks.Controls.Add(this.tabPage1);
            this.tcStocks.Controls.Add(this.tabPage2);
            this.tcStocks.Enabled = false;
            this.tcStocks.Location = new System.Drawing.Point(12, 173);
            this.tcStocks.Name = "tcStocks";
            this.tcStocks.SelectedIndex = 0;
            this.tcStocks.Size = new System.Drawing.Size(754, 415);
            this.tcStocks.TabIndex = 17;
            // 
            // tabPage1
            // 
            this.tabPage1.Controls.Add(this.lbError1);
            this.tabPage1.Controls.Add(this.lbError2);
            this.tabPage1.Controls.Add(this.dgStocks);
            this.tabPage1.Location = new System.Drawing.Point(4, 22);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(746, 389);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "Show Data Table";
            this.tabPage1.UseVisualStyleBackColor = true;
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.crtStocks);
            this.tabPage2.Location = new System.Drawing.Point(4, 22);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage2.Size = new System.Drawing.Size(746, 389);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "Show Candlestick Chart";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // Date
            // 
            this.Date.AutoSizeMode = System.Windows.Forms.DataGridViewAutoSizeColumnMode.Fill;
            dataGridViewCellStyle11.Format = "d";
            dataGridViewCellStyle11.NullValue = null;
            this.Date.DefaultCellStyle = dataGridViewCellStyle11;
            this.Date.HeaderText = "Date";
            this.Date.Name = "Date";
            // 
            // High
            // 
            dataGridViewCellStyle12.Format = "C2";
            dataGridViewCellStyle12.NullValue = null;
            this.High.DefaultCellStyle = dataGridViewCellStyle12;
            this.High.HeaderText = "High Price";
            this.High.Name = "High";
            // 
            // Low
            // 
            dataGridViewCellStyle13.Format = "C2";
            dataGridViewCellStyle13.NullValue = null;
            this.Low.DefaultCellStyle = dataGridViewCellStyle13;
            this.Low.HeaderText = "Low Price";
            this.Low.Name = "Low";
            // 
            // Opening
            // 
            dataGridViewCellStyle14.Format = "C2";
            dataGridViewCellStyle14.NullValue = null;
            this.Opening.DefaultCellStyle = dataGridViewCellStyle14;
            this.Opening.HeaderText = "Opening Price";
            this.Opening.Name = "Opening";
            // 
            // Closing
            // 
            dataGridViewCellStyle15.Format = "C2";
            dataGridViewCellStyle15.NullValue = null;
            this.Closing.DefaultCellStyle = dataGridViewCellStyle15;
            this.Closing.HeaderText = "Closing Price";
            this.Closing.Name = "Closing";
            // 
            // lbError2
            // 
            this.lbError2.AutoSize = true;
            this.lbError2.Location = new System.Drawing.Point(278, 116);
            this.lbError2.Name = "lbError2";
            this.lbError2.Size = new System.Drawing.Size(179, 13);
            this.lbError2.TabIndex = 17;
            this.lbError2.Text = "Please Choose Another Date Range";
            this.lbError2.Visible = false;
            // 
            // lbError1
            // 
            this.lbError1.AutoSize = true;
            this.lbError1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbError1.Location = new System.Drawing.Point(290, 94);
            this.lbError1.Name = "lbError1";
            this.lbError1.Size = new System.Drawing.Size(156, 20);
            this.lbError1.TabIndex = 18;
            this.lbError1.Text = "No Data To Display";
            this.lbError1.Visible = false;
            // 
            // DataEntryForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(470, 151);
            this.Controls.Add(this.tcStocks);
            this.Controls.Add(this.groupBox1);
            this.Name = "DataEntryForm";
            this.Text = "Stocks & Quotes";
            this.Load += new System.EventHandler(this.DataEntryForm_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.crtStocks)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dgStocks)).EndInit();
            this.tcStocks.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.tabPage1.PerformLayout();
            this.tabPage2.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.DateTimePicker dtpEnd;
        private System.Windows.Forms.DateTimePicker dtpStart;
        private System.Windows.Forms.Button btnSearch;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.DataVisualization.Charting.Chart crtStocks;
        private System.Windows.Forms.ComboBox cboTickers;
        private System.Windows.Forms.LinkLabel llRefresh;
        private System.Windows.Forms.DataGridView dgStocks;
        private System.Windows.Forms.TabControl tcStocks;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.DataGridViewTextBoxColumn Date;
        private System.Windows.Forms.DataGridViewTextBoxColumn High;
        private System.Windows.Forms.DataGridViewTextBoxColumn Low;
        private System.Windows.Forms.DataGridViewTextBoxColumn Opening;
        private System.Windows.Forms.DataGridViewTextBoxColumn Closing;
        private System.Windows.Forms.Label lbError2;
        private System.Windows.Forms.Label lbError1;
    }
}