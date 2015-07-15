#include<iostream>
using namespace std;
int main()

{
    int i,n;
    float t;
    cout<<"N degerini giriniz:";cin>>n;
    t=0; for(i=1;i<=n;i++) t+=i*i;
    cout<<"\n1'den"<<n<<"'e kadar  tamsayilarin karelerinin toplami:"<<t<<endl;
    return 0;

}
