#include<iostream>

using namespace std;

int main()
{
    //arithmetic operator
    int i = 2.0/5;
    cout<< i<< endl;
    float f = 2.0/5;
    cout<< f<< endl;
    double d = 2.0/5;
    cout<< d<< endl;

    //relational operator
     int a=2;
     int b =3;
     bool first = (a == b); 
     cout <<first<<endl;
     bool seconde = (a > b);
     cout<<seconde<<endl;
     bool third = (a < b);
     cout<<third<<endl;
     bool fourth = (a >=b);
     cout<<fourth<<endl;
     bool fifth = (a <=b);
     cout<<fifth<<endl;
     bool sixth = (a != b);
     cout<<sixth<<endl;

     //modulator operator
     int p = (a % b);
     cout<< p << endl;

    //logical operator
    int n=0;
    cout<<!n<<endl;
    return 0;
}