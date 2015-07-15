#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int s=0,BS,tahmin;
int main()
{

    srand(time(NULL)); BS=rand()%99+1;
    do{
    cout<<"Tahmininiz";cin>>tahmin;
    s++;
    if(tahmin>BS)
    cout<<"Daha kucuk sayi giriniz......\n";
    if (tahmin<BS)
    cout<<"Daha buyuk sayi giriniz....\n";
    cout<<"\n";}
    while(tahmin!=BS);
    cout<<s<<"Tahminde buldunuz\n";
    return 0;


}
