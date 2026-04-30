#include "pch.h"
#include "CppUnitTest.h"
#include "modul.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2){
		public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<Person> people = readPeopleFromCsv("data.csv");
			json j = peopleToJson(people);
			Assert::IsFalse(j.empty(), L"JSON should not be empty");
		}




	

	};
}
