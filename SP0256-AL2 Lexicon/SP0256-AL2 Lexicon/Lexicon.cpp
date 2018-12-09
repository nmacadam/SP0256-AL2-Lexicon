#include "Lexicon.h"
//#include "include/SpeechChip.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

Lexicon::Lexicon()
{

}

Lexicon::~Lexicon()
{
}

//spit an input sentence into a vector of strings
vector<string> Lexicon::splitInput(const std::string& s, char delimiter) {
	std::vector<std::string> tokens;
	std::string token;
	std::istringstream tokenStream(s);
	while (std::getline(tokenStream, token, delimiter))
	{
		tokens.push_back(token);
	}
	return tokens;
}

//Finds the line matching the token
void Lexicon::findInDict(ifstream & stream, string token, vector<string> &phoneList) {
	string line;
	int lineNum = 1;
	int instances = 0;

	vector<string> newPhones;

	while (getline(stream, line)) {
		if (line.find(token) != string::npos) {
			if (token.compare(line.substr(0, token.length())) == 0) {
				cout << lineNum << " " << line << endl;
				instances++;

				newPhones = splitInput(line.substr(token.length() + 1, line.length()), ' ');

				phoneList.insert(phoneList.end(), newPhones.begin(), newPhones.end());
				phoneList.push_back("*BRK*");

				stream.clear();
				stream.seekg(0, ios::beg);
				break;
			}
		}
		lineNum++;
	}
	if (!instances) cout << token << " not found" << endl;
}

//Finds all instances of lines containing the token
void Lexicon::findAllInDict(ifstream & stream, string token) {
	string line;
	int lineNum = 1;
	int instances = 0;
	while (getline(stream, line)) {
		if (line.find(token) != string::npos) {
			cout << lineNum << " " << line << endl;
			instances++;
		}
		lineNum++;
	}
	if (!instances) cout << token << " not found" << endl;
}

vector<string> Lexicon::convertPhones(vector<string> &pList) {
	vector<string> newPhones;
	newPhones.resize(pList.size());
	for (int i = 0; i < pList.size(); i++)
	{
		if (pList[i] == "*BRK*") newPhones[i] = "PA5";
		if (pList[i] == "OY" || pList[i] == "OY0" || pList[i] == "OY1" || pList[i] == "OY2") newPhones[i] = "OY";
		if (pList[i] == "AY" || pList[i] == "AY0" || pList[i] == "AY1" || pList[i] == "AY2") newPhones[i] = "AY";
		if (pList[i] == "EH" || pList[i] == "EH0" || pList[i] == "EH1" || pList[i] == "EH2") newPhones[i] = "EH";
		if (pList[i] == "K") newPhones[i] = "KK3";

		//...and so on, but i need to study for finals

	}


	return newPhones;
}