#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int prefix[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        prefix[i] = sum;
    }
    int suffix[n];
    sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum += arr[i];
        suffix[i] = sum;
    }

    int maxi = 0;
    int ind = -1;
    for (int i = 0; i < n; i++)
    {
        cout<<prefix[i]+suffix[i]<<endl;
        if (maxi < prefix[i] + suffix[i])

        {
            maxi = prefix[i] + suffix[i];
            ind = i;
        }
    }
    cout <<"maximum sum occurs at index : "<< ind + 1 << endl;
}

int main()
{
    solve();
    return 0;
}