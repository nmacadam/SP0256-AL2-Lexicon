#include <iostream>
#include <fstream>
#include <vector>
#include "Lexicon.h"

using namespace std;


int main() {
	Lexicon lex;
	string input;
	vector<string> wordList;
	vector<string> cmuPhones;

	cout << "Enter a string to convert: ";
	getline(cin, input);

	wordList = lex.splitInput(input, ' ');

	ifstream dict;
	dict.open("./cmudict/cmudict.dict");


	for (int i = 0; i < wordList.size(); i++) {
		cout << "Searching dictionary for " << wordList[i] << "..." << endl;
		lex.findInDict(dict, wordList[i], cmuPhones);
	}
	
	dict.close();

	for (int i = 0; i < cmuPhones.size(); i++) cout << cmuPhones[i] << " ";


	system("pause");
	return 0;
}