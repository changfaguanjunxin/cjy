#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arrr[] = { -9,-5,-8,11,20,-2,-100 };
			Assert::AreEqual(31, maxSubArraySum(arrr, 7));
			int a[] = { -9,18,-4,13,-100,-2 };
			Assert::AreEqual(27, maxSubArraySum(a, 6));
			int ar[] = { -10, 3, 6, 8 };
			Assert::AreEqual(17, maxSubArraySum(ar, 4));
			int arr[] = { -1,2,9,0 };
			Assert::AreEqual(11, maxSubArraySum(arr,4));

		}
		int maxSubArraySum(int a[], int size) {
			int max_so_far = INT_MIN, max_ending_here = 0;

			for (int i = 0; i < size; i++) {
				max_ending_here = max_ending_here + a[i];
				if (max_so_far < max_ending_here)
					max_so_far = max_ending_here;

				if (max_ending_here < 0)
					max_ending_here = 0;
			}
			return max_so_far;
		}
	};
}
