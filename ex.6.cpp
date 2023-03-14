#include<iostream>
using namespace std;
int main()
{
    int c;

    cout<<endl;

    cout<<"   Code  \t\t\t   Disk drive Manufacturer"<<endl;
    cout<<"    1    \t\t\t     Western Digital"<<endl;
    cout<<"    2    \t\t\t     3M Corporation"<<endl;
    cout<<"    3    \t\t\t     Maxell Corporation"<<endl;
    cout<<"    4    \t\t\t     Sony Corporation"<<endl;
    cout<<"    5    \t\t\t     Verbatim Corporation"<<endl<<endl;
    cout<<"  Type any number between 1-5 here>> ";
    cin>>c;

    cout<<endl<<endl;

    if(c==1)
    {
        cout<<"   Western Digital";
    }

    else if(c==2)
    {
        cout<<"   3M Corporation";
    }

    else if(c==3)
    {
        cout<<"   Maxell Corporation";
    }

    else if(c==4)
    {
        cout<<"   Sony Corporation";
    }

    else if(c==5)
    {
        cout<<"   Verbatim Corporation";
    }

    else
    {
        cout<<"   Invalid number";
    }

    return 0;
}



