#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

vector<ll> primes;
void seive()
{
    vector<int> is_prime(1000005,1);
    is_prime[0]=0,is_prime[1]=0;
    for(ll i=2 ; i<=1000000 ; i++) {
        if(is_prime[i]) {
            for(ll j=i*i ; j<=1000000 ; j+=i) {
                is_prime[j] = 0;
            }
        }
    }
    for(int i=2 ; i<=1000000 ; i++)
        if(is_prime[i]) primes.push_back(i);
}

int main()
{
    seive();

    int q; cin >> q;
    while(q--)
    {
        ll n; cin >> n;
        
        map<ll,int> mp;
        for(auto it:primes)
        {
            if(it*it > n) break;
            while(n % it == 0){
                n /= it; mp[it]++;
            }
        }
        if(n != 1) mp[n]++; // the remainder must be exactly one prime
        cout << 1;
        for(auto it:mp){
            cout << it.first << " " << it.second << endl;
        }

    }
    return 0;
}