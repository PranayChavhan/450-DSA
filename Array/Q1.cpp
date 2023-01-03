// Write a program to reverse an array or string


#include<iostream>
#include<string>
using namespace std;

void reverseString(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int s = 0;
    int e = str.size() - 1;


    // for (int i = 0; i < e; i++){
    //     char temp = str[i];
    //     str[i] = str[e];
    //     str[e] = temp;
    //     e--;
    // }

    while(s <= e){
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        e--;
        s++;
    }

    // for (int i = 0, j = str.length() - 1; i < j; i++, j--) {
    //     char temp = str[i];
    //     str[i] = str[j];
    //     str[j] = temp;
    // }

  cout << "Reversed string: " << str << endl;
}

void reverseArray(int arr[], int start, int end){
    int temp;
    if(start >= end){
        return;
    }
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start+1, end-1);
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<" ";
}



int main(){
    int n;
    // cout<<"Enter the number of element you want to store: "<<endl;
    // cin>>n;

    // int arr[10];

    // cout<<"Enter the elements of the array: "<<endl;
    // for(int i = 0; i<n; i++){
    //     cin >> arr[i];
    // }

    // printArray(arr, 6);
    // reverseArray(arr, 0, 5);
    // cout<<"\nReversed array is "<<endl;
    // printArray(arr, 6);

    reverseString();

    return 0;
}