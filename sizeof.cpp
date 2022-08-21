#include<iostream>
using namespace std;
int main()
{
    char s[20];
    string hi;
    cout<<"Enter a string s: ";
    cin>>s;
    cout<<"Enter a string hi: ";
    cin>>hi;
    cout<<sizeof(s)<<endl;
    cout<<s<<endl;
    cout<<sizeof(hi)<<endl;
    cout<<hi<<endl;
    return 0;
}