#include <bits/stdc++.h>
using namespace std;

//Brute Force Approach TC= 0(N^3)

int largestSubArrSum(int arr[], int n)
{
    int largestSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subArrSum = 0;
            for (int k = i; k <= j; k++)
            {
                subArrSum += arr[k];
            }
            largestSum = max(largestSum, subArrSum);
        }
    }
    return largestSum;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << largestSubArrSum(arr, n);

    return 0;
}