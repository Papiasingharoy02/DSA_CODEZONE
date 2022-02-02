#include<iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter the charcter:";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<ch<<" is an upper case"<<endl;
    }
    else if(ch>='a' && ch<='z'){
        cout<<ch<<" is a lower case"<<endl;
    
    }
    else if(ch>='0' && ch<='9'){
        cout<<ch<<" is a numerial value"<<endl;
    }
    return 0;
}
