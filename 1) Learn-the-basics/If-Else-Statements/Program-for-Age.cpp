// Program to Check the user is adult or not :-

#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "you are an Adult";
    }
    else
    {
        cout << "You are still a teenager";
    }
    return 0;
}