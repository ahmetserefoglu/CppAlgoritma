#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"bir sayi giriniz:";cin>>a;
    cout<<"bir sayi giriniz:";cin>>b;
    if(a%b==0)
    cout<<"a b'ye tam bolunuyor demektir:"<<endl;
    else
    cout<<"a b'ye tam bolunmez demektir:"<<endl;
    return 0;
}
