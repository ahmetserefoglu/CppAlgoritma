#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
char harf ,tahmin;
int main()
{
    srand(time(0)); harf=(char) (rand()%25+65);
    for(int i=1;i<=10;i++){
    cout<<"tahmininiz";cin>>tahmin; cout<<"\n";
    if(tahmin==harf){
    cout<<i<<", tahminde bildiniz";}}
    cout<<"10 hakkiniz bitti.\n";
    return 0;
}
