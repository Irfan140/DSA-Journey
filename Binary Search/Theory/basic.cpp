// in case  when no. of element is even we take left middle as middle
// time complexity is  O(logn)
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-1, 0, 3, 5, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 9;

    int low = 0, high = n - 1;

    bool flag = true;
    while (low <= high)
    {
        int mid = low + (high - low) / 2; //! For safety
        if (arr[mid] == x)
        {
            flag = false;
            break;
        }
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (flag == true)
        cout << x << " is not present in array";
    else
        cout << x << " is present in array";
}