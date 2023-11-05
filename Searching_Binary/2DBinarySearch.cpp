#include<iostream>
using namespace std;
bool search_binary(int arr[][4],int target,int col, int row){
    int s=0;
    int e= col*row-1;
    int mid= s+(e-s)/2;

    while(s<=e){
        int rowIndex=mid/col;
        int colIndex= mid%col;
        if(arr[rowIndex][colIndex]==target){
            return true;
        }

        if(arr[rowIndex][colIndex]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return false;

}

int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int col=5;
    int row=4;
    int target=125;
    bool ans= search_binary(arr,target,col,row);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}