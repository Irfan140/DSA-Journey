#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements od array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=max && smax<arr[i])
            smax = arr[i];
    }
    cout << "Second largest is " << smax;
}