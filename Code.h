//Elizabeth Fanton COSCI 1437 3/28/2026
//the general purpose of this code is to take a string of letters and convert them into ciphers.
#pragma once
#include <iostream>
#include<string>
#include<stdio.h>

using namespace std;

class Code
{
private:
	string message;
	int shiftNum;
	string keyWord;
	//string keyLetter;

public:
	//setters
	void setmessage();
	void setshiftNum();
	void setkeyWord();
	//void setkeyLetter();
	
	//getters
	string getmessage();
	int getshiftNum();
	string getkeyWord();
	//string getkeyLetter();
	
	//functions
	void chosenCipher(int);
	void str2num();
	void ceasarCipher();
	void VinegretteCipher();//Vingere Cipher
};