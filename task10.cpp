#include <iostream>
using namespace std;
int playtime(int holidays, int hweekend, string year);

main()
{
    int holidays;
    int hweekend;
    string year;
    int total;
    cout<<"Enter number of holidays:";
    cin>>holidays;
    cout<<"Enter number of weekends in hometown:";
    cin>>hweekend;
    cout<<"Enter the year(leap/ normal):";
    cin>>year;
    total = playtime( holidays, hweekend, year);
    cout<<total;
}

int playtime(int holidays, int hweekend, string year)
{
    float vweekend = 48- hweekend;
    float playedweekend= vweekend*0.75;
    float playholiday= holidays*0.66666667;
    float played= playedweekend + playholiday + hweekend;
    int total;
    if (year == "normal")   
    {
        total = played;
    }
    if (year == "leap")
    {
        float extra = (played*0.15);
        total = extra + played;
    }
    return total;

}