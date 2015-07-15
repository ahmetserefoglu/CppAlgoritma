#include<iostream>
using namespace std;
int main()
{
    int n,s,j;
    cout<<"belirtilen araliktaki ASAL sayilar\n";
    cout<<"ust sinir=>";cin>>n;
    cout<<"+++++"<<"ASAL SAYÝLAR"<<"+++++\n";
    for(int i=2;i<=n;i++)

    {
        s=0;
        for(int j=1;j<=i;j++)  if(i%j==0) s++;



             if(s==2) cout<<i<<"\t";



    }

    return 0;
}
