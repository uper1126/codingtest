#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int n_arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> n_arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int tmp = n_arr[i];
        int prev = i - 1;
        while (prev >= 0 && (n_arr[prev] > tmp))
        {
            n_arr[prev + 1] = n_arr[prev];
            prev--;
        }
        n_arr[prev + 1] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << n_arr[i] << ' ';
    }
}