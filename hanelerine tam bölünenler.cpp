#include<iostream>
using namespace std;
int main()
{
    int ts,j,i;
    for(int i=1;i<=9;i++)
    for(int j=1;j<=9;j++){ ts=10*i+j;
    if((ts%i==0)&&(ts%j==0))
    cout<<ts<<endl;}
    return 0;
}
