
/*
 * FileName: T2_18.cpp
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function: Output the maximum number and the minimum number of five numbers.
 */#include<iostream>
using namespace std;

int main()
{
    cout<<"Please input two number"<<endl;
    int a,b;
    cin>>a>>b;
    if(a>b)cout<<a<<" is large"<<endl;
    else {if(a==b)cout<<"These numbers is equal";
    else cout<<b<<" is large";}
    return 0;
}
