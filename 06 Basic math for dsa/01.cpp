#include <iostream>
using namespace std;

int main()
{
    // int n = 8575;
    // int c = 0;
    // int sum = 0;
    // cout << "printing using while looop" << endl;
    // while (n > 0)
    // {
    //     int d1 = n % 10;
    //     c++;
    //     n = n / 10;
    //     cout << d1 << endl;
    //     sum = sum + d1;
    // }

    // cout << "Total digits are : " << c << endl;
    // cout << "The sum of digits  : " << sum << endl;

    // Printing The Reverse Number ---------->;

    // int n = 987654321;
    // int rev = 0;

    // while (n > 0)
    // {
    //     int lastDigit = n % 10;
    //     rev = rev * 10 + lastDigit;
    //     n = n / 10;
    // }

    // cout << "Aftre Reversing the No : " << rev;

    // <-------------- Palindrome Number -------------->
    int x;
    cout << "Enter Your Number :" << endl;
    cin >> x;
    int dupx = x;
    int rev = 0;

    while (x > 0)
    {
        int lastDigit = x % 10;
        rev = rev * 10 + lastDigit;
        x = x / 10;
    }

    if (rev == dupx)
    {
        cout << "This is a Palindrome Number" << endl;
    }
    else
    {
        cout << "This is Not Palindrome Number" << endl;
    }
}