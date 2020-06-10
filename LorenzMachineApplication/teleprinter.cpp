#include "stdafx.h"
#include "teleprinter.h"
#include <vector>
#include <iostream>

teleprinter::teleprinter(lorenzMachine encryptionDevice)
{
	// implementation code should be added here

	charToBaudot['*'] = 0b00000; 
	charToBaudot[' '] = 0b00100;
	charToBaudot['Q'] = 0b10111;
	charToBaudot['W'] = 0b10011;
	charToBaudot['E'] = 0b00001;
	charToBaudot['R'] = 0b01010;
	charToBaudot['T'] = 0b10000;
	charToBaudot['Y'] = 0b10101;
	charToBaudot['U'] = 0b00111;
	charToBaudot['I'] = 0b00110;
	charToBaudot['O'] = 0b11000;
	charToBaudot['P'] = 0b10110;
	charToBaudot['A'] = 0b00011;
	charToBaudot['S'] = 0b00101;
	charToBaudot['D'] = 0b01001;
	charToBaudot['F'] = 0b01101;
	charToBaudot['G'] = 0b11010;
	charToBaudot['H'] = 0b10100;
	charToBaudot['J'] = 0b01011;
	charToBaudot['K'] = 0b01111;
	charToBaudot['L'] = 0b10010;
	charToBaudot['Z'] = 0b10001;
	charToBaudot['X'] = 0b11101;
	charToBaudot['C'] = 0b01110;
	charToBaudot['V'] = 0b11110;
	charToBaudot['B'] = 0b11001;
	charToBaudot['N'] = 0b01100;
	charToBaudot['M'] = 0b11100;
	charToBaudot[','] = 0b01000;
	charToBaudot['-'] = 0b00010;
	charToBaudot['!'] = 0b11011;
	charToBaudot['.'] = 0b11111;

	baudotToChar[0b00000] = '*';
	baudotToChar[0b00100] = ' ';
	baudotToChar[0b10111] = 'Q';
	baudotToChar[0b10011] = 'W';
	baudotToChar[0b00001] = 'E';
	baudotToChar[0b01010] = 'R';
	baudotToChar[0b10000] = 'T';
	baudotToChar[0b10101] = 'Y';
	baudotToChar[0b00111] = 'U';
	baudotToChar[0b00110] = 'I';
	baudotToChar[0b11000] = 'O';
	baudotToChar[0b10110] = 'P';
	baudotToChar[0b00011] = 'A';
	baudotToChar[0b00101] = 'S';
	baudotToChar[0b01001] = 'D';
	baudotToChar[0b01101] = 'F';
	baudotToChar[0b11010] = 'G';
	baudotToChar[0b10100] = 'H';
	baudotToChar[0b01011] = 'J';
	baudotToChar[0b01111] = 'K';
	baudotToChar[0b10010] = 'L';
	baudotToChar[0b10001] = 'Z';
	baudotToChar[0b11101] = 'X';
	baudotToChar[0b01110] = 'C';
	baudotToChar[0b11110] = 'V';
	baudotToChar[0b11001] = 'B';
	baudotToChar[0b01100] = 'N';
	baudotToChar[0b11100] = 'M';
	baudotToChar[0b01000] = ',';
	baudotToChar[0b00010] = '-';
	baudotToChar[0b11011] = '!';
	baudotToChar[0b11111] = '.';

	this->encryptor = encryptionDevice;
}

int teleprinter::getBaudotFromChar(char c)
{
	/*get the length of the users message*/
	int messageLength = message.length();

	/*loop for length of message*/
	for (int i = 0; i <= messageLength; i++)
	{
		/*loop through qwerty alphabet*/
		for (int x = 0; x < 32; x++)
		{
			/*if the current qwerty pos == the current message pos*/
			if (qwerty[x] == message[i])
			{
				charToBaudot.push_back(baudot[x]);
			}
		}
	}

	return charToBaudot[c];
}

char teleprinter::getCharFromBaudot(int b)
{
	// implementation code should be added here
	// you should also change the return statement
	// where appropriate

	return baudotToChar[b];
}

string teleprinter::encryptMessage(string message)
{
	// implementation code should be added here
	// you should also change the return statement
	// where appropriate
	int i;
	for (i = 0; i < message.length(); i++)
	{
		int encryptionChar;
		encryptionChar = encryptor.encryptChar(getBaudotFromChar(message[i]));
		getBaudotFromChar(encryptionChar);
	}

	return "";
}