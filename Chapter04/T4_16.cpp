/*����һ������ע��
*�ļ�����T4_16.cpp
*���ߣ�Qingsong Wang
*���䣺H2101870137@163.com
*���ڣ�2022.3.19
*ѧԺ��School of Computer Information and Engineering
*н�������
*/#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,c,n=1;
	while(n!=0)
	{
	cout<<"Enter hours worked(-1 to end)";cin>>a;
	cout<<"Enter hourly rate of the employee($00.00): 10.00";
	if(a>40)
	 {cout<<"\nSalary is $"<<400+(a-40)*15;
	 }else {cout<<"\n6Salary is $"<<a*10;
	 }
	 cout<<endl;}
}
