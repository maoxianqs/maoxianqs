/*
 * FileName: T2_27
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d=1,sum=0;
    cin>>a;
    while(a)
    {
        b=a/10;
        c=a-b*10;
        sum=sum+c*d;
        d=d*2;
        a=a/10;

    }
    cout<<sum;
    return 0;
}
