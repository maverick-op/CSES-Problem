//============================== PRATYUSH PRATEEK (MAVERICK)     ==============================//
 
#include <bits/stdc++.h>
 
using namespace std;
using namespace chrono;
 
#define bolt()                         \
     ios_base::sync_with_stdio(false); \
     cin.tie(NULL);                    \
     cout.tie(NULL)
#define MOD 1000000007
#define ll long long
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define ull unsigned long long int
#define PI 3.141592653589793238462
 
#ifdef maverick_op
#define debug(x)
cerr << #x << " ";
_print(x);
cerr << endl;
#else
#define debug(x) ;
#endif
 
 
/*
1. Initialize all variables! Arrays etc.
2. Min of Max and Max of Min, such type of problems usually require Binary Search
3. Use to_string and stoi,atoi for conversions to suitable types.
4. For setting precision of n digits after decimal, use cout<<fixed;cout<<setprecision(n); before output, or at start of code if all outputs have same precision(include ios and iomanip header files.
5. Instead os using ceil(a/b), use (a-1)/b + 1.
6. For char to int, subtract '0', for int to char add'0'
7. For logn use binary search
*/
 
 
//////////////////////// SOLUTION ////////////////////
void maverick()
{
   ll n;
   cin>>n;

   ll a[n];

   ll sum = n*(n+1)/2;

   for(int i=0; i<n-1; i++)
   {
   	cin>>a[i];
   }

   sort(a,a+n);

   ll total=0;

   for(int i=0; i<n; i++)
   {
   	//total += a[i];
   	if(a[i] != i+1)
   	{
   		cout<<i+1;
   		return;
   	}
   }

   cout<<sum-total<<nline;
}
 
//////////// MAIN //////////////
 
int main()
{
     bolt();
 
     ll test_cases;
    // cin>>test_cases;
 
     test_cases = 1; 
 
     while(test_cases--)
     {
        maverick();
     }
 
     return 0;
}
