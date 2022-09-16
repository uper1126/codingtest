//선택정렬, 원소를 넣을 순서는 이미 정해져있고 어떤 원소를 넣을지 선택하는 알고리즘
#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int n_arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> n_arr[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        int indexMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if(n_arr[j] < n_arr[indexMin]){
                indexMin = j;
            }
        }
        int temp = n_arr[i];
        n_arr[i] = n_arr[indexMin];
        n_arr[indexMin] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << n_arr[i] << ' ';
    }
    
}