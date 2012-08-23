#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include "Tokenizer.h"

using namespace std;

void RunTokenizer(string, string);

int main()
{
	string input = "";
	string delimiter = "";

	cout << "Welcome to the Tokenizer program!" << endl;

	cout << "Enter an input string: ";

	getline(cin, input);

	cout << "Enter a delimiter string: ";

	getline(cin, delimiter);

	cout << "Tokens: " << endl;

	RunTokenizer(input, delimiter);

	return 0;
}

void RunTokenizer(string in, string delimiter)
{
	list<string> tokenList;

	tokenizer(in, delimiter, tokenList);

	for(list<string>::iterator token = tokenList.begin(); token != tokenList.end(); token++)
	{
		cout << *token << endl;
	}

}