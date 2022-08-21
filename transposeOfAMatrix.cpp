#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}