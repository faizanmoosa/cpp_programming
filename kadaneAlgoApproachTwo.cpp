//Maximum SubArray Sum
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
        int maxSum=INT_MIN, curr=0;
        for(int i=0;i<n;i++){
            curr+=arr[i];
            if(curr<0){
                curr=0;
            }
            maxSum=max(curr,maxSum);
        }
        cout<<maxSum<<endl;
    }
    InfInt q;
}