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
	vector<string> SP0Phones;

	cout << "Enter a string to convert: ";
	getline(cin, input);

	wordList = lex.splitInput(input, ' ');

	ifstream dict;
	dict.open("./cmudict/cmudict.dict");


	for (int i = 0; i < wordList.size(); i++) {
		cout << "Searching dictionary for \"" << wordList[i] << "\"" << "..." << endl;
		lex.findInDict(dict, wordList[i], cmuPhones);
	}
	
	dict.close();
	cout << endl << endl;
	cout << "cmuPhones:" << endl;
	for (int i = 0; i < cmuPhones.size(); i++) cout << cmuPhones[i] << " ";

	SP0Phones = lex.convertPhones(cmuPhones);
	cout << endl << endl;
	cout << "SP0Phones:" << endl;
	for (int i = 0; i < SP0Phones.size(); i++) cout << SP0Phones[i] << " ";

	cout << endl << endl;

	ofstream out;
	out.open("./output/speech/speech.ino");
	lex.generateCode(out, SP0Phones);
	out.close();

	system("pause");
	return 0;
}