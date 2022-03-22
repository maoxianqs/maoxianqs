/*
 * FileName: T2_35
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int m,sum=1;
    cin>>m;
    if(m<0) ;
    else
    {
        if(m>0)

        {while(m--)
        {
            sum=sum*(m+1);
        }
        cout<<sum;}
        else cout<<1;
    }
    cout<<endl;
    cout<<"请输入精度:";
    double n,a,b=1,e=0;cin>>n;
    while(n--)
    {
        a=n;
        while(a--)
        {
           b=b*(a+1);
        }
         e=1/b+e;
         b=1;
    }
    cout<<e;
    cout<<endl;
    cout<<"输入x：";
    double x;cin>>x;
    cout<<"输入精度: ";
    double n1,a1,b1=1,ex=0,l=1;cin>>n1;
    while(n1--)
    {
        a1=n1;
        while(a1--)
        {
            b1=b1*(a1+1);
        }
        a1=n1;
        while(a1--)
        {
            l=l*x;
        }
        ex=ex+l/b1;
        b1=1;
    }
    cout<<ex;
    return 0;
}
