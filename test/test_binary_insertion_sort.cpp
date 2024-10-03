#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <binary_insertion_sort.h>



TEST_CASE()
{

	int N = 5;
	float A1[5] = { 1.2, 6.4, 3.01, 5.8, 8.0 };
	BinaryInsertionSort(N, A1);
	for (int i = 0; i < N - 1; i++) {
		REQUIRE(A1[i] <= A1[i + 1]);
	}

	N = 10;
	double A2[10] = { -10, -33, -79, -19, -80, -100, -24, -92, -66, -41 };
	BinaryInsertionSort(N, A2);
	for (int i = 0; i < N - 1; i++) {
		REQUIRE(A2[i] <= A2[i + 1]);
	}

	N = 8;
	int A3[8] = { 1, 38, 38, 41, 76, 83, 88, 98 };
	BinaryInsertionSort(N, A3);
	for (int i = 0; i < N - 1; i++) {
		REQUIRE(A3[i] <= A3[i + 1]);
	}
}