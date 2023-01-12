#include <iostream>
using namespace std;
string checkTitle(float age, char gender);

main()
{
    float age; 
    char gender;
    string Title;
    cout<<"enter your age:";
    cin>>age;
    cout<<"enter your gender:";
    cin>>gender;
    Title = checkTitle( age,  gender);
    cout<< Title;

}

string checkTitle(float age, char gender)
{
    string Title;
    if (gender == 'f' && age <16 )
    {
        Title = "Miss";
    }
    else if (gender == 'f' && age >=16 )
    {
        Title = "Ms.";
    }
   else if (gender == 'm' && age <16)
   {
     Title = "master";
   }
   else if (gender == 'm' && age >= 16)
   {
     Title = "Mr.";
   }
   return Title;
}