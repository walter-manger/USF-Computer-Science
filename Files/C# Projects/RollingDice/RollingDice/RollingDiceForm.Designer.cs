namespace RollingDice
{
    partial class RollingDiceForm
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
            this.txtNumberDice = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.txtNumberRolling = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.btnRolling = new System.Windows.Forms.Button();
            this.btnShowTable = new System.Windows.Forms.Button();
            this.btnShowChart = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // txtNumberDice
            // 
            this.txtNumberDice.Location = new System.Drawing.Point(88, 49);
            this.txtNumberDice.Name = "txtNumberDice";
            this.txtNumberDice.Size = new System.Drawing.Size(100, 20);
            this.txtNumberDice.TabIndex = 0;
            this.txtNumberDice.Text = "1";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(21, 52);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(51, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "# of Dice";
            // 
            // txtNumberRolling
            // 
            this.txtNumberRolling.Location = new System.Drawing.Point(88, 75);
            this.txtNumberRolling.Name = "txtNumberRolling";
            this.txtNumberRolling.Size = new System.Drawing.Size(100, 20);
            this.txtNumberRolling.TabIndex = 2;
            this.txtNumberRolling.Text = "20";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(21, 78);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(61, 13);
            this.label2.TabIndex = 3;
            this.label2.Text = "# of Rolling";
            // 
            // btnRolling
            // 
            this.btnRolling.Location = new System.Drawing.Point(28, 117);
            this.btnRolling.Name = "btnRolling";
            this.btnRolling.Size = new System.Drawing.Size(75, 23);
            this.btnRolling.TabIndex = 4;
            this.btnRolling.Text = "Rolling";
            this.btnRolling.UseVisualStyleBackColor = true;
            this.btnRolling.Click += new System.EventHandler(this.btnRolling_Click);
            // 
            // btnShowTable
            // 
            this.btnShowTable.Location = new System.Drawing.Point(109, 117);
            this.btnShowTable.Name = "btnShowTable";
            this.btnShowTable.Size = new System.Drawing.Size(75, 23);
            this.btnShowTable.TabIndex = 5;
            this.btnShowTable.Text = "Show Table";
            this.btnShowTable.UseVisualStyleBackColor = true;
            this.btnShowTable.Click += new System.EventHandler(this.btnShowTable_Click);
            // 
            // btnShowChart
            // 
            this.btnShowChart.Location = new System.Drawing.Point(28, 146);
            this.btnShowChart.Name = "btnShowChart";
            this.btnShowChart.Size = new System.Drawing.Size(75, 23);
            this.btnShowChart.TabIndex = 6;
            this.btnShowChart.Text = "Show Chart";
            this.btnShowChart.UseVisualStyleBackColor = true;
            this.btnShowChart.Click += new System.EventHandler(this.btnShowChart_Click);
            // 
            // RollingDiceForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(338, 258);
            this.Controls.Add(this.btnShowChart);
            this.Controls.Add(this.btnShowTable);
            this.Controls.Add(this.btnRolling);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.txtNumberRolling);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.txtNumberDice);
            this.Name = "RollingDiceForm";
            this.Text = "Rolling Dice Form";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtNumberDice;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtNumberRolling;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button btnRolling;
        private System.Windows.Forms.Button btnShowTable;
        private System.Windows.Forms.Button btnShowChart;
    }
}

