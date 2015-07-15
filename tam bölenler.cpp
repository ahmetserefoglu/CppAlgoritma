#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<" tamsayiyi giriniz";cin>>a;
    cout<<"\n"<<a<<"tam sayisinin tam bolenleri"<<endl;
    cout<<"-----SONUCLAR------\n";
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        cout<<i<<endl;


    }
    return 0;
}
