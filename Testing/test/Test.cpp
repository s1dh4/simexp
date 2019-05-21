/*
 *
 * Filename        : Test.cpp
 * FileType        : C++ test File
 * Author          : Simran Kaur
 * CreatedOn       : 20/05/2019
 * CopyRights      : Airavath Foundation
 * Description     : Tests file containing test cases of the project. This file
 *                   includes the common headers.
 *                   It also includes catch.hpp for catch2 header file.
*/

/*Including the headers for different functions and Catch Framework.*/ 

/*This is including cpp file TotalBill to access code functions for testing */

#include"../src/TotalBill.cpp"
#include "include/catch/Catch2.hpp"
#include<iostream>
#include<vector>
using namespace std;

/*
*                 
* TestCases       : Written in the format allowed in catch2 framwork.
*                   Includes use of sections for testing different inputs in same type testcases.
*/


TEST_CASE("Shopping bill is computed for true check ", "[BILL_FOR_TRUE]") {

	SECTION("BILL: Empty Vector- No Shopping")
	{
		vector<int>V(0);

		REQUIRE(bill(V) == Approx(0.0));
	}

	SECTION("BILL: Some products single time")
	{
		vector<int>V(2);
		V[0] = 1, V[1] = 2;
		
		REQUIRE(bill(V) == Approx(275.00));
	}
	SECTION("BILL: Some products multiple times")
	{
		vector<int>V(4);
		V[0] = 1, V[1] = 2, V[2]=2, V[3]=0;

		REQUIRE(bill(V) == Approx(506.00));
	}
	SECTION("BILL: One product multiple times")
	{
		vector<int>V(5);
		V[0] = 3, V[1] = 3, V[2]=3, V[3]=3, V[4]=3;

		REQUIRE(bill(V) == Approx(1100.00));
	}
}

TEST_CASE("Shopping bill is computed again for false check ", "[BILL_FOR_FALSE]") {

	SECTION("BILL: Empty Vector- No Shopping")
	{
		vector<int>V(0);

		REQUIRE(bill(V) != Approx(1.0));
	}

	SECTION("BILL: Some products single time")
	{
		vector<int>V(2);
		V[0] = 1, V[1] = 2;

		REQUIRE(bill(V) != Approx(175.00));
	}
	SECTION("BILL: Some products multiple times")
	{
		vector<int>V(4);
		V[0] = 1, V[1] = 2, V[2] = 2, V[3] = 0;

		REQUIRE(bill(V) != Approx(206.00));
	}
	SECTION("BILL: One product multiple times")
	{
		vector<int>V(5);
		V[0] = 3, V[1] = 3, V[2] = 3, V[3] = 3, V[4] = 3;

		REQUIRE(bill(V) != Approx(3100.00));
	}
}

TEST_CASE("Shopping bill is computed with some items not present in store ", "[BILL_FOR_SOME_ITEMS_ABSENT]") {

	SECTION("BILL: Some items present, some not present ")
	{
		vector<int>V(4);
		V[0] = 8, V[1] = 2, V[2] = 4, V[3] = 100;

		REQUIRE(bill(V) == Approx(440.00));
	}

	SECTION("BILL: Single item which is not present")
	{
		vector<int>V(1);
		V[0] = 101;

		REQUIRE(bill(V) == Approx(0.0));
	}
	SECTION("BILL: All items not present")
	{
		vector<int>V(6);
		V[0] = 5, V[1] = 22, V[2] = 2019, V[3] = 6, V[4] = 3012, V[5] = 101010; 

		REQUIRE(bill(V) == Approx(0.0));
	}
	SECTION("BILL: One product multiple times but not present")
	{
		vector<int>V(5);
		V[0] = 3000, V[1] = 3000, V[2] = 3000, V[3] = 3000, V[4] = 3000;

		REQUIRE(bill(V) == Approx(0.0));
	}
}

TEST_CASE("Check for Negative input numbers ", "[BILL_FOR_NEGATIVE_INPUT]") {

	SECTION("BILL: Some inputs Positive and in range (0-4), and some Negative")
	{
		vector<int>V(4);
		V[0] = -1, V[1] = 2, V[2] = 4, V[3] = -100;

		REQUIRE(bill(V) == Approx(440.00));
	}

	SECTION("BILL: Single item Negative")
	{
		vector<int>V(1);
		V[0] = -1;

		REQUIRE(bill(V) == Approx(0.0));
	}

	SECTION("BILL: All inputs Negative Negative")
	{
		vector<int>V(6);
		V[0] = -5, V[1] = -2001, V[2] = -19, V[3] = -8, V[4] = -3012, V[5] = -101010;

		REQUIRE(bill(V) == Approx(0.0));
	}

	SECTION("BILL: One product multiple times but Negative")
	{
		vector<int>V(5);
		V[0] = -3000, V[1] = -3000, V[2] = -3000, V[3] = -3000, V[4] = -3000;

		REQUIRE(bill(V) == Approx(0.0));
	}

	SECTION("BILL: Tow items: One Negative, One Absent")
	{
		vector<int>V(2);
		V[0] = -5, V[1] = 5;

		REQUIRE(bill(V) == Approx(0.0));
	}

	SECTION("BILL: Multiple items Negative, Positive: in range and out of range (absent) ")
	{
		vector<int>V(6);
		V[0] = 5, V[1] = 22, V[2] = -2019, V[3] = 4, V[4] = -3012, V[5] = 2;

		REQUIRE(bill(V) == Approx(440.00));
	}
}



	SECTION("BILL: Empty Vector- No Shopping")
	{
		vector<int>V(0);

		REQUIRE(bill(V) != Approx(1.0));
	}

	SECTION("BILL: Some products single time")
	{
		vector<int>V(2);
		V[0] = 1, V[1] = 2;

		REQUIRE(bill(V) != Approx(175.00));
	}
	SECTION("BILL: Some products multiple times")
	{
		vector<int>V(4);
		V[0] = 1, V[1] = 2, V[2] = 2, V[3] = 0;

		REQUIRE(bill(V) != Approx(206.00));
	}
	SECTION("BILL: One product multiple times")
	{
		vector<int>V(5);
		V[0] = 3, V[1] = 3, V[2] = 3, V[3] = 3, V[4] = 3;

		REQUIRE(bill(V) != Approx(3100.00));
	}
}



