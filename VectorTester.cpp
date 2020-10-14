#include <iostream>
#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

using namespace std;

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
   std::cout << "Predicted Size: 0" << "|| " << "Actual : " <<  cv.size() <<std::endl;
   cv.put('a', 0);
   cv.put('b', 1);
   cv.put('c', 2);
   std::cout << "Predicted Value: a " << "|| " << "Actual : " <<  cv.get(0) <<std::endl;
   std::cout << "Predicted Value: b " << "|| " << "Actual : " <<  cv.get(1) <<std::endl;
   std::cout << "Predicted Value: c " << "|| " << "Actual : " <<  cv.get(2) <<std::endl;
   cv.put('d', 0);
   cv.put('e', 1);
   cv.put('f', 2);
   std::cout << "Predicted Value: d " << "|| " << "Actual : " << cv.get(0) <<std::endl;
   std::cout << "Predicted Value: e " << "|| " << "Actual : " <<  cv.get(1) <<std::endl;
   std::cout << "Predicted Value: f " << "|| " << "Actual : " <<  cv.get(2) <<std::endl;
   std::cout << "Predicted Size: 3 " << "|| " << "Actual : " <<  cv.size() <<std::endl;D
 //  std::cout << "Predicted: out_of_range error " << "|| " << "Actual: " << cv.get(3) <<std::endl;
 //  std::cout << "Predicted: out_of_range error " << "|| " << "Actual: " << cv.get(-1) <<std::endl;
   std::cout << "--------------" << std::endl;

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range
   
   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
   std::cout << "-------------" << std::endl;
  // std::cout << "Predicted: out_of_range error " << "|| " << "Actual: " << dv.get(3) <<std::endl;

   //first test of the size() function
   cout << "Predicted vector size: 0" << "||" << "Actual size: " << dv.size() << endl;

   //testing the put and get index functions
   dv.put(1.1, 0);
   dv.put(1.2, 1);
   dv.put(1.3, 2);
   dv.put(1.4, 3);
   cout << "Predicted value: 1.1 " << "||" << "Actual value: " << dv.get(0) << endl;
   cout << "Predicted value: 1.2 " << "||" << "Actual value: " << dv.get(1) << endl;
   cout << "Predicted value: 1.3 " << "||" << "Actual value: " << dv.get(2) << endl;
   cout << "predicted value: 1.4 " << "||" << "Actual value: " << dv.get(3) << endl;

   //testing the size() function again
   std::cout << "Predicted vector size: 4" << "||" << "Actual size: " << dv.size() << endl;
   
   //testing out_of_range
   cout << "Predicted: out_of_range error " << "||" << "Actual error: " << dv.get(4) << endl;
   cout << "Predicted: out_of_range error " << "||" << "Actual error: " << dv.get(-1) << endl;
   cout << "-------------" << endl;


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
   // std::cout << "Predicted: out_of_range error " << "|| " << "Actual: " << iv.get(3) <<std::endl;
   std::cout << "--------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   cv2.appendIntegerVector(iv);
   for (int i = 0; i < cv2.size(); i++)
   {
      std::cout << cv2.get(i) << std::endl;

   }

   cv2.appendDoubleVector(dv);
      for (int i = 0; i < cv2.size(); i++)
   {
      std::cout << cv2.get(i) << std::endl;
   }

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   dv2.appendCharacterVector(cv);
   for (int i = 0; i < dv2.size(); i++)
   {
      std::cout << dv2.get(i) << std::endl;

   }

   dv2.appendIntegerVector(iv);
   for (int i = 0; i < dv2.size(); i++)
   {
      std::cout << dv2.get(i) << std::endl;
   }

 

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   iv2.appendCharacterVector(cv);
   iv2.appendDoubleVector(dv);
   for (int i = 0; i < iv2.size(); i++){
   std::cout << "dv2 [" << i << "] = " << iv2.get(i) <<std::endl;
   }
   std::cout << "--------------------------" << std::endl;

   iv2.appendCharacterVector(cv);
   for (int i = 0; i < iv2.size(); i++)
   {
      std::cout << iv2.get(i) << std::endl;

   }

   iv2.appendDoubleVector(dv);
      for (int i = 0; i < iv2.size(); i++)
   {
      std::cout << iv2.get(i) << std::endl;
   }

   return 0;
}
