
/*
 * FileName: T2_21.cpp
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function: Output the maximum number and the minimum number of five numbers.
 */#include<iostream>
using namespace std;

int main()
{
    int a=7;
    cout<<"*********\n";
    while(a)
    {
    a--;
    cout<<"*       *"<<endl;
    }
    cout<<"*********\n";

    int b=5;
    cout<<"   ***   \n *     * \n";
    while(b)
    {
    cout<<"*       *\n";
    b--;
    }
    cout<<" *     * \n   ***   \n";

    cout<<"    *    \n   ***   \n  *****  \n";
    int c=5;
    while(c)
    {
    c--;
    cout<<"    *    \n";
    }

    cout<<"    *\n   * *\n  *   *\n *     *\n*       *\n *     *\n  *   *\n   * *\n    *";
    return 0;
}
