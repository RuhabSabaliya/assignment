#include<iostream>
using namespace std;
class calculator
{
    public:
    int Addition(int a,int b)
    {
        void display();
        {
            cout << "The sum is="<<a + b;
        }
    }
    int Substraction(int a,int b)
    {
        void display();
        {
            cout << "The substraction is=" << a - b;
        }
    }
    int Multiplication(int a,int b)
    {
        void display();
        {
            cout << "The Mul is=" << a * b;
        }
    }
    int Divison(int a,int b)
    {
        void display();
        {
            cout << "The Div is=" << (double)a / b;
        }
    }
    int Moduelo(int a,int b)
    {
        void display();
        {
            cout << "The reminder is: " << a % b;
        }
    }
};
int main()
{
    int choice;
    int a, b;
    cout<<"Enter the first number: ";
    cin >> a;
    cout<<"Enter the second number: ";
    cin >> b;
    cout << "\nEnter 1 for addition\n";
    cout << "Enter 2 for Substraction\n";
    cout << "Enter 3 for multiplication\n";
    cout << "Enter 4 for division\n";
    cout << "Enter 5 for moduelo\n";
    cout<<"Enter your choice: ";
    cin >> choice;
    calculator c;
    switch (choice)
    {
    case 1:
        { 
        cout << "Addition\n";
        c.Addition(a,b);
        break;
        }
    case 2:
        {
        cout << "Substraction\n";
        c.Substraction(a,b);
        break;
        }
    case 3:
        {
        cout << "Multiplication\n";
        c.Multiplication(a,b);
        break;
        }
    case 4:
    {
        cout << "Division\n";
        c.Divison(a,b);
        break;
    }
    case 5:
    {
        cout<<"Moduelo\n";
        c.Moduelo(a,b);
        break;
    }
    }
 return 0;
}