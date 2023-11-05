#include<iostream>

using namespace std;


int search_binary(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int  main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int target=6;
    int size=9;
    int ans=search_binary(arr,size,target);
    if (ans != -1) {
        cout << "found at index: " << ans << endl;
    } else {
        cout << "not found" << endl;
    }

    return 0;
}
