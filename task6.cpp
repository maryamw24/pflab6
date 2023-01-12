#include <iostream>
using namespace std;
float totalIncome(string show, int rows, int columns);

main()
{
    int rows, columns;
    string show;
    cout<<"Enter number of rows in the hall:";
    cin>>rows;
    cout<<"Enter number of columns in the hall:";
    cin>>columns;
    cout<<"Enter the show:";
    cin>>show;
    float income= totalIncome(show, rows, columns );
    cout<<income;
}

float totalIncome(string show, int rows, int columns)
{
    int seats = rows * columns;
    float income;
    if (show == "premiere")
    {
        income = seats*12.00;
    }
    else if (show == "normal")
    {
         income = seats *7.50;  
    }
    else if (show == "discount")
    {
          income = seats * 5.00;
    }
    return income;
}