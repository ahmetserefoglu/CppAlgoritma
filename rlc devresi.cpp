#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    float E,R,C,V0,tt,tod,s,t,V;
    cout<<"gerilim kaynaginin degeri(V):";cin>>E;
    cout<<"direncin degeri(Mohm):";cin>>R;
    cout<<"kondansatorun degeri(mikroF):";cin>>C;
    cout<<"kondansatorun baslangic gerilimi(V):";cin>>V0;
    cout<<"inceleme zamani(s):";cin>>tt;
    cout<<"zaman artim degeri(s):";cin>>s;
    tod=R*C;
    cout<<"\n"<<std::setw(10)<<"---SONUCLAR---\n";
    cout<<std::setw(5)<<"============\n";
    cout<<std::setw(2)<<"t"<<std::setw(10)<<"V\n";
    cout<<std::setw(3)<<"---"<<std::setw(10)<<"----\n"; t=0;
    do
    {
        V=(V0-E)*exp(-t/tod)+E;
        cout<<std::setw(6)<<t<<std::setw(16)<<V<<endl;
        t=t+s;
    }
    while(t<=tt);
    return 0;

}
