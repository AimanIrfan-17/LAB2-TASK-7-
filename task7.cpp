#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    int arr[6] = {90, 75, 60, 45, 30, 15};
    int key;
    cout << "Enter value to search: ";
    cin >> key;
    int result = binarySearch(arr, 6, key);
    if (result == -1)
        cout << key << " not found";
    else
        cout << key << " found at index " << result;
    return 0;
}
