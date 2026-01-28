// g++ Triple_Xor.cpp -o Triple_Xor && ./Triple_Xor < input.txt
#include <bits/stdc++.h>
using namespace std;
// clang-format off
// Typedefs & Defines
typedef long long           ll;
typedef vector<int>         vi;
typedef vector<ll>          vll;
typedef pair<ll, ll>        pii;

#define elif                else if
#define f0(i, n)            for (int i = 0; i < (n); i++)
#define f1(i, n)            for (int i = 1; i <= (n); i++)

#define all(x)              (x).begin(), (x).end()
#define rall(x)             (x).rbegin(), (x).rend()
#define len(a)              ((int64_t)(a).size())
#define ff                  first
#define ss                  second
#define pb                  push_back

#define YES                 cout << "YES" << endl
#define NO                  cout << "NO" << endl
#define Yes                 cout << "Yes" << endl
#define No                  cout << "No" << endl
// ############ ---- Input Functions ---- ############------------
#define inp(n)              ll n; cin >> n
#define inpstr(s)           string s; cin >> s
#define inp2(a,b)           ll a,b; cin >> a >> b
#define inparr(arr,n)       ll arr[n]; f0(t_ind, n) cin >> arr[t_ind]
#define varr(v, n) vll      v(n); f0(i, n) cin >> v[i]
template <typename... T> //--------------- multiple variable input
void invr(T &...args)
{                         //-------------- int x, y, z;
    (cin >> ... >> args); // ------------- invr(x, y, z);
} //---------------------------------------------------------------
vector<int> inlt(int n) //------------- List int input
{
    vector<int> arr(n);         //----- int size = 5;
    for (int i = 0; i < n; i++) //----- vector<int> a = inlt(size);
        cin >> arr[i];
    return arr;
} //---------------------------------------------------------------
// ############ ---- Constants ---- ############
const int MOD = 1e9 + 7;
const ll INF = 1e18;
// ############ ---- Useful Funtions ---- ############

// clang-format on
// ############ ---- Main Solve Function ---- ############
void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t = 1;
    // cin >> t;
    // while (--t)
    // {
    //     solve();
    // }

    solve();

    return 0;
}