/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
using namespace std;

int main()
{
    float age, height, bounty;
    cout << "Enter your age: \n";
    cin >> age;

    if (age <= 25)
    {
        cout << "Enter your height: ";
        cin >> height;

        if (height < 100)
        {
            cout << "Your character = Chopper";
            return 0;
        }
        if (height < 180)
        {
            cout << "Your character = Usopp";
            return 0;
        }
        if (height > 180)
        {
            cout << "Enter your bounty: ";
            cin >> bounty;
        }
        if (bounty < 11000000000)
        {
            cout << "Your character = Sanji";
            return 0;
        }
        if (bounty > 11000000000)
        {
            cout << "Your character = Zoro";
            return 0;
        }
    }
    if (age > 60)
    {
        cout << "Your character = Brook";
        return 0;
    }

    if (age < 60)
    {
        cout << "Enter your bounty: ";
        cin >> bounty;
    }
    if (bounty < 5000000000)
    {
        cout << "Your character = Franky";
        return 0;
    }
    if (bounty > 5000000000)
    {
        cout << "Your character = Jinbe";
        return 0;
    }
}