//This Code is not using sorting
// We can also find min and max in the array by sorting the array and displaying first element as min and last element as max.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void minmax(vector<int> arr, int n)
{
    int min, max;
    if (n == 1)
    {
        min = arr[0];
        max = arr[0];
        cout << "min: " << min << "\n"
             << "max: " << max << endl;
    }
    else
    {
        if (arr[0] > arr[1])
        {
            max = arr[0];
            min = arr[1];
        }
        else
        {
            max = arr[1];
            min = arr[0];
        }

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < min)
                min = arr[i];
            else if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        cout << "min: " << min << "\n"
             << "max: " << max << endl;
    }
}

void minmaxBySorting(vector<int> arr, int n)
{
    int min, max;
    cout << "Using Sorting" << endl;
    if (n == 1)
    {
        min = arr[0];
        max = arr[0];
        cout << "min: " << min << "\n"
             << "max: " << max << endl;
    }
    else
    {
        sort(arr.begin(), arr.end());
        min = arr[0];
        max = arr[n - 1];
        cout << "min: " << min << "\n"
             << "max: " << max;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    minmax(arr, n);
    minmaxBySorting(arr, n);
    return 0;
}