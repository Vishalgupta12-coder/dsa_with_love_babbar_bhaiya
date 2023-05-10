#include <iostream>
using namespace std;
int pivotElement(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int a[5] = {3, 4, 5, 1, 2};
    cout << "Index of pivot element is  : " << pivotElement(a, 5);
}