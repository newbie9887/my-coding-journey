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

    int sum(int a, int b)
    {
        int sum=a+b;
        return sum;
    }
    int subtract(int a, int b)
    {
        int difference = a-b;
        return a-b;
    }

    int product(int a, int b)
    {
        int product = a*b;
        return product;
    }
    
int main()
{
    // calculator();
    cout<<"Addition: "<<sum(10,5)<<endl; 
    cout<<"Subtraction: "<<subtract(10,5)<<endl; 
    cout<<"Multiplication: "<<product(10,5); 
    return 0;
}