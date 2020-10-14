#ifndef __INTEGER_VECTOR_CPP__
#define __INTEGER_VECTOR_CPP__

#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

IntegerVector::IntegerVector()  {}
IntegerVector::~IntegerVector() {}

int IntegerVector::size() 
{
<<<<<<< HEAD
   return 0
=======
   return integerVector.size();
>>>>>>> c0574c7d360da6b5190cd8bfa7e5ba2d835bb23b
}

// just return the integer at the specified index; use the at() method rather
// than [] so that an out_of_range error will be thrown for an invalid index
int IntegerVector::get(int index)  
{ 
<<<<<<< HEAD
   return 0
=======
   return integerVector.at(index);
>>>>>>> c0574c7d360da6b5190cd8bfa7e5ba2d835bb23b
}

// if index is size-legitimate, put the value at that index;
// otherwise, use push_back to append to the end of the vector
void IntegerVector::put(int value, int index)
{
   if (index >= 0 && static_cast<unsigned int>(index) < integerVector.size()){
      integerVector.at(index) = value;
   }

   else{
      integerVector.push_back(value);
   }
}

// use push_back to append
void IntegerVector::put(int value)
{
   integerVector.push_back(value);
}

// for each char in characterVector, use static_cast<int> to append as an
// integer to integerVector
void IntegerVector::appendCharacterVector(CharacterVector& characterVector)
{
   for (int i = 0; i < characterVector.size(); i++){
      int newInt = static_cast<int> (characterVector.get(i));
      integerVector.push_back(newInt);
   }
}

// for each double in doubleVector, use static_cast<int> to append as an
// integer to integerVector
void IntegerVector::appendDoubleVector(DoubleVector& doubleVector)
{
  for (int i = 0; i < doubleVector.size(); i++){
      int newInt = static_cast<int> (doubleVector.get(i));
      integerVector.push_back(newInt);
   }
}

#endif
