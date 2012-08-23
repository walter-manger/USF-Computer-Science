#include <string>
#include <list>

void tokenizer(const std::string input, const std::string delimiter, std::list<std::string> &tokenList)
{
	size_t i = 0;
	std::string tmp = input;

	while(tmp.length() > 0)
	{
		if(delimiter.length() > 0)
		{
			i = tmp.find(delimiter);
		
			if(i != std::string::npos)
			{
				if(i > 0)
					tokenList.push_back(tmp.substr(0, i));
			
				tmp = tmp.substr(i + delimiter.length());
			}
			else // get the last string
			{
				if(i != tmp.length())
					tokenList.push_back(tmp.substr(0));

				tmp = tmp.substr(tmp.length());
			}
		}
		else
		{
			tokenList.push_back(tmp);
			tmp = ""; 
		}
	}
}

