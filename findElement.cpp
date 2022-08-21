//For A Sorted Matrix
#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    int mat[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat[i][j];
        }
    }
    int key;
    cin>>key;
    int r=0, c=n-1;
    bool check=false;
    while(r<n && c>=0) {
        if(mat[r][c]==key) {
            check=true;
        }
        else if(mat[r][c]>key){
            c--;
        }
        else {
            r++;
        }
    }
    if(check==true) {
        cout<<"Element Found"<<endl;
    }
    else {
        cout<<"Element Not Found"<<endl;
    }
}