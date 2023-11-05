#include<iostream>
using namespace std;


void printRowWiseSum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
}

void printColWiseSum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
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


    cout<<"row wise sum"<<endl;
    printRowWiseSum(arr,row,col);


    cout<<"column wise sum"<<endl;
    printColWiseSum(arr,row,col);


}