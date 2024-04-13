#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int q,a,Xa,Xb;
    q=7,a=17;
    Xa=6,Xb=4;
    long long int Ya,Yb;
    Ya=pow(a,Xa);
    Ya%=q;
    Yb=pow(a,Xb);
    Yb%=q;
    cout<<" Yb: "<<Yb<<", Ya : "<<Ya<<endl;
    ///swap(Ya,Yb);
    cout<<" Yb: "<<Yb<<", Ya : "<<Ya<<endl;
    long long int xb,ya;
    xb=pow(Yb,Xa);
    xb%=q;
    ya=pow(Ya,Xb);
    ya%=q;
    cout<<"xb : "<<xb<<",  ya : "<<ya<<endl;
    return 0;


}
