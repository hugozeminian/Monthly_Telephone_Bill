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

float calcCall_Rule1(float numOfCalls, int RULE1, float TAX1){
  return ((numOfCalls - RULE1) * TAX1);
}

float calcCall_Rule2(float numOfCalls, int RULE1, float TAX1, int RULE2, float TAX2){
  int calc1 = numOfCalls - (RULE2 - RULE1);
  float calc2 = calcCall_Rule1(numOfCalls, calc1, TAX1);
  float calc3 = ((numOfCalls - RULE2) * TAX2);
  return calc2 + calc3;  
}

float calcCall_Rule3(float numOfCalls, int RULE1, float TAX1, int RULE2, float TAX2, int RULE3, float TAX3){
  float calc1 = calcCall_Rule2(RULE3, RULE1, TAX1, RULE2, TAX2);
  float calc2 = ((numOfCalls - RULE3) * TAX3);
  return calc1 + calc2;
}

int main() {
  float numOfCalls;
  float TAX1 = 0.30;
  float TAX2 = 0.20;
  float TAX3 = 0.10;
  int MINIMUM = 20;
  int RULE1 = 100; 
  int RULE2 = 150;
  int RULE3 = 200;

  
  cout << "Enter the total number of calls:" << endl;
  cin >> numOfCalls;

  if (numOfCalls <= RULE1) {
    cout << "Your monthly bill is: $" << MINIMUM << endl;
  }
  else if (numOfCalls <= RULE2) {
    cout << "Your monthly bill is: $" << MINIMUM + calcCall_Rule1(numOfCalls, RULE1, TAX1) << endl;
  }
  else if (numOfCalls <= RULE3){
   cout << "Your monthly bill is: $" << MINIMUM + calcCall_Rule2(numOfCalls, RULE1, TAX1, RULE2, TAX2) << endl;
  }
  else if (numOfCalls > RULE3){
   cout << "Your monthly bill is: $" << MINIMUM + calcCall_Rule3(numOfCalls, RULE1, TAX1, RULE2, TAX2, RULE3, TAX3) << endl;
  }

  return 0;
}