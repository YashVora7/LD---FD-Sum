// SUM OF ALL INPUT NUMBER

// #include<iostream>
// using namespace std;

// int main(){
//    int sum,lastDigit,num;

//    sum = 0;

//    cout << "Enter any number of digits: ";
//    cin >> num;

//    while (num > 0)
//    {
//       lastDigit = num % 10;
//       sum = sum + lastDigit;
//       num = num/10;
//    }

//    cout << "Your result is " << sum;

// }



// SUM OF FIRST-DIGIT AND LAST-DIGIT

#include <iostream>
using namespace std;

int main()
{
   int sum, lastDigit, firstDigit, num;

   cout << "Enter any number of digits: ";
   cin >> num;

   sum = 0;
   lastDigit = num % 10;

   while (num >= 10)
   {
      num = num / 10;
   }

   firstDigit = num;
   sum = firstDigit + lastDigit;

   cout << "Your result is: " << sum;
}