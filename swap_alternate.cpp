// #include <iostream>
// using namespace std;
// void swapAlternates(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         swap(arr[i], arr[i + 1]);
//         i++;
//     }
// }
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << ' ';
//     }
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int count = 5;
//     swapAlternates(arr, count);
//     printArray(arr, count);
//     return 0;
// }
#include <iostream>
using namespace std;
// int sumofNumbers(int x, int y)
// {
//     return x + y;
// }
// int main()
// {
//     int a;
//     a = sumofNumbers(10, 5);
//     cout << "The output is : " << a;
// }
// int main()
// {
//     int x = 85, y = 466;
//     int *ptr;
//     ptr = &x;
//     cout << "The value of y is " << y << endl;
//     cout << "The value of *ptr is " << *ptr << endl;
//     return 0;
// }
// main()
// {
//     int num1 = 120, num2 = 45, num3 = 320;
//     cout << "The Greatest Among All Three:";
//     if ((num1 > num2) || (num1 > num3))
//         cout << num1;
//     else if (num2 > num3)
//         cout << num2;
//     else
//         cout << num3;
//     return 0;
// }
// main()
// {
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//             cout << i;
//         cout << endl;
//     }
// }
void palindrome(int number)
{
    int rev = 0, store, n1, left;
    n1 = number;
    store = number;
    while (number > 0)
    {
        left = number % 10;
        rev = rev + 10 * left;
        number = number / 10;
    }
    if (n1 == rev)
        cout << "Number %d is Palindrome number";
    else
        cout << "it is not a Palindrome number";
}

int main()
{
    palindrome(121);
    return 0;
}
