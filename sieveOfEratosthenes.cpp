#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;

const long long MOD = 1e9 + 7;

#define INPUT(x) freopen(x, "r", stdin)
#define OUTPUT(x) freopen(x, "w", stdout)

#define pb push_back
#define endl '\n'
#define LCM(a, b) (a / __gcd(a, b)) * b
#define GCD(a, b) __gcd(a, b)
#define SP(x, y) fixed << setprecision((y)) << (x)
#define PI acos(-1.0)
#define distance(x1, y1, x2, y2) sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1))
//#define MAX                     1e9 + 9

#define taratari                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);

//yarin's sieve for memeory efficiency
//segmented sieve for finding out the primes in range of a to b [a,b]

//-------sieve of eratosthenes--------//
void sieve (long long n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for(long long i = 2; i*i <= n; i++){
        if(prime[i]==true){
            
            for(long long j = i*i; j<=n; j+=i){
                prime[j]=false;
            }
        }
    }

    for(long long i = 2; i<=n; i++){
        if(prime[i]==true){
            cout<<i<<" ";
        }
    }

}
//--------------------//

//----segmented------//
#define MAX 32000
vector<int> primes;

void segmentedSieve(long long l, long long r)
{

    bool isPrime[MAX];
    memset(isPrime, true, sizeof(isPrime));

    for (int i = 3; i * i <= MAX; i++)
    {
        if (isPrime[i] == true)
        {

            for (long long j = i * i; j <= MAX; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= MAX; i += 2)
    {
        if (isPrime[i])
            primes.push_back(i);
    }

    bool seg[r - l + 1];
    memset(seg, true, sizeof(seg));

    for (long long i = 0; primes[i] * primes[i] <= r; i++)
    {
        int currentPrime = primes[i];
        long long base = (l / currentPrime) * currentPrime;
        if (base < l)
        {
            base = base + currentPrime;
        }

        for (long long j = base; j <= r; j += currentPrime)
        {
            isPrime[j - l] = false;
        }

        if (base == currentPrime)
        {
            isPrime[base - l] = true;
        }
    }

    for (long long i = 0; i < r - l + 1; i++)
    {
        if (isPrime[i] && (i+l)!=1)
        {
            cout << i + l << endl;
        }
    }
}

//----------------//

int main()
{
    taratari

    long long n;
    cin>>n;

    long long l,r;
    cin >> l >> r;

    cout<<"sieve"<<endl;
    sieve(n);
    cout<<endl;
    cout<<"segmented-sieve"<<endl;
    segmentedSieve(l, r);

    return 0;
}
