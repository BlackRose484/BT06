#include <bits/stdc++.h>
using namespace std;

long F(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return F(n - 1) + F(n - 2);
}

int main()
{
    int n;
    cin >> n;
    clock_t start, end;
    double time_used;
    start = clock();
    cout << F(n) << endl;
    end = clock();
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    cout << time_used << endl;
    system("pause");
}