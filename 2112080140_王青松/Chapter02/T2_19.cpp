
/*
 * FileName: T2_19.cpp
 * Author: Qingsong  Wang
 * E-mail: 2098781282@qq.com
 * Date: Mar 12th, 2022
 * Function: Output the maximum number and the minimum number of five numbers.
 */#include<iostream>
using namespace std;

int main()
{
    cout<<"Input three different integers: "<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    int sum=a+b+c;
    int Average=sum/3;
    int Product=a*b*c;
    int Smallest=min(a,(b,c));
    int Largest=max(a,(b,c));
    cout<<"Sum is "<<sum<<endl;
    cout<<"Average is "<<Average<<endl;
    cout<<"Product is "<<Product<<endl;
    cout<<"Smallest is "<<Smallest<<endl;
    cout<<"Largest is "<<Largest<<endl;

    return 0;
}
