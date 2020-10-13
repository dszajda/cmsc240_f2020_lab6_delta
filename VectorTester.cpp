#include <iostream>
#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

int main()
{
   CharacterVector cv;
   DoubleVector    dv;
   IntegerVector   iv;

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "----------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;
   std::cout << "----------------" << std::endl;

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range
   
   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
   std::cout << "-------------" << std::endl;

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range
 
   std::cout << std::endl;
   std::cout << "--------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;
   std::cout << "Predicted: 0 " << "|| " << "Actual : " <<  iv.size() <<std::endl;
   iv.put(30, 0);
   iv.put(40, 1);
   std::cout << "Predicted: 30 " << "|| " << "Actual : " <<  iv.get(0) <<std::endl;
   iv.put(50, 2);
   iv.put(120, 0);
   std::cout << "Predicted: 120 " << "|| " << "Actual : " << iv.get(0) <<std::endl;
   std::cout << "Predicted: 50 " << "|| " << "Actual : " <<  iv.get(2) <<std::endl;
   std::cout << "Predicted: 3 " << "|| " << "Actual : " <<  iv.size() <<std::endl;
   std::cout << "Predicted: out_of_range error " << "|| " << "Actual: " << iv.get(3) <<std::endl;
   std::cout << "--------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
