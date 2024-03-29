/*
Problem #2: Sum of the Last 3 Digits
====================================

● Write a program that reads a positive integer and prints the sum of its last 3
digits.

================================================================================

● Input ⇒ output examples:

○ 15 ⇒ 6
○ 125 ⇒ 8
○ 1000 ⇒ 0
○ 1001 ⇒ 1
○ 1234 ⇒ 9
○ 99999 ⇒ 27

*/

#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	cout << num % 10 + (num % 100) / 10 + (num % 1000) / 100 << endl;
	return 0;
}