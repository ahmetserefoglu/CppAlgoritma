#include<iostream>
using namespace std;
int main()
{

    for(int i=1;i<=9;i++){
    for(int j=0;j<=9;j++){
    for(int k=0;k<=9;k++){
    for(int m=0;m<=9;m++)
    if((i+j)==(k+m))
    cout<<1000*i+100*j+10*k+m<<"\t";}}}
    return 0;
}
