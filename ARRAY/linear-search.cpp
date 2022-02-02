#include<iostream>

using namespace std;

bool linear(int arr[], int size, int key){

    for(int i=0; i<size; i++){
        if( arr[i] == key ){
                return 1;
        }
    }
    return 0;
}

int main(){
    int arr[100];
    int n,key;
    cout<<"enter the range:";
    cin>>n;
    cout<<"enter the numbers" <<endl;
    for( int i=0; i<n; i++){
        cin>> arr[i];
    }
    cout<<"Enter the key that you want to search in array list:";
    cin>>key;
    // bool found = linear(arr,n,key);
    if(linear(arr,n,key)){
            cout << "The key is present in the list" << endl;
    }
    else{
        cout << "The key is not present in the list" << endl;
    }
    return 0;
}