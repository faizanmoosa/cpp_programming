#include<bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum=0, maxInt=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sum+=arr[j];
                maxInt=max(sum,maxInt);
            }
            sum=0;
        }
        cout<<maxInt<<endl;
    }
}