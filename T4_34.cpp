/*
 * FileName: T2_34
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int n,sum=1;
    cin>>n;
    if(n<0) ;
    else
    {
        if(n==0||n==1)cout<<1;
        else
        {while(n)
        {
            if(n==1) ;
            else sum*=n;
            n--;
        }
            cout<<sum;}
    }

    return 0;
}
