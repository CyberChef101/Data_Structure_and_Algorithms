#include<iostream>
using namespace std;

void pairSum(int *arr,int n,int sum){
    for(int i=0;i<n;i++){
        int element1=arr[i];
        for(int j=i+1;j<n;j++){
            int element2=arr[j];
            for(int k=j+1;j<n;j++){
                if(element1+element2+arr[j]==sum){
                cout<<element1<<","<<element2<<","<<arr[k]<<"   ";
            }
            }
        }
    }
}

int main(){
    int arr[]={1,3,4,5,6,7,8,3,2};
    int sum=18;
    int n=9;

    pairSum(arr,n,sum);
}