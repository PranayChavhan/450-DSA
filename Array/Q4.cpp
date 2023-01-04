// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<" ";
}

void sort012(int arr[], int n){
    int i;
    int count0 = 0, count1 = 0, count2 = 0;

    for(i = 0; i < n; i++){
        switch (arr[i])
        {
        case 0:
            count0++;
            break;
        
        case 1:
            count1++;
            break;
        case 2:
            count2++;
            break;
        }
    }

    i = 0;

    while(count0 > 0){
        arr[i++] = 0;
        count0--;
    }
    while (count1 > 0)
    {
        arr[i++] = 1;
        count1--;
    }
    while (count2 > 0)
    {
        arr[i++] = 2;
        count2--;
    }
    
    printArray(arr, n);
    
}

int main(){

    int n;
    int arr[10];
    cout<<"Enter how many element you want to add: "<<endl;

    cin>>n;

     cout<<"Enter element of array: "<<endl;
     cout<<"(Press ENTER)"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    sort012(arr, n);

    return 0;
}