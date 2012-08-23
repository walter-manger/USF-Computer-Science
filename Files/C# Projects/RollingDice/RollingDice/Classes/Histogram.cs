using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Data;

namespace RollingDice
{
    public class Histogram
    {
        private DataTable occurences = new DataTable();

        public const string OccurenceColumnHeader = "Occurence";
        public const string NumberColumnHeader = "Number";

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="n">Is the number of rows in the table</param>
        public Histogram(int n)
        {
            InitializeTable(n);
        }

        // Adds 1 to the row specified
        public void Add(int i)
        {
            int face = (i - 1);
            int currentCount = 0;

            if(occurences.Rows.Count >= face)
            {
                currentCount = (int)occurences.Rows[face][OccurenceColumnHeader];
                occurences.Rows[face][OccurenceColumnHeader] = currentCount += 1;
            }
        }

        // An array version of the above method
        public void Add(int[] a)
        {
            foreach (var item in a)
            {
                Add(item);
            }
        }

        // Sets the count for the current columns to 0
        public void Clear()
        {
            foreach (DataRow row in occurences.Rows)
            {
               row["OccurenceCount"] = 0;
            }
        }

        /// <summary>
        /// Initializes the occurences table with the number of bins + 1 to 
        /// display the column headers
        /// </summary>
        /// <param name="bins"></param>
        private void InitializeTable(int bins)
        {
            occurences.Columns.Add(NumberColumnHeader, typeof(string));
            occurences.Columns.Add(OccurenceColumnHeader, typeof(int));

            for (int i = 1; i < (bins + 1); i++)
            {
                occurences.Rows.Add(i.ToString(), 0);
            }
        }

        /// <returns>The occurences table</returns>
        public DataTable GetTable()
        {
            return occurences;
        }

        public int GetSumOfRows()
        {
            int sumOfRows = 0;

            if (occurences != null && occurences.Columns.Count > 0)
            {
                foreach (DataRow row in occurences.Rows)
                {
                    sumOfRows += (int)row[1];
                }
            }

            return sumOfRows;
        }
        
    }
}
