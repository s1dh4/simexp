#### doc

ShoppingBill/Testing contains the code and test files.


`src` folder contains "TotalBill.cpp".

"TotalBill.cpp" contains a function which takes input as a vector of integers, each integer (number) corresponds to a different item. Here item and numbers are linked by a map. Function links the numbers to different items and calculates the total payable amount with tax and returns it in output.



`test` folder contains "Test.cpp" and "test_main.cpp" file.

"Test.cpp" file tests the code function from TotalBill.cpp, it calls this function and compares the returned value with expected values.

"test_main.cpp" file contains main function definition of Catch2 for testing.



`include/catch` contains "Catch2.hpp" header file, which is used to do unit test in Catch2 FrameWork.
