#include<iostream>
using namespace std;
int Len(string str)
{
    int i=0;
    while(str[i]='\0')
    {
        i+=1;
    }
    return i;
}
int main()
{
    string Msg,key;
    int lenK,lenM;
    cout<<"Enter the message & key : ";
    cin>>Msg>>key;
    lenK=Len(key);
    int arr[lenK][lenK];
    lenM=Len(Msg);
    int r=0,c=0,k=0,n;
    n=(lenM*lenM);
    for(int i=0;i<n;i++)
    {
        k+=1;
        arr[r][c]=int (Msg[i]-'A');
        c+=1;
        if(c==3)
        {
            c=0;
            r+=1;
        }
        i%=lenM;
        if(k==n)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



}

