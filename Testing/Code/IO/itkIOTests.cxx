// this file defines the itkBasicFiltersTest for the test driver
// and all it expects is that you have a function called RegisterTests
#include <iostream>
#include "itkTestMain.h" 


void RegisterTests()
{
  REGISTER_TEST(itkConvertBufferTest);
  REGISTER_TEST(itkDicomImageIOTest);
  REGISTER_TEST(itkGiplImageIOTest);
  REGISTER_TEST(itkMetaImageIOTest);
  REGISTER_TEST(itkPNGImageIOTest);
  REGISTER_TEST(itkVOLImageIOTest);
  REGISTER_TEST(itkVTKImageIOTest);
  REGISTER_TEST(itkRawImageIOTest);
  REGISTER_TEST(itkRawImageIOTest2);
  REGISTER_TEST(itkRawImageIOTest3);
  REGISTER_TEST(itkRawImageIOTest4);
}
