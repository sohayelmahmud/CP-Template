// g++ Triple_Xor.cpp -o Triple_Xor && ./Triple_Xor < input.txt
#include <bits/stdc++.h>
using namespace std;
// clang-format off
// Typedefs & Defines
typedef long long           ll;
typedef long double         ld;
typedef vector<int>         vi;
typedef vector<ll>          vll;
typedef pair<ll, ll>        pii;

#define elif                else if
#define f0(i, n)            for (ll i = 0; i < (n); i++)
#define f1(i, n)            for (ll i = 1; i <= (n); i++)

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

template<typename dataType>
inline dataType abs(dataType k) {if (k >= 0) return k; else return (-k);}
template<typename dataType>
inline bool isEqual(dataType a, dataType b) {return (abs((dataType)(a-b)) < 1e-9);}
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
vector<int> inlt(ll n) //------------- List int input
{
    vector<int> arr(n);         //----- int size = 5;
    for (ll i = 0; i < n; i++) //----- vector<int> a = inlt(size);
        cin >> arr[i];
    return arr;
} //---------------------------------------------------------------
// ############ ---- Constants ---- ############
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
// ############ ---- Useful Funtions ---- ############
bool isPrefix(string &s, string &y) {
    if(s.length() > y.length()) return false;
    f0(i, s.length()) if(s[i] != y[i]) return false;
    return true;
}
bool ispalindrom(string s) {
    f0(i, s.length()/2) if(s[i] != s[s.length()-i-1]) return false;
    return true;
}
template<typename T>
bool isArrayPalindrome(T arr[], ll n) {
    f0(i, n / 2) {
        if (arr[i] != arr[n - i - 1]) return false;
    }
    return true;
}
bool isPrime(ll n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}
bool isLucky(ll n, ll a)
{
    while (n > 0)
    {
        ll digit = n % 10;
        if (digit != a)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
ll nthFib(ll n)
{
    if (n <= 1)
        return n;
    ll a = 0, b = 1, res;
    for (ll i = 2; i <= n; i++)
    {
        res = a + b;
        a = b;
        b = res;
    }
    return res;
}
void nFibs(ll n)
{
    ll a = 0, b = 1;
    for (ll i = 0; i < n; i++)
    {
        cout << a << " ";
        ll next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll fastPow(ll base, ll n) {
    ll res = 1;
    base %= MOD;
    while (n > 0) {
        if (n % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        n /= 2;
    }
    return res;
}
ll fact[200005];
void precomputeFactorials(int n, ll mod) {
    fact[0] = 1;
    for (int i = 1; i <= n; i++) fact[i] = (fact[i - 1] * i) % mod;
}
ll nCr(int n, int r, ll mod) {
    if (r < 0 || r > n) return 0;
    return (((fact[n] * modInverse(fact[r], mod)) % mod) * modInverse(fact[n - r], mod)) % mod;
}
vll getDivisors(ll n) {
    vll divisors;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.pb(i);
            if (i * i != n) divisors.pb(n / i);
        }
    }
    return divisors;
}
template<typename dataType1, typename dataType2>
void allPrimeVector(dataType1 n, dataType2 &primeList) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int32_t p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (dataType1 i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int32_t p = 2; p <= n; p++)
        if (prime[p])
            primeList.pb(p);
}

template<typename dataType>
string decimalTokbitsBinary(dataType n,dataType k) {
    string s = bitset<64>(n).to_string();

    return s.substr(64-k);
}


template<typename dataType>
dataType val(char c) {
    if (c >= '0' && c <= '9')
        return (dataType)(c - '0');
    else
        return (dataType)(c - 'A') + 10;
}
template<typename dataType>
dataType nthBaseToDecimal(string str, dataType base) {
    int32_t len = str.length();
    int32_t power = 1;
    dataType num = 0;

    for (int32_t i = len - 1; i >= 0; i--) {
        num += (val<dataType>(str[i]) * power);
        power *= base;
    }

    return num;
}

template<typename dataType>
char reVal(dataType num) {
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}
template<typename dataType>
string nthBasefromDeci(dataType inputNum, dataType base) {
    string res = "";
    while (inputNum > 0) {
        res += reVal(inputNum % base);
        inputNum /= base;
    }
    if (res == "")
        res = "0";
    return string(rall(res));
}

template<typename dataType>
dataType phi(dataType n) {
    dataType result = n;
    for(int32_t p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            while (n % p == 0) n /= p;
            result -= result / p;
        }
    }
    if (n > 1) result -= result / n;
    return result;
}
template<typename dataType1, typename dataType2, typename dataType3>
int64_t powMod(dataType1 base, dataType2 n, dataType3 mod) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        int64_t t_pow = (int64_t)powMod(base, n/2, mod);
        return ((t_pow*t_pow) % mod);
    }
    int64_t t_pow = (int64_t)powMod(base, (n-1)/2, mod);
    return ((int64_t)base * ((t_pow*t_pow) % mod) % mod);
}
template<typename dataType1, typename dataType2>
int64_t modInverse(dataType1 n, dataType2 mod, bool isPrime = true) {
    if(isPrime) return powMod(n, mod-2, mod);
    return powMod(n, phi(mod)-1, mod);
}
template<typename dataType1, typename dataType2, typename dataType3>
int64_t modDivide(dataType1 a, dataType2 b, dataType3 mod, bool isPrime = true) {
    return (((int64_t)a * modInverse(b, mod, isPrime)) % mod);
}
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