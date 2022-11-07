#include "pch.h"
#include "CppUnitTest.h"
#include <sstream>
#include "../ChineseZodiac/ChineseZodiac.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(Chinese_Zodiak_getElement_Test)
		{
			Logger::WriteMessage("Start Chinese_Zodiak_getElement_Test");

			Logger::WriteMessage("    getElement(1984)...");
			Assert::IsTrue(getElement(1984) == "Wood");
			Logger::WriteMessage("      ...passed");

			Logger::WriteMessage("    getElement(1985)...");
			Assert::IsTrue(getElement(1985) == "Wood");
			Logger::WriteMessage("      ...passed");

			Logger::WriteMessage("    getElement(1986)...");
			Assert::IsTrue(getElement(1986) == "Fire");
			Logger::WriteMessage("      ...passed");

			Logger::WriteMessage("    getElement(2022)...");
			Assert::IsTrue(getElement(2022) == "Water");
			Logger::WriteMessage("      ...passed");
			
			Logger::WriteMessage("Chinese_Zodiak_getElement_Test PASSED");
		}

		TEST_METHOD(Chinese_Zodiak_getAnimal_Test)
		{
			Logger::WriteMessage("Start Chinese_Zodiak_getAnimal_Test");

			Logger::WriteMessage("    getAnimal(1984)...");
			Assert::IsTrue(getAnimal(1984) == "Rat");
			Logger::WriteMessage("      ...passed");

			Logger::WriteMessage("    getAnimal(1985)...");
			Assert::IsTrue(getAnimal(1985) == "Ox");
			Logger::WriteMessage("      ...passed");

			Logger::WriteMessage("    getAnimal(1986)...");
			Assert::IsTrue(getAnimal(1986) == "Tiger");
			Logger::WriteMessage("      ...passed");

			Logger::WriteMessage("    GetAnimal(2022)");
			Assert::IsTrue(getAnimal(2022) == "Tiger");
			Logger::WriteMessage("      ...passed");

			Logger::WriteMessage("Chinese_Zodiak_getAnimal_Test PASSED");
		}

		TEST_METHOD(Chinese_Zodiak_getYY_Test)
		{
			Logger::WriteMessage("Start Chinese_Zodiak_getYY_Test");

			Logger::WriteMessage("    getYY(1984)...");
			Assert::IsTrue(getYY(1984) == "yang");
			Logger::WriteMessage("      ...passed");

			Logger::WriteMessage("    getYY(1985)...");
			Assert::IsTrue(getYY(1985) == "yin");
			Logger::WriteMessage("      ...passed");

			Logger::WriteMessage("    getYY(1986)...");
			Assert::IsTrue(getYY(1986) == "yang");
			Logger::WriteMessage("      ...passed");

			Logger::WriteMessage("    GetYY(2022)");
			Assert::IsTrue(getYY(2022) == "yang");
			Logger::WriteMessage("      ...passed");

			Logger::WriteMessage("Chinese_Zodiak_getYY_Test PASSED");
		}
	};
}
