#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"请输入a的值";
    cin>>a;
    int b;
    cout<<"请输入b的值";
    cin>>b;
    const int c = 6;
    int d=a+b*c;
    int e=(a+b)*c;
    cout<<d<<endl;


    //add note
    cout<<"hello";


    return 0;
}