#include <iostream>
using namespace std;

void reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
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
