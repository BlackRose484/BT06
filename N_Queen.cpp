#include <bits/stdc++.h>
using namespace std;
int n;
int cot[100], d1[100], d2[100];
int X[100];
int arr[100][100];

void Show()
{
    memset(arr, 0, sizeof(arr));
    for (int i = 1; i <= n; i++)
    {
        arr[i][X[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void N_Queen(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] == 1 && d1[i + j - 1] == 1 && d2[i - j + n] == 1)
        {
            X[i] = j;
            cot[j] = d1[i + j - 1] = d2[i - j + n] = 0;
            if (i == n)
            {
                Show();
            }
            else
            {
                N_Queen(i + 1);
            }
            cot[j] = d1[i + j - 1] = d2[i - j + n] = 1;
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= 99; i++)
    {
        cot[i] = d1[i] = d2[i] = 1;
    }
    N_Queen(1);
    system("pause");
}