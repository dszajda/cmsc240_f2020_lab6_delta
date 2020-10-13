#ifndef __CHARACTER_VECTOR_CPP__
#define __CHARACTER_VECTOR_CPP__

#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

CharacterVector::CharacterVector()  {}
CharacterVector::~CharacterVector() {}

int CharacterVector::size() 
{  
   return characterVector.size();
}

// just return the character at the specified index; use the at() method rather
// than [] so that an out_of_range error will be thrown for an invalid index
char CharacterVector::get(int index) 
{ 
	return characterVector.at(index);
}

// if index is size-legitimate, put the value at that index;
// otherwise, use push_back to append to the end of the vector
void CharacterVector::put(char value, int index)
{
	if (index < characterVector.size() - 1 && index>=0)
	{
		auto it = characterVector.insert(characterVector.begin() + index, value);
	}
	else
		characterVector.push_back(value);
	return;
}

// use push_back to append
void CharacterVector::put(char value)
{
	characterVector.push_back(value);
	return;
}

// for each double in doubleVector, use static_cast<char> to append as a
// character to characterVector
void CharacterVector::appendDoubleVector(DoubleVector& doubleVector)
{
	int size = doubleVector.size();
	for (int i = 0; i < size; i++)
	{
		int integer = static_cast<int> (doubleVector.get(i));
		char c = static_cast<char> (integer);
		characterVector.push_back(c);
	}

	return;
}

// for each integer in integerVector, use static_cast<char> to append as a
// character to characterVector
void CharacterVector::appendIntegerVector(IntegerVector& integerVector)
{
	int size = integerVector.size();
	for (int i = 0; i < size; i++)
	{
		char c = static_cast<char> (integerVector.get(i));
		characterVector.push_back(c);

	}
	return;
}

#endif
