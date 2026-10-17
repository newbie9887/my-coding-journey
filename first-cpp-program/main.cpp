#include<iostream>
using namespace std;

void calculator()
    {
        char op;
        float a,b;
        do
        {
            cout<<"Enter the first number: ";
            cin>>a;
            cout<<"Enter the second number: ";
            cin>>b;
            cout<<"Enter the operator: ";
            cin>>op;

            switch (op)
            {
            case '+':
                cout<<"The result is: "<<a+b;
                break;
            
                case '-':
                cout<<"The result is: "<<a-b;
                break;
            
                case '*':
                cout<<"The result is: "<<a*b;
                break;
            
                case '/':
                if(b==0)
                {
                    cout<<"Error: Division by zero is not allowed.";
                    break;
                }
                cout<<"The result is: "<<a/b;
                break;
            
                default:
                cout<<"Please enter a valid operation.";
                return;
                
            }
            cout<<endl;
        } while (op!='0');
        
    }
    
int main()
{
    calculator();
}