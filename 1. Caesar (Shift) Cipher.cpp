#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a string : ";
    string str;
    char ch;
    cin>>str;
    int shift;
    cout<<"Enter the number of shift : ";
    cin>>shift;
    cout<<"Encryption : ";
    for(int i=0;str[i]!='\0';i++)
    {
        int x;
        if(str[i]>=65&&str[i]<=92)
        {
            x=int(str[i]+shift);
            if(x>90)
            {
                x%=91;
                x+='A';
            }
        }
        else if(str[i]>=97&&str[i]<=122)
        {
            x=int(str[i]+shift);
            if(x>122)
            {
                x%=123;
                x+='a';
            }
        }
        ch=char(x);
        cout<<ch;
    }
    cout<<endl;
}
