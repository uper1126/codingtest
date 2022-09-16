#include<iostream>
using namespace std;

int n_arr[100];
int n;
int mx;
int n_arr1[100];
bool isused[100];
void func(int k){
    if(k == n){
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += abs(n_arr1[i] - n_arr1[i + 1]);
        }
        mx = max(mx, sum);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if(!isused[i]){
            isused[i] = 1;
            n_arr1[k] = n_arr[i];
            func(k+1);
            isused[i] = 0;
        }
    }
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> n_arr[i];
    }
    
    func(0);

    cout << mx;
    return 0;
}