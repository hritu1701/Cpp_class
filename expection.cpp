#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int k=14;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    A:
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        try{
            if(sum>=k){
                throw sum;
            }
        }
        catch(int sum){
            cout<<"Task is not completed"<<endl;
            k=k+5;
            goto A;

        }
    }
    cout<<"Task is completed"<<endl;
}