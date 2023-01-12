#include <iostream>
using namespace std;
float cheapest(string time, int distance);

main()
{
  string time;
  int distance;
  float leastPrice;
  cout<<"Enter time to travel:";
  cin>>time;
  cout<<"Enter distance:";
  cin>>distance;
  leastPrice = cheapest( time,distance);
  cout<<leastPrice;
}

float cheapest(string time, int distance)
{
    float pricet, priceb, pricetr;
    if (distance < 20)
    {
        if (time == "day")
        {
            pricet = 0.70 + (distance*0.79);
        }
        if (time == "night" )
        {
            pricet = 0.70 + (distance*0.90);
        }
        return pricet;
    }
    if (distance >= 20 && distance<100)
    {
        if (time == "day")
        {
            pricet = 0.70 + (distance*0.79);
            priceb = distance*0.09;
        }
        if (time == "night" )
        {
            pricet = 0.70 + (distance*0.90);
            priceb = distance*0.09;
        }
        return priceb;
    }
    if (distance <= 5000)
    {
        if (time == "day")
        {
            pricet = 0.70 + (distance*0.79);
            priceb = distance*0.09;
            pricetr = distance*0.06;
        }
        if (time == "night" )
        {
            pricet = 0.70 + (distance*0.90);
            priceb = distance*0.09;
            pricetr = distance*0.06;
        }
        return pricetr;
    }
}