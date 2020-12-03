#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1_rec/8.1_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char k[] = { "*" };
			t = Count(k, 0);
			Assert::AreEqual(t, 0);
		}
	};
}
