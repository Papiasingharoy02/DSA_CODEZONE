#include<iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cout<<"enter the number: ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"Sum of " <<n<<" is: " <<sum<<endl;
    
    return 0;
}