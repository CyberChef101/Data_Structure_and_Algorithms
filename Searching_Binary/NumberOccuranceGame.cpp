#include<iostream>
using namespace std;


int firstOccurance(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(target==arr[mid]){
        ans = mid;
            e=mid-1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        }
        return ans;
}


int lastOccurance(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(target==arr[mid]){
            ans = mid;
            s=mid+1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        }
        return ans;
}
int  main(){

    int arr[]={1,2,3,4,5,6,6,6,6,8,9,10};
    int target=6;
    int size=13;

    int firstOccur=firstOccurance(arr,size,target);
    cout<<"first occurance of "<<target<<" is at index "<<firstOccur<<endl;

    int lastOccur=lastOccurance(arr,size,target);
    cout<<"last occurance of "<<target<<" is at index "<<lastOccur<<endl;

    int totalNUmberOfOccureance = lastOccur - firstOccur + 1;
    cout<<"total number of Occurances of "<< target << " is the "<<totalNUmberOfOccureance<<endl;

    return 0;
}