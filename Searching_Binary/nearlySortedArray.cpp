#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int arr[],int target,int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target){
            return target;
        }

        if(arr[mid+1]== target){
            return mid+1;
        }

        if(arr[mid-1]== target){
            return mid-1;
        }

        if( arr[mid+1]>target){
            e=mid-2;
        }
        else{
            s=mid+2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int n[]={10,3,40,20,50,80,70};
    int target=10;
    int size = 7;

    int ans=binarySearch(n,target,size);
    cout<<"index at  "<<target<<"  is  " <<ans<<endl;

    return 0;



}