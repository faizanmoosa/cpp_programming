#include<bits/stdc++.h>
using namespace std;
bool powerOfTwo(int n) {
    return (n && !(n & (n-1)));
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    bool check = powerOfTwo(n);
    if(check==true) {
        cout<<"Power of 2"<<endl;
    }
    else {
        cout<<"Not a Power of 2"<<endl;
    }
}

//5 = 1001 4 = 1000 3 = 0111