#include <iostream>
using namespace std;

main()
{
    float budget, left;
    float people;
    string type;
    float transport, need, more;
    float ticketPrice;
    cout<<"Enter your budget:";
    cin>>budget;
    cout<<"Enter number of people:";
    cin>>people;
    cout<<"Enter your type of ticket:";
    cin>>type;
    if (people >= 1 && people <=4) 
    {
        transport= budget*0.75;
        left = budget - transport;
        if (type == "normal")
        {
            ticketPrice = people*249.99;
            if (ticketPrice > left)
            {
                need = ticketPrice- left;
                cout<<"Not Enough money!! "<<need<<" QR needed.";
            }
            if (ticketPrice <= left)
            {
                more = left - ticketPrice;
                cout<<"YES!! "<<more<<" QR are more.";
            }
        }
        if (type == "VIP")
        {
           ticketPrice = people*499.99;
            if (ticketPrice > left)
            {
                need = ticketPrice- left;
                cout<<"Not Enough money!! "<<need<<" QR needed.";
            }
            if (ticketPrice < left)
            {
                more = left - ticketPrice;
                cout<<"YES!! "<<more<<" QR are more.";
            }
        }

    }

    if (people >= 5 && people <=9) 
    {
        transport= budget*0.60;
        left = budget - transport;
        if (type == "normal")
        {
            ticketPrice = people*249.99;
            if (ticketPrice > left)
            {
                need = ticketPrice- left;
                cout<<"Not Enough money!! "<<need<<" QR needed.";
            }
            if (ticketPrice <= left)
            {
                more = left - ticketPrice;
                cout<<"YES!! "<<more<<" QR are more.";
            }
        }
        if (type == "VIP")
        {
           ticketPrice = people*499.99;
            if (ticketPrice > left)
            {
                need = ticketPrice- left;
                cout<<"Not Enough money!! "<<need<<" QR needed.";
            }
            if (ticketPrice <= left)
            {
                more = left - ticketPrice;
                cout<<"YES!! "<<more<<" QR are more.";
            }
        }

    }

    if (people >= 10 && people <=24) 
    {
        transport= budget*0.50;
        left = budget - transport;
        if (type == "normal")
        {
            ticketPrice = people*249.99;
            if (ticketPrice > left)
            {
                need = ticketPrice- left;
                cout<<"Not Enough money!! "<<need<<" QR needed.";
            }
            if (ticketPrice <= left)
            {
                more = left - ticketPrice;
                cout<<"YES!! "<<more<<" QR are more.";
            }
        }
        if (type == "VIP")
        {
           ticketPrice = people*499.99;
            if (ticketPrice > left)
            {
                need = ticketPrice- left;
                cout<<"Not Enough money!! "<<need<<" QR needed.";
            }
            if (ticketPrice <= left)
            {
                more = left - ticketPrice;
                cout<<"YES!! "<<more<<" QR are more.";
            }
        }

    }

    if (people >= 25 && people <=49) 
    {
        transport= budget*0.40;
        left = budget - transport;
        if (type == "normal")
        {
            ticketPrice = people*249.99;
            if (ticketPrice > left)
            {
                need = ticketPrice- left;
                cout<<"Not Enough money!! "<<need<<" QR needed.";
            }
            if (ticketPrice <= left)
            {
                more = left - ticketPrice;
                cout<<"YES!! "<<more<<" QR are more.";
            }
        }
        if (type == "VIP")
        {
           ticketPrice = people*499.99;
            if (ticketPrice > left)
            {
                need = ticketPrice- left;
                cout<<"Not Enough money!! "<<need<<" QR needed.";
            }
            if (ticketPrice < left)
            {
                more = left - ticketPrice;
                cout<<"YES!! "<<more<<" QR are more.";
            }
        }

    }
    if (people >= 50) 
    {
        transport= budget*0.25;
        left = budget - transport;
        if (type == "normal")
        {
            ticketPrice = people*249.99;
            if (ticketPrice > left)
            {
                need = ticketPrice- left;
                cout<<"Not Enough money!! "<<need<<" QR needed.";
            }
            if (ticketPrice <= left)
            {
                more = left - ticketPrice;
                cout<<"YES!! "<<more<<" QR are more.";
            }
        }
        if (type == "VIP")
        {
           ticketPrice = people*499.99;
            if (ticketPrice > left)
            {
                need = ticketPrice- left;
                cout<<"Not Enough money!! "<<need<<" QR needed.";
            }
            if (ticketPrice <= left)
            {
                more = left - ticketPrice;
                cout<<"YES!! "<<more<<" QR are more.";
            }
        }

    }

}









