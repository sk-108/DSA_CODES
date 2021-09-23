#include <bits/stdc++.h>
using namespace std;

int zeroes(int n)
{
    if (n == 0 )
    {
        return 1;
    }
    else if(n<=9)
    {
        return 0;
    }
    int ans = zeroes(n / 10);
    if (n % 10 == 0)
    {
        ans++;
    }

    return ans;
   
}

int main()
{
    int n;
    cin >> n;
    cout << zeroes(n);
    return 0;
}