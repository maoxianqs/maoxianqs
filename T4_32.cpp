/*
 * FileName: T2_32
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function:
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a>0&&b>0&&c>0)
    {
        if(a+b>c&&a+c>b&&b+c>a)
            cout<<"���Ա�ʾ�����ε�������";
            else cout<<"���ܱ�ʾ�����ε�������";
    }
    else cout<<"���ܱ�ʾ�����ε�������";
    return 0;
}