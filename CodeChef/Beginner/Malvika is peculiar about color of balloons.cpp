//https://www.codechef.com/problems/CHN09

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define rev(i, n, a) for (int i = n; i >= a; i--)
#define ln '\n'
#define space ' '
#define cout(a, b) cout << a << space << b << ln;

typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> VI;
typedef vector<ll> VLL;
typedef vector<ull> VULL;
typedef pair<int, int> PII;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        a = count(s.begin(), s.end(), 'a');
        b = s.size() - a;
        cout << min(a, b) << ln;
    }

    return 0;
}