/*
 * FileName: T2_25.cpp
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function: Judge whether the first number is an integer multiple of the second number

 */
#include <iostream>

using namespace std;

int main()
{
    cout<<"Input two number: ";
    int a,b;
    cin>>a>>b;
    a=a%b;
    if(a==0)cout<<"是整数倍";
    else cout<<"不是整数倍";
    return 0;
}
