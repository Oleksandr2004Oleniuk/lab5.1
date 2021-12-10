#include "pch.h"
#include "CppUnitTest.h"
#include "../Labor5.1/Lab51.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int e;
			int u= 0.00162899;
			double s = 2;
			double t = 3;
			double c = (g(s * s, t + 1) + g(t * t, s + 1)) / (1 + pow(g(s + t, s * t), 2));
			e = c;
			Assert::AreEqual(e, u);
			

		}
	};
}
