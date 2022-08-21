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
        const int N = 1e6;
        bool tf[N];
        for(int i=0;i<N;i++){
            tf[i]=false;
        }
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                tf[arr[i]]=true;
            }
        }
        for(int i=0;i<N;i++){
            if(tf[i]==false){
                cout<<i<<endl;
                break;
            }
        }
    }
}