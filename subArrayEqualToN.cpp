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
        int s;
        cin>>s;
        bool check=false;
        for(int i=0;i<(n-1);i++){
            int sum=arr[i];
            for(int j=i+1;j<n;j++){
                sum+=arr[j];
                if(sum==s){
                    cout<<(i+1)<<" "<<(j+1)<<endl;
                    check=true;
                    break;
                }
            }
            if(check==true){
                break;
            }
        }
    }
}