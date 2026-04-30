#include "pch.h"
#include "CppUnitTest.h"
#include"modul1.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> v = {3, 1, 4, 1, 5, 9};
			int min, max;
			findMinMax(v, min, max);
			Assert::AreEqual(1, min);
			Assert::AreEqual(9, max);
		}
		
		TEST_METHOD(TestMethod2)
		{
			vector<int> v;
			int min, max;
			try {
				findMinMax(v, min, max);
				Assert::Fail(L"Expected exception was not thrown.");
			} catch (const invalid_argument& e) {
				Assert::AreEqual("Vector is empty", e.what());
			}
		}
	};
}
