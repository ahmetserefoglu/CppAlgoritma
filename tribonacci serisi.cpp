#include<iostream>
using namespace std;
unsigned n,i,t1,t2,t3,t4;
int main()
{


    cout<<"Tribonacci serisi"<<endl;
    cout<<"terim sayisi:";cin>>n;
    t1=1; t2=1; t3=2; cout<<"\n"<<t1<<"\t"<<t2<<"\t"<<t3<<"\t";
    for( i=1;i<=n-3,i++)
    {
        t4=t1+t2+t3; cout<<t4<<"\t";
        t1=t2;t2=t3;t3=t4;

    }
    return 0;
}
