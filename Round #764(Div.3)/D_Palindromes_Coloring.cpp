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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> alphabet(26);

        for(int i = 0; i < n; i++){
            alphabet[s[i] - 'a'] += 1;
        }

        int single = 0;
        int pair = 0;

        for(int i = 0; i < 26; i++){
            single += alphabet[i] % 2;
        }

        pair = (n - single) / 2;

        int ans = 0;

        while(pair >= k){
            pair -= k;
            ans += 2;
        }
        single += pair * 2;
        if(single >= k){
            ans += 1;
        }

        cout << ans << "\n";
    }
}  