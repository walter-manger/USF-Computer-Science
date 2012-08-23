using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace RollingDice
{
    public class Die
    {
        private Random rand = new Random();

        /// <summary>
        /// Constructor: Nothing needs to be initialized here
        /// </summary>
        public Die()
        { }

        /// <returns>A random number between 1 and 6</returns>
        public int Roll()
        {
            return rand.Next(1,7);
        }

        /// <summary>
        /// Array version of the above method
        /// </summary>
        /// <param name="n"></param>
        /// <returns></returns>
        public int[] Roll(int n)
        {
            int[] randomNumbers = new int[n];

            for (int i = 0; i < n; i++)
            {
                randomNumbers[i] = Roll();
            }

            return randomNumbers;
        }

    }
}
