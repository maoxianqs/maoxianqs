/*
 * FileName: T2_27.cpp
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function:将一个数字储存为char类型
 */
#include <iostream>

using namespace std;

int main()
{
    char a;
    cout<<"Enter a character: ";
    cin>>a;
    cout<<static_cast< int >(a);
    return 0;
}
