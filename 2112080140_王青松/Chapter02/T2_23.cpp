
/*
 * FileName: T2_23.cpp
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function: Output the maximum number and the minimum number of five numbers.
 */

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e;
    cout<<"Please input five number; "<<endl;
    cin>>a>>b>>c>>d>>e;
    int ma,mi;
    ma=max(a,(b,(c,(d,e))));
    mi=min(a,(b,(c,(d,e))));
    cout<<"maximum number is: "<<ma<<endl;
    cout<<"minimum number is: "<<mi<<endl;
    return 0;
}
