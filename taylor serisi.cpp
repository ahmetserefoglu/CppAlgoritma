#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,x;
    float t=1,f=1;
    cout<<"N degerini giriniz=>";cin>>n;
    cout<<"x degerini giriniz=>";cin>>x;

    for(int i=1;i<=n-1;i++)
{


    f*=i; t+=pow(x,i)/f;
}
    cout<<"\nseri acilimla e uzerix degeri:"<<t<<endl;
    cout<<"komutla e uzeri x degeri:"<<exp(x)<<endl;
    return 0;
}
