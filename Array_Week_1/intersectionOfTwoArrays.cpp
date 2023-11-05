#include<iostream>
#include<vector>
using namespace std;

void intersectionArray(int arr[],int brr[],int na,int nb){
    vector<int>ans;
    for(int i=0;i<na;i++){
        for(int j=0;j<nb;j++){
        if(arr[i]==brr[j]){
            ans.push_back(arr[i]);
        }
    }
    }



    for(int k=0;k<ans.size();k++){
        cout<<ans[k]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4};
    int na=4;
    int brr[]={4,2,1,9};
    int nb=4;
    intersectionArray(arr,brr, na, nb);
}