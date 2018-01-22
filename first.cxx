#include <iostream>
using namespace std;

/*
 * This function is a comment, and should be ignored by the compiler
 * 
 * 
 * 
 * 
 * 
*/
int fuck(int a, int b) {
	return a * b;
	
}

int main() {
	int input;
	cout << "Please input a number, and it will be magically transformed \n";
	cin >> input;
	int firstNum = 3;
	int secondNum = 332;
	int product = firstNum * secondNum * input;
	cout << "Hi you've just used an amazing programm! \n";
	cout << product + 10032 << '\n'; 
	cout << fuck(firstNum, input);
	return 0;
} 

