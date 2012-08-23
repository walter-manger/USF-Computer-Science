using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Collections.Specialized;

namespace Stocks
{
    public class Quotes
    {
        public string Name { get; set; }
        public OrderedDictionary QuoteList {  get {return quoteList;} }
        

        public StockQuote this[int index]
        {
            get {
                if (quoteList[index] != null)
                    return quoteList[index] as StockQuote;
                return null;
            }
            set {
                if (quoteList[index] == null)
                    quoteList[index] = value;
            }
        }

        public StockQuote this[DateTime date]
        {
            get
            {
                if (quoteList[date] != null)
                    return quoteList[date] as StockQuote;
                return null;
            }
            set
            {
                if (quoteList[date] == null)
                    quoteList[date] = value;
            }
        }

        public Quotes(string name)
        {
            this.Name = name;
            quoteList = new OrderedDictionary();
        }

        public void AddQuote(string[] row)
        {
            DateTime key;

            try
            {
                key = DateTime.Parse(row[0]);
                quoteList.Add(key, new StockQuote(row));
            }
            catch (Exception)
            {
                throw;
            }

        }

        private OrderedDictionary quoteList;

    }
}
