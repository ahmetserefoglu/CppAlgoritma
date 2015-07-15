#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"Tamsayi giriniz:";cin>>s;
    cout<<"\na-b\n";
    cout<<"============\n";
    for(int a=0;a<=s/2;a++)
    for(int b=0;b<=s/2;b++)
    if(a*a+b*b==s)
    {
        cout<<a<<"-"<<b<<endl;
    }
    return 0;
}
