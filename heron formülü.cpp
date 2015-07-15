#include<iostream>
#include<cmath>
//#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,alan,u;
    cout<<"birinci kenari giriniz:";cin>>a;
    cout<<"ikinci kenari giriniz:";cin>>b;
    cout<<"ucuncu kenari giriniz:";cin>>c;
    u=(a+b+c)/2; alan=sqrt(u*(u-a)*(u-b)*(u-c));
    cout<<"\nucgenin alani=" //setiosflags(ios::fixed)<<setprecision(2)
    <<alan<<endl;

    return 0;
}
