#include <iostream>
using namespace std;
int n;
int n_arr[100000];
int st, ed;

void quickSort(int l, int r)
{
    if (l >= r)
    {
        return;
    }
    st = l;
    ed = r;
    int pivot = n_arr[(st + ed) / 2];
    while (st <= ed)
    {
        while (n_arr[st] < pivot)
        {
            st++;
        }
        while (n_arr[ed] > pivot)
        {
            ed--;
        }
        if (st <= ed)
        {
            swap(n_arr[st], n_arr[ed]);
            st++;
            ed--;
        }
    }
    quickSort(l, ed);
    quickSort(st, r);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> n_arr[i];
    }
    quickSort(0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << n_arr[i] << ' ';
    }
    
}