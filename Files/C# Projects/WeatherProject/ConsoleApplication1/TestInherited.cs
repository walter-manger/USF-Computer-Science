using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    public class TestInherited : TestBase
    {
        public TestInherited()
            : base()
        {

        }

        public void toMethod()
        {
            Console.WriteLine("Inherited Called");
        }
    }
}
