#include<iostream>
using namespace std;
int main(){

    int num[10];       // declare an array with size
    cout << "Array index is ready" << num[8] << endl;  // accessing an array


    int first[3]={1,2,5};      //declare an array with size and initializing elements 
    cout<< " value of 2nd index is : " << first[2] << endl; 

    int second[15]={2,7};
    int n = 15;

    //print the array  
    for(int i=0; i<n; i++)
    {
        cout<< "Array is : " << second[i] << endl;
    }

    return 0;
}

