/*����һ������ע��
*�ļ�����T4_13.cpp
*���ߣ�Qingsong Wang
*���䣺H2101870137@163.com
*���ڣ�2022.3.19
*ѧԺ��School of Computer Information and Engineering
*���ܣ���������
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double  a,b,d=0,e=0,n=1;
    while(n!=0)
   {
    cout<<"Enter miles driven(-1 to quit): ";cin>>a;
    cout<<"Enter gallons used: ";cin>>b;
    cout<<"MGP this trip:";cout <<setiosflags(ios::fixed)<<setprecision(6)<<a/b<<endl;
    d=a+d;
    e=b+e;
    cout<<"Total MPG: "<<setiosflags(ios::fixed)<<setprecision(6)<<d/e<<endl;}
    return 0;

}
