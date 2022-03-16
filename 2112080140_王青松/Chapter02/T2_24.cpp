/*
 * FileName: T2_24.cpp
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function: Judge the parity of a number
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Input a number: ";
    cin>>a;
    b=a%2;
    if(b==0)cout<<"是偶数"<<endl;
    else cout<<"是奇数"<<endl;
    return 0;
}
