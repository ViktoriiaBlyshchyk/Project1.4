#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project1.4\Project1.4\Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 4;
			double GetX();
			Assert::AreEqual(x, GetX());
		}
	};
}
