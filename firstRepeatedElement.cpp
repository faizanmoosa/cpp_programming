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
        const int size=1e6;
        int ind[size];
        for(int i=0;i<size;i++){
            ind[i]=-1;
        }
        int minInd=INT_MAX;
        for(int i=0;i<n;i++){
            if(ind[arr[i]] != -1){
                minInd=min(minInd,ind[arr[i]]);
            }
            else{
                ind[arr[i]]=i;
            }
        }
        if(minInd==INT_MAX){
            cout<<"-1"<<endl;
        }
        else{
            cout<<(minInd+1)<<endl;
        }
    }
}