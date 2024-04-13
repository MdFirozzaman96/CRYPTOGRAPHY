#include<iostream>
#include<math.h>
using namespace std;

int D(int e,int Pn)
{
    int D,d=1;
    while(1)
    {
        D=d*e;
        if(D%Pn==1)
        {
            return d;
        }
        d+=1;
    }
}
int main()
{
    int p,q,n,PhiN,e,d;
    p=3,q=5;
    n=p*q;
    PhiN=(p-1)*(q-1);
    cout<<"phiN : "<<PhiN<<endl;
    e=7;/// gcd(PhiN,e)=1,co-prime;
    d=D(e,PhiN);
    cout<<"d : "<<d<<endl;
    string text;
    char ch;
    cout<<"Enter a text : ";
    cin>>text;
    int arr[200],Div[200],x,k=0;
    cout<<"Encryption : ";
    for(int i=0;text[i]!='\0';i++)
    {
        long long int c;
        x=int(text[i]);
        cout<<x<<" ";
        c=pow(x,e);
        c%=n;
        arr[k]=c;
        k+=1;
        ch=char(c);
        //cout<<ch;
    }
    cout<<endl;
    cout<<"Decryption : ";
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<k;i++)
    {
        long long int dd;
        dd=pow(arr[i],d);
        dd%=n;
        cout<<dd<<" ";
        ch=char(dd);
        //cout<<ch;
    }
    cout<<endl;
}
