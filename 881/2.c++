#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define lli long long int
#define fi(i,n) for(int i=0;i<n;i++)
#define fj(j,n) for(int j=0;j<n;j++)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1){cout << name << " : " << arg1 << endl;}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args){const char *comma = strchr(names + 1, ',');cout.write(names, comma - names) << " : " << arg1 << " | ";__f(comma + 1, args...);}


int max(int a, int b){a *= 1LL;b *= 1LL;if (a > b)return a;return b;}
int min(int a, int b){a *= 1LL;b *= 1LL;if (a < b)return a;return b;}
int gcd(int a, int b){a *= 1LL;b *= 1LL;if(b > a){return gcd(b, a);}if (b == 0){return a;}return gcd(b, a % b);}
int expo(int a, int b){int res = 1;while (b > 0){if (b & 1)res = (res * a) % mod;a = (a * a) % mod;b = b >> 1; }return res % mod;}

void solve()
{
    int n,flag=1;cin>>n;
    vector<int>arr(n);
    lli sum=0,count=0;

    for(int i=0;i<n;i++)
     { 
          cin>>arr[i];
          sum+=abs(arr[i]);
     }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            flag=1;
        }
        else if(arr[i]<0)
        {
            if(flag==1)
            {
                count++;
                flag=0;
            }
        }

    }
    
cout<<sum<<" "<<count<<endl;

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}