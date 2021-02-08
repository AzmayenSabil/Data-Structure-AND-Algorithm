#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;

const long long MOD = 1e9+7;


#define INPUT(x)                freopen(x,"r",stdin)
#define OUTPUT(x)               freopen (x,"w",stdout)


#define pb                      push_back
#define endl                    '\n'
#define LCM(a,b)                (a/__gcd(a,b))*b
#define GCD(a,b)                __gcd(a,b)
#define SP(x,y)                 fixed<<setprecision((y))<<(x)
#define PI                      acos(-1.0)
#define distance(x1,y1,x2,y2)   sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
//#define MAX                     1e9 + 9

#define taratari                ios_base::sync_with_stdio(0);cin.tie(NULL);

int euler(int n){
//https://www.whitman.edu/mathematics/higher_math_online/section03.08.html -> to understand euler totient func

    int result = n;

    for(int i = 2; i*i <= n ; i++){
        if(n%i == 0){

            while(n%i == 0){
                n=n/i;
            }
        }

        result = result - (result/i);

    }

    if(n>1){

        result = result - (result/n);
    }

    return result;


}

int main()
{
    taratari

    int n;
    cin>>n;

    int result = euler(n);

    cout<<result;



    return 0;

}

