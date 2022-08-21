#include<iostream>
using namespace std;
void print(int i,int n) {
    if(n==i) {
        cout<<i<<endl;
        return;
    }
    cout<<i<<"\t";
    print(i+1,n);
}
int main(void) {
    int n;
    cin>>n;
    print(1,n);
}