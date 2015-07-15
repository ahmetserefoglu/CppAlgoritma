//switch case yapýsý
#include<iostream>
using namespace std;

float a1,a2,b,b1,b2,a;
    short sec;
    int main()
{

    cout<<"1.karmasik sayinin gercel kismi:";cin>>a1;
    cout<<"1. karmasik sayinin sanal kismi:";cin>>b1;
    cout<<"2. karmasik sayinin gercel kismi:";cin>>a2;
    cout<<"2. karmasik sayinin sanal kismi:";cin>>b2;
    cout<<"\n1-toplama islemi\n";
    cout<<"2-cikarma islemi\n";
    cout<<"3-carpma islemi\n";
    cout<<"4-bolme islemi\n";
    cout<<"\n islemi seciniz->";cin>>sec;
    cout<<"\n";
    switch(sec)
    {
        case 1:{a=a1+a2; b=b1+b2; break;}
        case 2:{a=a1-a2; b=b1-b2; break;}
        case 3:{a=a1*a2-b1*b2; b=a1*b2-a2*b1; break;}
        case 4:{a=(a1*a2-b1*b2)/(a2*a2+b2*b2);
                b=(a2*b1-a1*b2)/(a2*a2+b2*b2); break;}
    }
    if(b<0)
    cout<<a<<b<<"i";
    else
    cout<<a<<"+"<<b<<"i\n";
    return 0;
}
