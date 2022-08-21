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
        int dupArr[n];
        for(int i=0;i<n;i++){
            if(i==0){
                dupArr[i]=arr[i];
                if(dupArr[i]<0){
                    dupArr[i]=0;
                }
            }
            else{
                dupArr[i]=dupArr[i-1]+arr[i];
                if(dupArr[i]<0){
                    dupArr[i]=0;
                }
            }
        }
        int maxInt=INT_MIN;
        for(int i=0;i<n;i++){
            maxInt=max(maxInt,dupArr[i]);
        }
        cout<<maxInt<<endl;
    }
}