#include "pch.h"
#include "CppUnitTest.h"
#include "../LB_5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 2.0;
			double expected = (cos(x + 1)) / (pow(cos(x + 1), 2));

			double actual = h(x) ; 

			Assert::AreEqual(expected, actual, 0.001);
		}
	};
}
