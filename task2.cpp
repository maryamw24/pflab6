#include <iostream>
using namespace std;
char grades(int numbers);

main()
{
    int numbers;
    char grade;
    cout<<"Enter numbers:";
    cin>>numbers;
    grade= grades(numbers);
    cout<<"grade is "<<grade;
}

char grades(int numbers)
{
    char grade;
    if (numbers<50)
    {
        grade = 'F';
    }
     if (numbers >= 50 && numbers <=60)
    {
        grade = 'E';
    }
     if (numbers >= 61 && numbers <= 70)
    {
        grade = 'D';
    }
    if(numbers >= 71 && numbers <=80)
    {
        grade = 'C';
    }
    if (numbers >= 81 && numbers <=85 )
    {
        grade = 'B'; 
    }
    if (numbers>86)
    {
        grade = 'A';
    }
    return grade;
}
    

