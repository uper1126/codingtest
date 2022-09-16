//버블정렬 인접한 두 원소를 비교해서 가장 오른쪽 인덱스부터 하나하나 최대 원소를 채워나가는 알고리즘
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (n_arr[j - 1] > n_arr[j])
            {
                int tmp = n_arr[j - 1];
                n_arr[j - 1] = n_arr[j];
                n_arr[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << n_arr[i] << ' ';
    }
    return 0;
}