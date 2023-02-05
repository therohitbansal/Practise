#include <iostream>
using namespace std;
int indexoffirstoccur(int *arr, int target, int l, int h)
{
    while (l <= h)
    {int mid = (l + h) / 2;
        if (arr[mid] < target)
            l = mid + 1;
        else if (arr[mid] > target)
            h = mid - 1;
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                h = mid - 1;
        }
    }
    return -1;
}
int recindexofbinarysearch(int *arr, int target, int l, int h)
{
    if (l > h)
        return -1;
    int mid = (l + h) / 2;
    if (arr[mid] == target)
    {
        if (arr[mid - 1] == target)
        {
            return recindexofbinarysearch(arr, target, 0, mid);
        }
        else
            return mid;
    }
    else if (arr[mid] < target)
        return recindexofbinarysearch(arr, target, mid + 1, h);
    return recindexofbinarysearch(arr, target, 0, mid - 1);
}
int main()
{
    int arr[] = {3, 4, 5, 5, 15, 20, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << indexoffirstoccur(arr,15, 0, size-1);
}