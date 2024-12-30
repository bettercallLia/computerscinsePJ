#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string addlargenumbers( string num1, string num2) 
{
	
 int len1 = num1.length();
 int len2 = num2.length();
 if (len1<len2);
 {
 
 	string temp = num1;
	num1 = num2;
 	num2 = temp;
 }
 while(len2 < len1)
 {
 num2= '0'+ num2;
 }
 string result = " ";
 int carry = 0;
int i =len1 - 1;int j = len2 - 1;
int digit1, digit2;	
 while (i >= 0 or j>=0 or carry)
 {
 digit1 = (i >=0 ) ? num1[i] - '0' : 0;
 digit2 = ( j>=0 ) ? num2[j] - '0' : 0;
 
 int sum = digit1 + digit2 + carry;
 carry = sum /10;
 result += (sum % 10)+ '0';

 i--;
 j--;
}
 reverse(result.begin(), result.end());

return result;
}
 int main()
{
  string num1,num2;
  cout<<"Enter the first number:";
  cin>>num1;
  cout<<"Enter the second number:";
  cin>>num2;
   string result = addlargenumbers(num1, num2);
   cout<<"the sum of the your entry two large number is ="<< result <<endl;
 return 0;
}