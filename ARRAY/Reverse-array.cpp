#include<iostream>

using namespace std;

void reverse(int arr[], int n){

    int start=0;
    int end=n-1;

    while(start<=end){
    
         swap(arr[start],arr[end]);
        start++;
        end--;
        }
    }
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[6]={1,4,0,5,-2,15}; //even case
    int brr[5]={2,6,3,9,4};     // odd case

    reverse(arr,6);  // reverse of arr[] & brr[]
    reverse(brr,5);

    PrintArray(arr,6);  // printing the reverse array's
    PrintArray(brr,5);
    return 0;

}
