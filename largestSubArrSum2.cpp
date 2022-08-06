#include <bits/stdc++.h>
using namespace std;

//Kadane's Algorithm TC=O(N)

int largestSubArrSum(int arr[], int n)
{
    int cs = 0;
    int largestSum = 0;

    for (int i = 0; i < n; i++)
    {
        cs += arr[i];

        if (cs < 0)
        {
            cs = 0;
        }
        largestSum = max(largestSum, cs);
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
