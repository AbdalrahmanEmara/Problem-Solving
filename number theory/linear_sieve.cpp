#include <bits/stdc++.h>
using namespace std;
#define ll long long

void linear_sieve (ll n)
{
    ll N = 1e10;
    bool not_primes[N];
    vector<ll> primes;

    not_primes[0]=not_primes[1]=true;
    for(int i=2 ; i<n ; i++)
    {
        if(!not_primes[i]) primes.push_back(i);
        for(int j=0 ; j < primes.size() && i * primes[j] < n ; j++)
        {
            not_primes[i * primes[j]] = true;
            if (i % primes[j] == 0) break;
        }
    }
}