#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fastIO();

    string s; cin >> s;
    int n = (int)s.length();
    ll cnt=1,ans=0;
    for(int i=n-1 ; i>=0 ; i--)
    {
        ans += (cnt*(int)(s[i]-'0')) % 20;
        ans %= 20;
        cnt*=10; cnt %= 20;
    }
    cout << ans << endl;

    return 0;
}