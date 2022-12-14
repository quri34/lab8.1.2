#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1.2/lab8.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My812
{
	TEST_CLASS(My812)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* stringToTest = "+ - = +-= + -= +- = +_-_=";

			int expectedCount = 3, actualCount = Count(stringToTest);

			Assert::AreEqual(expectedCount, actualCount);

		}
	};
}
