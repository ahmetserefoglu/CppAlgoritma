#include<iostream>
using namespace std;
int main()
{
    int n,r;
    float f1=1,f2=1,f3=1,k;
    cout<<"n degerini yaz:";cin>>n;
    cout<<"r degerini yaz:";cin>>r;
    for(int i=1;i<=n;i++)
    {
        f1*=i;
        if(i<=r) f2*=i;

        if(i<=n-r) f3*=i;


    }
    k=f1/(f2*f3);
    cout<<"sonucu yaz:"<<k<<endl;
    return 0;
}
