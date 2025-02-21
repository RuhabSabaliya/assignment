#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str,rev;
    int count=0,i,length = 0, j=0;
    cout << "Enter a string+";
    cin >> str;
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    for (i = length - 1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != rev[i])
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout <<"\nThis is a palindrome";
    }
    else
    {
        cout <<"\nThis is not a palindrome";
    }
    return 0;
}