#include <bits/stdc++.h>
using namespace std;

bool used[100];
int n;
int arr[1000];

int X[100];
void Show()
{
    for (int i = 1; i <= n; i++)
    {
        cout << X[i];
    }
    cout << endl;
}
void Hoanvi(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!used[j])
        {
            X[i] = j;
            // used[j] = 1;
            if (i == n)
            {
                Show();
            }
            else
            {
                Hoanvi(i + 1);
            }
            used[j] = 0;
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    memset(used, 0, sizeof(used));
    Hoanvi(1);
    system("pause");
}