/*����һ������ע��
*�ļ�����T4_19.cpp
*���ߣ�Qingsong Wang
*���䣺H2101870137@163.com
*���ڣ�2022.3.19
*ѧԺ��School of Computer Information and Engineering
*���ܣ�������������
*/
 #include <iostream>

 using namespace std;

 int main()
 {
     int counter=1,number,largest1,largest2,a;
     while(counter<=10)
     {
         cin >> number ;
         if(counter==1)
         {
             largest1=number;
         }
         if(counter==2)
         {
             largest2=number;
         }
         if(largest1<largest2)
         {
             a==largest1;
             largest1=largest2;
             largest2=a;
         }
         if(largest1<=number)
         {
             a=largest1;
             largest1=number;
             largest2=a;
         }
         else if(largest2<=number)
         {
             largest2=number;
         }
         counter++;
     }
     cout << largest1 << " " << largest2;
     return 0;
 }
