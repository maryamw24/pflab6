#include <iostream>
using namespace std;
int calPrice(string day, string month, int amount );

main()
{
    int amount;
    string month, day;
    int total;
    cout<<"enter amount :";
    cin>>amount;
    cout<<"Enter month:";
    cin>>month;
    cout<<"Enter day:";
    cin>>day;
    total = calPrice(day, month, amount);
    cout<<"total is:"<<total;


}
int calPrice(string day, string month, int amount )
{
    int total;
    int discount;
    if( day == "Sunday" && (month == "October"|| month == "March" || month == "August"))
    {
        discount = amount *0.1;
        total= amount - discount; 
    }
    else if (day == "Monday" && (month == "November" || month =="December") )
    {
        discount = amount * 0.05;
        total = amount - discount;
    }
    else 
    {
        total = amount;
    }
    return total;
}

