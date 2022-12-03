#include <iostream>	/* File: conversion-operator.cpp */
#include <cstring>
using namespace std;

class Word {
  private: int frequency; char* str;
  public: 
    Word(const char* s)
      { frequency = 1; str = new char[strlen(s) + 1]; strcpy(str, s); }
};

class EnglishWord {
  private: int frequency; char* str;
  public:
    EnglishWord(const char* s)
      { frequency = 1; str = new char[strlen(s) + 1]; strcpy(str, s); }
 
    operator Word() 
      { cout << "conversion operator is called" << endl; return Word(str); }
};

void process_word(Word aObj) {}

int main() {
  EnglishWord engWord("Titanic");
  Word word = engWord;    // Implicit conversion by surprise
  process_word(engWord);  // Implicit conversion by surprise
}
