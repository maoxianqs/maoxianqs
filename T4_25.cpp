/*
 * FileName: T2_25
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function:
 */
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;int a,b,c;a=x;b=x;c=x;
        while(a--){cout<<"*";}
        cout<<endl;
        x=x-2;
        while(x--)
        {
            while(b--){if(b==c-1||b==0)cout<<"*";else cout<<" ";}
            cout<<endl;b=c;
        }
        a=c;
        while(a--){cout<<"*";}
        cout<<endl;

    return 0;
}
