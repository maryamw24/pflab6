#include <iostream>
using namespace std;
float checkCost(string city, string product, float quantity);

main()
{
    string product ;
    string city;
    float quantity;
    float cost;
    cout<<"Enter the product:";
    cin>>product;
    cout<<"Enter the city:";
    cin>>city;
    cout<<"Enter quantity:";
    cin>> quantity;
    cost =  checkCost( city,  product, quantity);
    cout<< cost;
}


float checkCost(string city, string product, float quantity)
{
    float cost;
    if (product== "Coffee" && city == "varna")
    {
        cost = quantity*0.45;
    }
    else if (product == "Coffee" && city == "sofia")
    {
        cost = quantity*0.50;
    }
    else if (product == "coffee" && city == "plovdiv")
    {
        cost = quantity*0.40;
    }
    else if (product == "water" && (city == "varna"|| city == "plovdiv") )
    {
        cost = quantity*0.70;
    }
    else if (product == "water" && city == "sofia")
    {
        cost = quantity *0.80;
    }
    else if(product== "beer" && city == "sofia" ) 
    {
        cost = quantity*1.20;
    }
    else if (product == "beer" && city == "plovdiv" )
    {
        cost = quantity*1.15;
    }
    else if (product == "beer" && city == "varna")
    {
        cost = quantity*1.10;
    }
    else if (product == "sweets" && city == "sofia")
    {
        cost = quantity*1.45;
    }
    else if (product == "sweets" && city == "plovdiv")
    {
        cost = quantity*1.30;
    }
    else if (product == "sweets" && city == "varna")
    {
        cost = quantity*1.35;
    }
    else if (product== "penuts" && city == "sofia")
    {
        cost = quantity*1.60;
    }
    else if (product== "penuts" && city == "plovdiv")
    {
        cost = quantity*1.50;
    }
    else if (product == "penuts" && city == "varna")
    {
        cost = quantity*1.55;
    }
    return cost;
}