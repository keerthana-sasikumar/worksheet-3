#include <iostream>
using namespace std;

int sum(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s;
}

float average(int a[], int n)
{
    return (float)sum(a, n) / n;
}

int maximum(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}

int minimum(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < min)
            min = a[i];
    return min;
}

int main()
{
    int a[5], n;

    cout << "Enter number of elements (max 5): ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Sum = " << sum(a, n) << endl;
    cout << "Average = " << average(a, n) << endl;
    cout << "Maximum = " << maximum(a, n) << endl;
    cout << "Minimum = " << minimum(a, n) << endl;

    return 0;
}
