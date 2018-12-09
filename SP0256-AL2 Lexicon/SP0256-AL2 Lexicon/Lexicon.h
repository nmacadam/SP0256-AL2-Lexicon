#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Lexicon
{
public:
	Lexicon();
	~Lexicon();

	vector<string> splitInput(const std::string& s, char delimiter);
	void findInDict(ifstream & stream, string token, vector<string> &phoneList);
	void findAllInDict(ifstream & stream, string token);

	vector<string> convertPhones(vector<string> &pList);
	void generateCode(ofstream & stream, vector<string> &pList);
};

