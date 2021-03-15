#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_opp_2.3/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp23
{
	TEST_CLASS(UnitTestopp23)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			unsigned char c;
			Money a(10, 15);
			c = a.GetKopiyku();
			Assert::AreEqual(c, (unsigned char)15);
		}
	};
}
