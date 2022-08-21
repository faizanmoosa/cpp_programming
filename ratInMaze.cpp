#include<bits/stdc++.h>
using namespace std;
void ratMaze(int **a,int i,int j, int n) {
    if(i==n-1 && j==n-1) {
        cout<<"Rat out of the maze";
        return;
    }
    else if(a[i+1][j]==1) {
        i++;
        ratMaze(a,i,j,n);
        return;
    }
    else if(a[i][j+1]==1) {
        j++;
        ratMaze(a,i,j,n);
        return;
    }
    else {
        i--;
        j--;
        ratMaze(a,i,j,n);
        return;
    }
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    int **a;
    a = new int *[n];
    for(int i = 0; i<n; i++)
    a[i] = new int[n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    ratMaze(a,0,0,n);
}