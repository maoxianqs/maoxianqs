/*����һ������ע��
*�ļ�����T4_17.cpp
*���ߣ�Qingsong Wang
*���䣺H2101870137@163.com
*���ڣ�2022.3.19
*ѧԺ��School of Computer Information and Engineering
*�������
*/#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int arr[10],i=1;
	int max=0;
	while(i<=10)
     {
	 cin>>arr[i];if (arr[i]>max)
 		{max=arr[i];}
     i++;}cout<<"Largest is:"<<max;
   	return 0;
}

