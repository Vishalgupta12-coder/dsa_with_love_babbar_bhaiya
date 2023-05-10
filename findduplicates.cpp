#include <iostream>
using namespace std;

int duplicateFind(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i]; // XOR 0 WITH ALL VALUES
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i; // XOR 0 WITH ALL VALUES
    }
    return ans;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 4};
    int s = 7;
    cout << duplicateFind(arr, s);
    return 0;
}
