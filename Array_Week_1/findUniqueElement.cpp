#include<iostream>
using namespace std;


int findUniqe(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
            ans=ans^arr[i];
        
    }
    return ans;
}

int main(){
    int arr[5]={1,1,2,4,2};
    int n=5;
    

    //fint unique element in array
    cout<<findUniqe(arr,n);
}