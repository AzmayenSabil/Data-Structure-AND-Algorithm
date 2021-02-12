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

int a[1000];
int temp[1000];

void mergeSort(int lo, int hi){

    if(lo==hi){
        return;
    }

    int mid = (lo+hi)/2;

    mergeSort(lo,mid);
    mergeSort(mid+1,hi);

    int i,j,k;

    for(i=lo,j=mid+1,k=lo;k<=hi;k++){

        if(i==mid+1){
            temp[k]=a[j];
            j++;
        }
        else if(j==hi+1){
            temp[k]=a[i];
            i++;
        }
        else if(a[i]<=a[j]){
            temp[k]=a[i];
            i++;
        }
        else{
            temp[k]=a[j];
            j++;
        }

    }

}



int main()
{
    taratari

    int n;
    cin>>n;


    for(int i=0; i<n;i++){
        cin>>a[i];
    }

    mergeSort(0,n-1);

    for(int s=0;s<=n-1;s++){
        cout<<temp[s]<<" ";
    }

    return 0;

}


