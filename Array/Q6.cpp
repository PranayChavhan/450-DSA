// Find the Union and Intersection of the two sorted arrays.

#include<iostream>
using namespace std;


void unio(int arr1[], int arr2[], n1, n2){
    int arr3[10] = arr1[];

    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n2; j++){
            if(arr2[j] != arr3[i] )

            arr3[i] = arr[j]
        }
    }

    int m = arr3.sizeof();
    cout<<"UNION ARRAY"<<endl;
    for(int i = 0; i<m; i++){
        cout<<arr3[i]<<" ";
    }

}


int main(){

    cout<<"FIRST ARRAY"<<endl;
    cout<<"Enter how many element do you want to add in first array: ";
    int n1;
    int arr1[10];
    cin>>n1;

    cout<<"Enter elements: "<<endl;
    cout<<"Press ENTER"<<endl;

    for(int i = 0; i<n1; i++){
        cin>>arr1[i];
    }

    cout<<"SECOND ARRAY"<<endl;
    cout<<"Enter how many element do you want to add in second array: ";
    int n2;
    int arr2[10];
    cin>>n2;

    cout<<"Enter elements: "<<endl;
    cout<<"Press ENTER"<<endl;

    for(int i = 0; i<n2; i++){
        cin>>arr2[i];
    }

    cout<<"FIRST ARRAY"<<endl;
    for(int i = 0; i<n1; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    cout<<"SECOND ARRAY"<<endl;
    for(int i = 0; i<n2; i++){
        cout<<arr2[i]<<" ";
    }


    unio(arr1, arr2, n1, n2)
    return 0;
}