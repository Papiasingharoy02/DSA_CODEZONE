#include<iostream>

using namespace std;

void PrintArray(int arr[], int size){  //function creation , parameter passed

    cout<<"Printing the array " <<endl;  
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int num[5]={1,2,5,4,2};  //array
    int size=5; 
    PrintArray(num,5); //call the function

    int fourth[7]={1,2,5,1,5,1,4};
    int size1 = 7;
    int fourthsize= sizeof(fourth)/sizeof(int); // check the size of the array 
    cout<<"\nSize of fourth is: " << fourthsize <<endl;

    char ch[5]={'a','b','f','j','p'};
    cout<<"The Third value is: " <<ch[3] << endl;

    // PrintArray(ch,5);  // it cannot call the function because it is not convert the character to integer;

    //to prevent this just print the char array in main()

    int n=5;
    for(int i=0; i<5; i++){
        cout<< "Printing the array: "<< ch[i]<<" ";
    }
    return 0;

}
