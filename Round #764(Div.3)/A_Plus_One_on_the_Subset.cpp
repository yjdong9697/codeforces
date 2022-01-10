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
        int n;
        cin >> n;
        int min_num = 2000000000;
        int max_num = -1;
        for(int i = 0; i < n; i++){
            int t;
            cin >> t;
            min_num = min(min_num, t);
            max_num = max(max_num, t); 
        }
        cout << max_num - min_num << "\n";
    }
    return 0;
    
    
}