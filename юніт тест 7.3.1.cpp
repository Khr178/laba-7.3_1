#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 7.3.1/лаба 7.3.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест731
{
	TEST_CLASS(юніттест731)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int colCount = 3;
			int rowCount = 6;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];
			Create(a, rowCount, colCount, 1, 1);
			Sort(a, rowCount, colCount);
			Assert::AreEqual(a[1][1], 1);
		}
	};
}
