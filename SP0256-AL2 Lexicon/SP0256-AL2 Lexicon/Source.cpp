#include <iostream>
#include <fstream>
#include <string>
#include <locale>
#include <vector>
#include "Lexicon.h"

using namespace std;

int main() {
	Lexicon lex;
	string input;
	string line;
	locale loc;
	vector<string> wordList;
	vector<string> cmuPhones;
	vector<string> SP0Phones;
	int select = -1;

	cout << "Select an option:\n1) Convert from string\n2) Convert from file\n";
	while (select != 1 && select != 2) cin >> select;
	cout << endl;
	cin.ignore();

	if (select == 1) {
		cout << "Enter a string to convert: ";
		getline(cin, input);
	}
	if (select == 2) {
		ifstream docInput;
		docInput.open("./input.txt");
		if (docInput.is_open())
		{
			while (getline(docInput, line))
			{
				input.append(line);
			}
			docInput.close();
		}
		else cout << "Unable to open file";

		cout << "Input: " << input << endl;
	}

	for (std::string::size_type i = 0; i < input.length(); ++i) {
		input[i] = std::tolower(input[i], loc);
	}

	wordList = lex.splitInput(input, ' ');

	ifstream dict;
	dict.open("./cmudict/cmudict.dict");
	if (!dict.is_open()) cout << "Unable to open dictionary file";


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