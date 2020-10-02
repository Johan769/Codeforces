#include <bits/stdc++.h>

#define db double
#define ld long double
#define ll long long 
#define ar array
#define unmap unordered_map
#define pb push_back
#define pop pop_back
#define lin(x) ll x; cin >> x;
#define endl "\n"
#define FOR(n) for(int i = 0; i < n; ++i)
#define FORL(s, e) for(int i = s; i < e; ++i)
#define FORM(s, e) for(int i = s; i <= e; ++i)
#define EACH(v) for(auto i: v)
#define FORE(i, a, b) for(int i = a; a < b?i < b:i > b; a < b?i++:i--)
#define FMAP(map, it) for(it = map.begin(); it != map.end(); ++it)

using namespace std;

const int mxN = 1e5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a;
    cin >> a;
    int n = a.size();
    int zeros = 0;
    int ones = 0;
    FOR(n) {
        if(ones + 1 == n)
            break;
        if(a[i] == '0') {
            zeros++;
            if(zeros != 1)
                cout << a[i];
        }else {
            cout << a[i];
            ones++;
        }
    }
    cout << "\n";
    return 0;
}
