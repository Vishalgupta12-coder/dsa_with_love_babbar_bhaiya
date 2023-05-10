#include <iostream>
#include <set>
#include <vector>
using namespace std;
// function to find intersaction of two arrays
int arrayIntersaction(int arr[], int arr1[], int n, int n1)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (arr[i] == arr1[j])
            {
                ans.push_pack(arr[i]);
                arr1[j] == -12212564; // to initialize number with it so that value cannot be repeat
                break;
            }
        }
    }
    return ans;
}
// function to print the array
int print(int arr[], int n)
{
    cout << "Common elements are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// function to get the array.
int getArray(int arr[], int n)
{
    cout << "Enter " << n << " elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
// main function

int main()
{
    int n, n1;
    int arr1[50];
    int arr2[50];
    cout << "Enter total no of elements in ist array : ";
    cin >> n;
    cout << "Enter total no of elements in 2nd array : ";
    cin >> n1;

    getArray(arr1, n);
    getArray(arr2, n1);
    arrayIntersaction(arr1, arr2, n, n1);
}