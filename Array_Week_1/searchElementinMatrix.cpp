#include<iostream>
using namespace std;


bool searchMatrix(int arr[][3],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }

    //value not present
    return false;
}   



int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{6,7,4}};
    int col=3;
    int row=3;
    

    //taking input
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    //sisplay array 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ 
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<searchMatrix(arr,row,col,9);


}
