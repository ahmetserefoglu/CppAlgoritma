#include<iostream>
using namespace std;
int main()
{
    int i,n;
    float t1,t2,t3;
    cout<<"n degerini yaziniz";cin>>n;
    for(i=1;i<=n;i++) t1+=i;
    for(i=1;i<=n;i=i+2)  t2+=i;
    for(i=2;i<=n;i=i+2)  t3+=i;
    cout<<"\n1'den"<<n<<"'e kadar tam sayilarin toplami:"<<t1<<endl;
    cout<<"\n1'den"<<n<<"'e kadar tek sayilarin toplami:"<<t2<<endl;
    cout<<"\n2'den"<<n<<"'e kadar cift sayilarin toplami:"<<t3<<endl;
    return 0;
}
