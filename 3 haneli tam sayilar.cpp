#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    cout<<"Tam sayilar:\n";
    cout<<"...........\n";
    for(int i=1;i<=9;i++)
    for(int j=0;j<=9;j++)
    for(int k=0;k<=9;k++)

     if((i+j+k)==3)
     cout<<100*i+10*j+k<<endl;



    return 0;

}
