// Program to print grades of student based on the marks :-
#include <iostream>
using namespace std;

int main()
{
    int Marks;
    cin >> Marks;

    if (Marks >= 80 && Marks <= 100)
    {
        // cout << "Your Grade is : A";
    }
    else if (Marks >= 60)
    {
        cout << "Your Grade is : B";
    }
    else if (Marks >= 50)
    {
        cout << "Your Grade is : C";
    }
    else if (Marks >= 45)
    {
        cout << "Your Grade is : D";
    }
    else if (Marks >= 25)
    {
        cout << "Your Grade is : E";
    }
    else if (Marks < 25)
    {
        cout << "Your Grade is : F";
    }
}