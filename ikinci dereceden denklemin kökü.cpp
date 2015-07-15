#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,x1,x2;
    cout<<"a katsayisi:";cin>>a;
    cout<<"b sayisi:";cin>>b;
    cout<<"c sayisi :";cin>>c;
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        cout<<"denklemin iki gercel koku vardir:"<<endl;
        x1=(-b+sqrt(d))/2*a;
        x2=(-b-sqrt(d))/2*a;
        cout<<"kökler:"<<x1<<"\t"<<x2<<endl;


    }
    else if(d==0)
    {
         cout<<"denlemin katli koku vardir:"<<endl;
         x1=x2=-b/(2*a);
         cout<<"katli kok:"<<x1<<endl;


    }
    else
    cout<<"denklemin sanal kokleri vardir:"<<endl;

    return 0;
}
