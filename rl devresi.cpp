#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    float E,R,L,I0,tt,s,tod,i,t;
    cout<<"gerilim kaynaginin degeri(V)=>";cin>>E;
    cout<<"direncin degeri(Kohm)=>";cin>>R;
    cout<<"bobinin degeri(mH)=>";cin>>L;

    cout<<"bobinin baslangic gerilimi(V)=>";cin>>I0;
    cout<<"inceleme zamani(s)=>";cin>>tt;
    cout<<"zaman artim degeri(s)=>";cin>>s;
    tod=R/L;
    cout<<"\n-------SONUCLAR--------\n";
    cout<<"==============\n";
    cout<<"t\t       i\n";
    cout<<"-------\t------\n"; t=0;
    do
    {
        i=(I0-E/R)*exp(-t/tod)+E/R;
        cout<<t<<"\t"<<i<<"\n";
        t=t+s;
    }
    while(t<=tt);
}
