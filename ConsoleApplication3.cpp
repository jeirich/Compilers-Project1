// ConsoleApplication3.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>


class Lex {
private:
	std::ofstream outputStream;
	std::ifstream inputStream;
	char c;



public:
	Lex(std::string, std::string);
	void writeHello();
	void readinput();
	char getChar();
	~Lex();

};

Lex::~Lex(){
	inputStream.close();
	outputStream.close();
}

char Lex::getChar() {
	char i;
	inputStream.get(i);
	return i;
}

Lex::Lex(std::string a, std::string b) {
	inputStream.open(a);
	outputStream.open(b);
	outputStream << "Lexeme" << '\t' << "Token" << std::endl;

}

void Lex::writeHello() {
	outputStream << "Hello World" << std::endl;
	return;
}

void Lex::readinput() {
	while (!inputStream.eof()) {
		c = getChar();
		switch (c)
		{
		case ('{'):
			outputStream << c << '\t' << "Separator" << std::endl;
			break;
		case ('}'):
			outputStream << c << '\t' << "Separator" << std::endl;
			break;
		case ('('):
			outputStream << c << '\t' << "Separator" << std::endl;
			break;
		case (')'):
			outputStream << c << '\t' << "Separator" << std::endl;
			break;
		case (';'):
			outputStream << c << '\t' << "End of Statement" << std::endl;
			break;
		case ('='):
			outputStream << c << '\t' << "Operator" << std::endl;
			break;
		case ('+'):
			outputStream << c << '\t' << "Operator" << std::endl;
			break;
		case ('-'):
			outputStream << c << '\t' << "Operator" << std::endl;
			break;
		case ('*'):
			outputStream << c << '\t' << "Operator" << std::endl;
			break;
		case ('/'):
			outputStream << c << '\t' << "Operator" << std::endl;
			break;
		case (' '):
			outputStream << "WHITESPACE" << std::endl;
			break;



		}





		std::cout << c << std::endl;
	}



}


int main()
{
	Lex open("inputfile.txt", "outputfile.txt");
	open.readinput();

    return 0;
}

