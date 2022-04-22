#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/3/lab_3.3B/lab_3.3B/Pair.cpp"
#include "../../../../../політех/ооп/3/lab_3.3B/lab_3.3B/LongLong.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong l(15, 25);
			Assert::AreEqual(25.0, l.getYounger());
		}
	};
}
