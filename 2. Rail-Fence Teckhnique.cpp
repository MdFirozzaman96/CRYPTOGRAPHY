#include<iostream>
using namespace std;

int Len(string str)
{
    int i=0;
    while(str[i]!='\0')
    {
        i+=1;
    }
    return i;
}

int main()
{
    string str,Rail;
    int len,k=0;
    cout<<"Enter a string : ";
    cin>>str;
    len=Len(str);
    cout<<"Encryption : ";
    for(int i=0;i<len;i++)
    {
        if(i%2==0)
        {
            cout<<str[i];
            Rail[k]=str[i];
            k+=1;
        }
    }
    for(int i=0;i<len;i++)
    {
        if(i%2==1)
        {
            cout<<str[i];
            Rail[k]=str[i];
            k+=1;
        }
    }
    cout<<endl<<"Decryption : ";
    int h=len/2,n;
    if(len%2==0)
    {
        for(int i=0;i<h;i++)
        {
            cout<<Rail[i]<<Rail[h+i];
        }
    }
    else
    {
        for(int i=0;i<=h;i++)
        {
            cout<<Rail[i];
            if(i!=h)
            {
                cout<<Rail[h+(i+1)];
            }
        }
    }
    return 0;
}
