#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 2, 3, 2, 4, 5, 6};
    int arr1[5] = {2, 3, 5, 5, 9};
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr.size(); i++)
        {
            if (arr1[i] == arr[j])
            {
                cout << arr1[i];
            }
        }
    }
}