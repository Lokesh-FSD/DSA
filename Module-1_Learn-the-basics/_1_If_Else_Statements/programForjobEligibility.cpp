#include <iostream>
using namespace std;

int main()
{
    int age;

    cin >> age;
    if (age < 18)
    {
        cout << "you are not eligible for job";
    }
    if (age <= 57)
    {
        cout << "Eligible for job";
        if (age >= 55)
        {
            cout << " but Retirement soon";
        }
    }
    else
    {
        cout << "retirement time";
    }
}