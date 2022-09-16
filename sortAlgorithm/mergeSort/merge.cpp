#include <iostream>
using namespace std;
int result[1000];
void mMerge(int arr[], int st, int ed)
{
    int mid = (st + ed) / 2;
    int i = st;
    int j = mid + 1;
    int k = ed;
    while (i <= mid && j <= ed)
    {
        if (arr[i] > arr[j])
        {
            result[k++] = arr[j++];
        }
        else
        {
            result[k++] = arr[i++];
        }
    }
    if (i > mid)
    {
        while (j <= ed)
        {
            result[k++] = arr[j++];
        }
    }
    else
    {
        while (i <= mid)
        {
            result[k++] = arr[i++];
        }
    }
    for (int t = st; t <= ed; t++)
    {
        arr[t] = result[t];
    }
}
void mSort(int arr[], int st, int ed)
{
    if (st < ed)
    {
        int mid = (st + ed) / 2;
        mSort(arr, st, mid);
        mSort(arr, mid + 1, ed);
        mMerge(arr, st, ed);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    
}