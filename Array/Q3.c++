// Find the "Kth" max and min element of an array 

#include<iostream>
#include <algorithm>
using namespace std;


void findK(int arr[], int n, int k){
    sort(arr[0], arr[n+1]);
    cout<<arr[k - 1];
}

int main(){
    int n;
    int arr[10];
    cout<<"Enter how many elements you want to add: "<<endl;
    cin>>n;

    cout<<"Enter elements: "<<endl;
    cout<<"(Press ENTER)"<<endl;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<arr<<endl;
    findK(arr, n, 4);
    return 0;
}




// The prototype for sort is : 

// sort(startaddress, endaddress)

// startaddress: the address of the first 
//               element of the array
// endaddress: the address of the next 
//             contiguous location of the 
//             last element of the array.
// So actually sort() sorts in the 
// range of [startaddress,endaddress)