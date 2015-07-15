#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,aci,is,i,j;
    float t=0,f,x;
    cout<<"aci degeri=>";cin>>aci;
    cout<<"terim sayisi=>";cin>>n;
    x=aci*M_PI/180;is=-1;
    for(int i=1;i<=n;i++)  {
        f=1;
    for(int j=1;j<=2*i-1;j++)

        f*=j; is*=(-1); t+=is*pow(x,2*i-1)/f;
    }
    cout<<"ser acilimi ie hesaplanan deger:"<<t<<endl;
    cout<<"komutla hesaplanan deger:"<<sin(x)<<endl;
    return 0;
}

