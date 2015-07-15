#include<iostream>
using namespace std;
int main()
{
    int b;
    cout<<"b=";cin>>b; cout<<"\n";
    for(int a=1;a<=99;a++)
    if((a*a*a-a*a)==b){
    cout<<"a="<<a<<endl; }
    cout<<"0-100 arasinda oyle bir sayi yoktur";
    return 0;
}
