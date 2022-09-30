/*

  Program C: Monthly Telephone Bill

Overview:

Write a program to calculate the monthly telephone bills as per the following
rule:

Directions

You must accept the total number of calls from the user and calculate the
monthly (pay as you go) bill according to the following rule.

Minimum $20 for up to the first 100 calls.
Plus $0.30 per call for the next 50 calls.
Plus $0.20 per call for the next 50 calls.
Plus $0.10 per call for any call beyond 200 calls.

Sample Input/Output 01:
Enter the total number of calls:
130
Your monthly bill is: $29

Sample Input/Output 02:
Enter the total number of calls:
180
Your monthly bill is: $41


Sample Input/Output 03:
Enter the total number of calls:
500
Your monthly bill is: $75

*/

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  float numOfCalls;
  cout << "Enter the total number of calls:" << endl;
  cin >> numOfCalls;
  // ToDo
  

  return 0;
}