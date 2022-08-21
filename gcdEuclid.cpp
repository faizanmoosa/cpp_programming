#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int a, b;
    cin>>a>>b; //24 42
    if(b>a) {
        int temp=b;
        b=a;
        a=temp;
    } //42 24
    int diff=a-b; //18
    while(diff) {
        a=max(diff,b); //24 18 12 6
        b=min(diff,b); //18 6 6 6
        diff=a-b; //6 12 6 0
        //or diff=a%b;
    }
    cout<<b<<endl;
}