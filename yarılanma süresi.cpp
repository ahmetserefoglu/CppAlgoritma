#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float mo,dt,t,n,m;
    cout<<"baslangic kutlesini gir:";cin>>mo;
    cout<<"yarilanma suresini gir:";cin>>dt;
    cout<<"sureyi gir:";cin>>t;
    n=t/dt; m=mo/pow(2,n);
    cout<<"yarilanma sayisi:"<<n<<endl;
    cout<<"kalan kutleyi yaziniz:"<<m<<endl;
    return 0;
}
