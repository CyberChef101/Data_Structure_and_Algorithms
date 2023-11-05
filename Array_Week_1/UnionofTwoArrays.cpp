#include<iostream>
#include<vector>
using namespace std;

void unionArray(int arr[],int brr[],int na,int nb){
    vector<int>ans;
    for(int i=0;i<na;i++){
        ans.push_back(arr[i]);
    }

    for(int j=0;j<nb;j++){
        ans.push_back(brr[j]);
    }

    for(int k=0;k<ans.size();k++){
        cout<<ans[k]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4};
    int na=4;
    int brr[]={6,7,8,9};
    int nb=4;
    unionArray(arr,brr, na, nb);
}