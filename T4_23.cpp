/*����һ������ע��
*�ļ�����T4_23.cpp
*���ߣ�Qingsong Wang
*���䣺H2101870137@163.com
*���ڣ�2022.3.19
*ѧԺ��School of Computer Information and Engineering
*���ܣ�ҡ������
*/
 #include <iostream>

 using namespace std;

 int main()
 {
     int x1=9,y1=11,x2=11,y2=9;
     cout << "a)-------------" << endl;
     if(x1<10)
     {
         if(y1>10)
         {
             cout << "*****" << endl;
         }
         else
         {
             cout << "#####" << endl;
         }
     }
     cout << "$$$$$" << endl;
     cout << "\n";
     cout << "b)-------------" << endl;
     if(x2<10)
     {
         if(y2>10)
         {
             cout << "*****" << endl;
         }
     }
     else
     {
         cout << "#####" << endl;
         cout << "$$$$$" << endl;
     }
     return 0;
 }

