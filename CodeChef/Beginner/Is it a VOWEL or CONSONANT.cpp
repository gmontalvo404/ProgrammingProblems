//https://www.codechef.com/problems/VOWELTB

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

    vector<char> vowels = {'A', 'E', 'I', 'O', 'U'};
    char c;
    cin >> c;

    count(vowels.begin(), vowels.end(), c) == 1 ? cout << "Vowel" : cout << "Consonant";

    return 0;
}