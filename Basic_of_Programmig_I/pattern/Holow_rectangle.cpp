#include <iostream>
using namespace std;

int main(){
    //hollow  rectangle
    // int row;
    // int col;
    // cin>>row;
    // cin>>col;
    // for(int i=0;i<row;i++){
    //     if(i==0 || i==row-1){
    //         for(int j=0;j<col;j++){
    //               cout<<" * ";
    //         }
    //     }
    //     else{
    //         cout<<" * ";
    //         for(int i=0;i<col-2;i++){
    //             cout<<" ";
    //         }
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    //hollow squre ->> Homework question
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
