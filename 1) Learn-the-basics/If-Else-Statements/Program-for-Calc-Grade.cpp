// Program to print grades of student based on the marks :-

#include <iostream>
using namespace std;

int main()
{
    int Marks;
    cin >> Marks;

    if (Marks >= 80 && Marks <= 100)
    {
        cout << "Your Grade is : A";
    }
    else if (Marks >= 60 && Marks <= 79)
    {
        cout << "Your Grade is : B";
    }
    else if (Marks >= 50 && Marks < 59)
    {
        cout << "Your Grade is : C";
    }
    else if (Marks >= 45 && Marks < 49)
    {
        cout << "Your Grade is : D";
    }
    else if (Marks >= 25 && Marks < 44)
    {
        cout << "Your Grade is : E";
    }
    else if (Marks < 25)
    {
        cout << "Your Grade is : F";
    }
}