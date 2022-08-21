#include<iostream>
using namespace std;
class Prime
{
    private:
    int f;
    public:
    Prime()
    {
        f=0;
    }
    void primeCheck(int n)
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            f++;
        }
    }
    void primeOrNot()
    {
        if(f==2)
        cout<<"Its a Prime";
        else
        cout<<"Not a prime";
    }
};
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    Prime p;
    p.primeCheck(n);
    p.primeOrNot();
}