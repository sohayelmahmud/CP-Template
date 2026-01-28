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
bool isPrefix(string &s, string &y) {
    if(s.length() > y.length()) return false;
    f0(i, s.length()) if(s[i] != y[i]) return false;
    return true;
}
bool ispalindrom(string s) {
    f0(i, s.length()/2) if(s[i] != s[s.length()-i-1]) return false;
    return true;
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