#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;


int main() {
    fastio;
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if((2 * b - c) % a == 0 && ((2 * b - c) >= a)){
            cout << "YES\n";
        }
        else if((2 * b - a) % c == 0 && ((2 * b - a) >= c)){
            cout << "YES\n";
        }
        else if((a + c) % (2 * b) == 0 && ((a + c) >= 2 * b)){
            cout << "YES\n";
        } 
        else cout << "NO\n";
    }
    return 0;
}