#include<iostream>
using namespace std;
int main()
{
    int a,b,f=1;
    cout<<"ussu alnacak sayiyi giriniz:";cin>>a;
    cout<<"sayinin kacinci ussu alinacak?:";cin>>b;
    for(int i=1;i<=b;i++) f=f*a;
    cout<<"f="<<f<<endl;
    return 0;

}
