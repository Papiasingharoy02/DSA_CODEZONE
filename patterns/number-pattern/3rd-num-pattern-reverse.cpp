#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the range:";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        /* code */
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
    
}
