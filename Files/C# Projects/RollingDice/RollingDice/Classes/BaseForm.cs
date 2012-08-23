using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace RollingDice
{
    public class BaseForm : Form
    {
        public Die die { get; set; }
        public Histogram histogram { get; set; }
    }
}
