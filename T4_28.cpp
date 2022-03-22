/*
 * FileName: T2_28
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int a=8,b=8;
    do
    {
        if(a%2==0)
        {
            while(b--){cout<<"*";cout<<" ";}
            cout<<endl;b=8;
        }
        else{
            while(b--){cout<<" ";cout<<"*";}
            cout<<endl;b=8;
        }

    }while(a--);

    return 0;
}
