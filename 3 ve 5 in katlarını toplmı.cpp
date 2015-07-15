#include<iostream>
using namespace std;
int main()
{
    int s,a,b;

    cout<<"7'den buyuk tam sayi giriniz:";cin>>s;
    cout<<"\na-b\n";
    cout<<"========\n";
    for(int a=0;a<=s/2;a++)
    for(int b=0;b<=s/2;b++)

        if(3*a+5*b==s){


    cout<<a<<"-"<<b<<endl;}
    return 0;

}
