#include<iostream>
#include<cmath>
using namespace std;
int h;
float c;
int main()

{

    cout<<"belirtilen araliktaki DÝK UCGENLER\n";
    cout<<"\n maksimum hipotenus uzunlugu=>";cin>>h;
    cout<<"\n<<<DÝK UCGENLER>>>\n";cout<<endl;
    for(int a=1;a<=h;a++)
    {
        for(int b=a;b<=h;b++)
        {
            c=sqrt(a*a+b*b);
            if((c<=h) && ((int)(c)==c) )
            cout<<a<<"-"<<b<<"-"<<c<<"\n";


        }
    }
    return 0;
}
