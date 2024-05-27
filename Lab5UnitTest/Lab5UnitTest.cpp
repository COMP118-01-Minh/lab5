#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5/Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab5UnitTest
{
	TEST_CLASS(Lab5UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethodSumOfRows)
		{
			// Arrange
			const int ROW = 5;
			double matrix[ROW][MAX_COL] = { 2, 1, 1, 1 };
			double* ptrRet;

			// Act
			ptrRet = sumOfRows(matrix, ROW);

			// Assert
			Assert::AreEqual(5.0, ptrRet[0]);
			Assert::AreEqual(0.0, ptrRet[1]);
			Assert::AreEqual(0.0, ptrRet[2]);

		}
		TEST_METHOD(TestMethod_Row) 
		{
			// Arrange
			double tb1[2][MAX_COL] = { {1, 1, 1, 1, 1}, {2, 2, 2, 2, 2} };
			// Act
			double sum = sumOfRow(tb1, 1, 2);
			// Assert
			Assert::AreEqual(sum, 10.0);
			Assert::AreNotEqual(sum, 5.0);
		}
		TEST_METHOD(TestMethod_Collumn)
		{
			// Arrange
			double tb2[4][MAX_COL] = { {0, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3, 3, 3}, {4, 4, 4, 4, 4} };
			// Act
			double sum = sumOfCol(tb2, 2, 4);
			// Assert
			Assert::AreEqual(sum, 10.0);
			Assert::AreNotEqual(sum, 9.0);
		}
	};
}
