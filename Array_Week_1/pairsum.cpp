#include<iostream>
using namespace std;

void pairSum(int *arr,int n,int sum){
    for(int i=0;i<n;i++){
        int element=arr[i];
        for(int j=i+1;j<n;j++){
            if(element+arr[j]==sum){
                cout<<element<<","<<arr[j]<<"   ";
            }
        }
    }
}

int main(){
    int arr[]={1,3,4,5,6,7,8,3,2};
    int sum=9;
    int n=9;

    pairSum(arr,n,sum);
}