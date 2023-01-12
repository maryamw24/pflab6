#include <iostream>
using namespace std;
int isgreatest(int number1, int number2, int number3);

main()
{
    int number1;
    int number2;
    int number3;
    int greatest;
    cin>>number1;
    cin>>number2;
    cin>>number3;
    greatest == isgreatest(number1, number2, number3);
    cout<< greatest;
}

int isgreatest(int number1, int number2, int number3)
{
    int greatest;
    if(number1>number2 && number1>number3)
    {
        greatest = number1;
    }
   else  if (number2>number1 && number2>number3)
    {
        greatest = number2;
    }
   if (number3>number2 && number3>number1)
    {
        greatest = number3;
    }
    else
    {
        greatest == number1;
    }

 return  greatest;
}