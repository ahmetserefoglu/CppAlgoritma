#include<iostream>

using namespace std;
int main()

{
float m,v,h,ep,ek;
    cout<<"kutleyi gir:";cin>>m;
    cout<<"hizi gir:";cin>>v;
    cout<<"yukseklgi gir:";cin>>h;
    ep=(m*9.8*h);
    ek=(m*v*v/2);
    cout<<"\n";
    cout<<"potansiyel enerji:"<<ep<<endl;
    cout<<"kinetik enerji:"<<ek<<endl;
    return 0;
}
