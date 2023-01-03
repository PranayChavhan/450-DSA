// Find the maximum and minimum element in an array

#include<iostream>
using namespace std;


void minMax(int arr[], int n){
   int min = arr[0];
   int max = arr[0];
   int sum;

   for(int i = 0; i < n; i++){
    if(arr[i]>max){
        max = arr[i];
    }
    if(arr[i]< min){
        min = arr[i];
    }
   }

   sum = min + max;
   cout<<sum;

}

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    minMax(arr, 5);
}