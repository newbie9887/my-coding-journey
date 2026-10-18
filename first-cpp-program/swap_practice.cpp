#include<iostream>
using namespace std;
void swapValues(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=10, b=20;
    cout<<"Before swapping: a = "<<a<<", b = "<<b<<endl;
    swapValues(a,b);
    cout<<"After swapping: a = "<<a<<", b = "<<b;
    return 0;
}