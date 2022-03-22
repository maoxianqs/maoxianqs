/*
 * FileName: T2_33
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>0&&b>0&&c>0)
    {
        if(a+b>c&&a+c>b&&b+c>a)
        {if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            cout<<"可以表示直角三角形的三条边";
            else cout<<"不能表示直角三角形的三条边";}
            else cout<<"不能表示直角三角形的三条边";
    }
    else cout<<"不能表示直角三角形的三条边";
    return 0;
}
