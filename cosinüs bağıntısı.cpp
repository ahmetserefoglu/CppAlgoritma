#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,aci,c;
    cout<<"birinci kenari giriniz:";cin>>a;
    cout<<"ikinci kenari giriniz:";cin>>b;
    cout<<"aradaki aciyi giriniz:";cin>>aci;
    c=sqrt(a*a+b*b-2*a*b*cos(M_PI*aci/180));
    cout<<"\nucuncu kenar:"<<c<<endl;
    return 0;
}
