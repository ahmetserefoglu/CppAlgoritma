#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r,alan,hacim;
    cout<<"yari capi giriniz: "; cin>>r;
    alan=4*M_PI*r*r;
    hacim=4/3*M_PI*r*r*r;
    cout<<"kurenin alani:"<<alan<<endl;
    cout<<"kurenin hacmi:"<<hacim<<endl;
    return 0;
}
