#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;
typedef long long ll;

int main(void){
    fastio;
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        ll p, a, b, c;
        cin >> p >> a >> b >> c;
        cout << min(min((a - (p % a)) % a, (b - (p % b)) % b), (c - (p % c)) % c) << "\n";
    }
    return 0;
}