#include<iostream>
using namespace std;

int findMissing(int arr[],int size){
    inst s=0;
    int e=size-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid+1] - arr[mid] == 1 ){
            
        }
        else{
            return mid+1;
        }
    }


}

int main(){

    int arr[] = {1,2,3,4,5,7,8,9,10};
    int size=10;

    cout<<"Missing element in array is  "<<findMissing(arr,size)<<endl;
}