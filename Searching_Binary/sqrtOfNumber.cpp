#include<iostream>
using namespace std;
int sqrtNumber(int n){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(mid*mid == n){
            return mid;
            
        }
        else if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){

    int n;
    cout<<"Enyer the number you want a squre rroot of that ->";
    cin>>n;

    double ans=sqrtNumber(n);

    int precision;
    cout<<"how much precision you want ->";
    cin>>precision;

    double step=0.1;
    for(int i=0;i<precision;i++){

        for(double j=ans;j*j<n;j=j+step){
            ans=j;
        }
        step=step/10;
    }

    cout<<ans;

}