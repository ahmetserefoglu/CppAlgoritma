#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,aci,alan;
    cout<<"birinci kosegeni giriniz:"; cin>>a;
    cout<<"ikinci kosegeni giriniz:"; cin>>b;
    cout<<"aradaki aciyi giriniz:"; cin>>aci;
    alan=a*b*sin(M_PI*aci/180)/2;
    cout<<"\ndortgenin alani:" << alan <<endl;
    return 0;
}
