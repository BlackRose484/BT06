#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000];
void Show(int k)
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Pt(int i, int k, int cur_sum)
{
    for (int j = k; j >= 1; j--)
    {
        if (cur_sum + j <= n)
        {
            a[i] = j;
            if (cur_sum == n)
                Show(i);
            else
                Pt(i + 1, j, cur_sum + j);
        }
    }
}
int main()
{

    cin >> n;
    Pt(1, n, 0);
    system("pause");
}