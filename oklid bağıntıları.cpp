#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float h,a,p,c,b;
    cout<<"bir kenarini giriniz:";cin>>c;
    cout<<"diger kenari giriniz:";cin>>b;
    h=sqrt(c*b);
    a=sqrt(b*(b+c));
    p=sqrt(a*a+c*c);
    cout<<"\nh="<<h<<endl;
    cout<<"a="<<a<<endl;
    cout<<"p="<<p<<endl;
    return 0;
}
