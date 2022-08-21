#include<bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int pd=arr[1]-arr[0], ans=2, curr=2, j=2;
        while(j<n){
            if(pd == arr[j]-arr[j-1]){
                curr++;
            }
            else{
                pd = arr[j]-arr[j-1];
                curr=2;
            }
            ans=max(ans,curr);
            j++;
        }
        cout<<ans<<endl;
    }
}