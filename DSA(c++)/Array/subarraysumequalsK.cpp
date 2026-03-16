#include <iostream>
using namespace std;

int subarraySum(int arr[], int n, int target)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (sum == target)
                count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {5, 20, 10, 3, 2};
    int n = 5;
    int target = 33;

    cout << subarraySum(arr, n, target);
    return 0;
}
