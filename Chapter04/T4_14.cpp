/*����һ������ע��
*�ļ�����T4_14.cpp
*���ߣ�Qingsong Wang
*���䣺H2101870137@163.com
*���ڣ�2022.3.19
*ѧԺ��School of Computer Information and Engineering
*���ܣ����ö������
*/#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,c,d,e,f,n=1;
	while(n!=0){
	cout<<"Enter accout number (or -1 to quit):";cin>>a;
	cout<<"Enter beginning balance:";cin>>b;
	cout<<"Enter total charges" ;cin>>c;
	cout<<"Enter total credits";cin>>d;
	cout<<"Enter credit limit";cin>>e;
	f=b+c-d;
	cout<<"New balance is"<<f;
	cout<<"Account:"<<a;
	cout<<"Credit limit:"<<e;
	cout<<"Balance:"<<f;
	if(f>e)
	{cout<<"Credit Limit Exceeded";}
	else cout<<endl;
	}
}
