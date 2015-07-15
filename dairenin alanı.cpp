#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r,aci,alan;
    cout<<"yari capi giriniz:"; cin>>r;
    cout<<"aciyi giriniz:"; cin>>aci;
    alan=(aci*M_PI*r*r)/360;
    cout<<"dairenin alani:"<<alan<<endl;
    return 0;
}
