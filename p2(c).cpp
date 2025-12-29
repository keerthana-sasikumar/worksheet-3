#include <iostream>
using namespace std;

void reverse(int &n)
{
    int rev = 0, temp = n;

    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    cout << "Reversed number: " << rev << endl;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    reverse(num);
    return 0;
}
