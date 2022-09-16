//test
#include <iostream>
using namespace std;

int n, m, k, test;
int n_arr[1000];
int bt[3];
int ans = 0;
bool isused[1000];
void func(int k)
{
    if (k == 3)
    {
        int num = 0;
        for (int i = 0; i < 3; i++)
        {
            num += bt[i];
        }
        if (num >= 0 && num <= m)
        {
            if(num >= ans){
                ans = num;
            }
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!isused[i])
        {
            isused[i] = 1;
            bt[k] = n_arr[i];
            func(k + 1);
            isused[i] = 0;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> n_arr[i];
    }

    func(0);
    cout << ans;
    return 0;
}