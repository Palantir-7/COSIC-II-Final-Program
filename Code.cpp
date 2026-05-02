//Elizabeth Fanton COSCI 1437 3/28/2026
#include "Code.h"

void Code::setmessage()
{
	//char inputString[1000];
	cout << "Enter the message you want encoded (with no spaces): ";
	cin >> message;

	//cout << "Number of characters in string: " << message.length() << endl;

	//cin >> inputString;
	//char inputChar;
	//int i = 0;
	//do
	//{
	//	inputChar = getchar();
	//	if (inputChar != ' ')
	//	{
	//		inputString[i] = inputChar;
	//		i++;
	//	}
	//} while (inputChar != '.');//char(10) is "enter"

	//inputString[i] = '\0';//string terminator
	//message = string(inputString);

}

void Code::setshiftNum()
{
	cout << "Enter the key shift: ";
	cin >> shiftNum;

}

void Code::setkeyWord()
{
	cout << "Enter key word: ";
	cin >> keyWord;
}

//void Code::setkeyLetter()
//{
//	cout << "Enter key letter: ";
//	cin >> keyLetter;
//}

int Code::getshiftNum()
{
	return shiftNum;
}

string Code::getkeyWord()
{
	return keyWord;
}

//string Code::getkeyLetter()
//{
//	return keyLetter;
//}

void Code::chosenCipher(int chosenCipher)
{
	if (chosenCipher == 1)
	{
		//call str2num function
		setmessage();
		str2num();
	}
	else if (chosenCipher == 2)
	{
		//call Ceasar Cipher function
		setmessage();
		setshiftNum();
		ceasarCipher();
	}
	else if (chosenCipher == 3)
	{
		//call Vingere Cipher
		setmessage();
		setkeyWord();
		//setkeyLetter();
		VinegretteCipher();
	}
	else
	{
		cout << "ERROR! Please restart." << endl;
	}
}

string Code::getmessage()
{

	return message;
}

void Code::str2num()
{
	int alphabetArray[1000];
	string passedString = getmessage();
		
	for (int i = 0; i < passedString.length(); i++)
	{
		cout << passedString[i];//outputs string...
		//takes each char and converts to uppercase
	
			passedString[i] = static_cast<char>(toupper(passedString[i]));//converts to upper case.
			alphabetArray[i] = int(passedString[i]) - 65;
			
			//cout<< "-> " << passedString[i];
			//cout << "-> " << alphabetArray[i];
			//cout << passedString[i];
			//cout << char(((int(passedString[i]) - 65 + 2) % 26)+65);
			//cout << endl;
			//cout << "-> " << passedString[i];

			cout << alphabetArray[i];//something wrong with ouput...
	}
	
}

void Code::ceasarCipher()
{
	int myCipher;
	string passedString = getmessage();
	string cipherText = passedString;
	myCipher = getshiftNum();

	for (int i = 0; i < passedString.length(); i++)
	{
		cout << passedString[i];//outputs string...


		passedString[i] = static_cast<char>(toupper(passedString[i]));//converts to upper case.
		//cout << "-> " << passedString[i];
		//cout << "-> ";

		//cout << char(((int(passedString[i]) - 65 + myCipher) % 26) + 65) << endl;
		//int test1 = (int(passedString[i] - 65 + myCipher) % 26);
		//cout << char(test1 + 65);
		cipherText[i] = char(((int(passedString[i]) - 65 + myCipher) % 26) + 65);

	}
	cout << endl << cipherText;
	cout << endl;
}

void Code::VinegretteCipher()
{
	string myKeyWord;

	//string mykeyLetter;
	string passedString = getmessage();
	string cipherText = passedString;
	myKeyWord = getkeyWord();
	//mykeyLetter = getkeyLetter();

	int j = 0;
	int shift = 0;
	for (int i = 0; i < passedString.length(); i++)
	{
		cout << passedString[i];//outputs string...

		passedString[i] = static_cast<char>(toupper(passedString[i]));//converts to upper case.
		//cout << "-> " << passedString[i];
		//cout << "-> ";
		
		//cout <<"testing "<<(mykeyLetter + 32);
		shift = static_cast<char>(toupper(myKeyWord[j])) - 65;
		j = (j + 1) % myKeyWord.length();


		//myKeyWord = static_cast<char>(toupper(myKeyWord[i]));
		//cout << char(((int(passedString[i]) - 65 + shift) % 26) + 65);

		cipherText[i] = char(((int(passedString[i]) - 65 + shift) % 26) + 65);


	}

	cout << endl << cipherText;
	cout << endl;
}
//next step:
//fix code so i can have spaces in strings.
//loop thru string look for spaces find and put in new string withput spaces
//paststr packedstr, for loop, check char, if not a space assign it new space in string otherwise skip it.
//main for loop just like other for loops anoher j you increment separately.
