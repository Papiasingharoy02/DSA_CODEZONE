#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the range:";
    cin>>n;
    int c=1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<c;
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;

}