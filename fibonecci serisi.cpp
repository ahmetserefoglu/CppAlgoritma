#include<iostream>
using namespace std;
int main()
{
    int n;
    float t1=1,t2=1,t3;
    cout<<"Fibonacci serisi\n";
    cout<<"terim sayisi:";cin>>n;
    t1=1;t2=1;cout<<"\n"<<t1<<"\t"<<t2<<"\t";
    for(int i=1;i<=n-2;i++)
    {

        t3=t1+t2;
        cout<<t3<<"\t";
        t1=t2; t2=t3;

    }

    return 0;
}
