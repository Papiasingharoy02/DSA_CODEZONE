#include<iostream>

using namespace std;

int main()
{
    int a=5;
    cout<< a <<" is an integer data type" << endl;

    char ch = 'b';
    cout<< ch << " is a chacter data type" << endl;

    float f=1.5;
    cout<< f << " is a floating point data typre" << endl;

    bool bl = false;
    cout<< bl << " is a boolean data type" << endl;

    double d = 2.66;
    cout<< d << " is a double data type" << endl;

    int size1=sizeof(a);
    cout<< "size of a is: " << size1 <<endl;

    int size2=sizeof(ch);
    cout<< "size of ch is: " << size2 <<endl;

    int size3=sizeof(f);
    cout<< "size of f is: " << size3 <<endl;

    int size4=sizeof(bl);
    cout<< "size of bl is: " << size4 <<endl;

    int size5=sizeof(d);
    cout<< "size of d is: " << size5 <<endl;

    int c = 'c'; // typecasting: we can convert character to integer value ; ascii val of c is 99
    cout<< c <<endl;

    char f1 = 101; // typecasting: we can convert integer to character value ; ascii val of e is 101
    cout << f1 << endl;
    return 0;
}
