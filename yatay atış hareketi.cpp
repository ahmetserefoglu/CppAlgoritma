#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float h,vo,v,t,x,vy;
    cout<<"yerden yuksekligi giriniz:";cin>>h;
    cout<<"ilk hizi giriniz:";cin>>vo;
    t=sqrt(2*h/9.8);
    x=vo*t;
    vy=9.8*t;
    v=sqrt(vo*vo+vy*vy);
    cout<<"havada kalma suresi:"<<t<<endl;
    cout<<"yatay aldigi yol:"<<x<<endl;
    cout<<" yere carpma hizi:"<<v<<endl;
    return 0;
}
