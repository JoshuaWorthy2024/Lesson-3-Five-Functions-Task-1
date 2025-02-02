#include <iostream>
using std::endl;
using std::cout;
using std::cin;

/*
Practice Task 1: Five Functions
Objective : Practice defining and chaining multiple functions.

Instructions :

Write a program that includes the following functions :
	A function that increments an integer by 1.
	A function that multiplies an integer by 2.
	A function that increments the result by 4.
	A function that divides the result by 2.
	A function that subtracts the original input from the final result.
	Sequentially call these functions, passing the results from one function to the next.

Hint: The following function prototypes may be useful :

int IncrementByOne(int i);

int MultiplyByTwo(int i);

int IncrementByFour(int i);

int DivideByTwo(int i);

int SubtractOriginalNumber(int i, int originalNum);
*/

int incrementByOne(int i) {
	return i + 1;
}

int multiplyByTwo(int i) {
	return i * 2;
}

int incrementByFour(int i) {
	return i + 4;
}

int divideByTwo(int i) {
	return i / 2;
}

int subtractOriginalNumber(int i, int originalNum) {
	return i - originalNum;
}

int main() {
	int originalNumber = 0;
	cout << "Enter a number: ";
	cin >> originalNumber;

	// -- would insert check here

	int modifiedNumber = originalNumber;

	modifiedNumber = incrementByOne(modifiedNumber);
	modifiedNumber = multiplyByTwo(modifiedNumber);
	modifiedNumber = incrementByFour(modifiedNumber);
	modifiedNumber = divideByTwo(modifiedNumber);
	modifiedNumber = subtractOriginalNumber(modifiedNumber, originalNumber);

	cout << endl << "Modified: " << modifiedNumber << " | Original: " << originalNumber << endl;
	return 0;
}