//For Square Matrices

#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int n_s=0, n_e=n-1, m_s=0, m_e=m-1;
    while(n_s <= n_e && m_s <= m_e){
        for(int i=m_s;i<=m_e;i++){
            cout<<arr[n_s][i]<<" ";
        }
        n_s++;
        for(int i=n_s;i<=n_e;i++){
            cout<<arr[i][m_e]<<" ";
        }
        m_e--;
        for(int i=m_e;i>=m_s;i--){
            cout<<arr[n_e][i]<<" ";
        }
        n_e--;
        for(int i=n_e;i>=n_s;i--){
            cout<<arr[i][m_s]<<" ";
        }
        m_s++;
    }
}