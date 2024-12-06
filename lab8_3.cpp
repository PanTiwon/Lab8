#include <iostream>
using namespace std;
int age;
double height;
int bounty;
string cht;
int main(){
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25 )
    {
        cout << "Enter your height: ";
        cin >> height;
        if (height < 100)
        {
            cht = "Chopper";
        }
        else if (height >= 100 && height < 180)
        {
            cht = "Usopp";
        }
        else
        {
            cout << "Enter your bounty: ";
            cin >> bounty;
            if (bounty > 1100000000)
            {
                cht = "Zoro";
            }
            else
            {
                cht = "Sanji";
            }
        }

    }
    else if (age > 25 && age <= 60)
    {
        cout << "Enter your bounty: ";
            cin >> bounty;
            if (bounty > 500000000)
            {
                cht = "Jinbe";
            }
            else
            {
                cht = "Franky";
            }
            
    }
    else
    {
        cht = "Brook";
    }
cout << "Your character = " << cht ;
}

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
