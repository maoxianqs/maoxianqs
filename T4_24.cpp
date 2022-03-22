/*
 * FileName: T2_24
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(y==8)//1
    if(x==5)
       cout<<"@@@@@"<<endl;
    else
        cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<"&&&&&"<<endl;
    cout<<endl;

    cin>>x>>y;
    if(y==8)//2
    {
        if(x==5)cout<<"@@@@@"<<endl;
    }
    else{
        cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<"&&&&&"<<endl;
    }
    cout<<endl;

    cin>>x>>y;
    if(y==8)//3
    if(x==5)
       cout<<"@@@@@"<<endl;
    else
        {cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;}
    cout<<"&&&&&"<<endl;
    cout<<endl;

    cin>>x>>y;
    if(y==8)//4
    {if(x==5)
       cout<<"@@@@@"<<endl;}
    else
        {cout<<"#####"<<endl;
    cout<<"$$$$$"<<endl;
    cout<<"&&&&&"<<endl;}
    cout<<endl;
    return 0;
}
