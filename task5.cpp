#include <iostream>
using namespace std;
string checkSpeed(float speed);

main()
{
 float speed;
 string print;
 cout<<"Enter your speed :";
 cin>>speed;
 print = checkSpeed(speed);
 cout<<print;
}

string checkSpeed(float speed)
{
    string print;
    if (speed<=10)
    {
        print = "Slow"; 
    }
    else if (speed > 10 && speed <=50)
    {
        print = "average";
    }
    else if (speed > 50 && speed<=150 )
    {
        print = "fast";
    }
    else if (speed >150 && speed<=1000)
    {
        print = "ultra fast";
    }
    else if (speed > 1000)
    {
        print = "extremely fast";
    }
    return print;
}