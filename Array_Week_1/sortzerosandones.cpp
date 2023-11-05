#include<iostream>
using namespace std;

void sortZeroAndOnes(int *arr,int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(arr[start]==0){
            swap(arr[start],arr[start]);
            start++;
        }
        if(arr[start]==1) {
            swap(arr[start],arr[end]);
            end--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={0,1,0,1,0,1,1,0,1,1,0};
    int n=11;
    sortZeroAndOnes(arr,n);
}