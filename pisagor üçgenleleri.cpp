#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float c;
    for(int a=1;a<=33;a++)
    for(int b=a;b<=33;b++)
    {
    c=sqrt(a*a+b*b);
    if((int)c==c)
    cout<<a<<"-"<<b<<"-"<<c<<"\n";

    }

    return 0;

}
