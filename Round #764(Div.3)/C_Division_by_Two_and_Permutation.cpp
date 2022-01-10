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
        priority_queue<int> pq;
        for(int i = 0; i < n; i++){
            int t;
            cin >> t;
            while(t > n){
                t /= 2;
            }
            pq.push(t);
        }

        vector<int> check(n + 1, 0);

        while(!pq.empty()){
            int cur = pq.top();
            pq.pop();
            if(cur == 0) continue;
            if(!check[cur]) check[cur] = 1;
            else{
                pq.push(cur / 2);
            }
        }

        bool flag = true;

        for(int i = 1; i <= n; i++){
            if(!check[i]){
                cout << "NO\n";
                flag = false;
                break;
            }
        }

        if(flag){
            cout << "YES\n";
        }
    }
    return 0;
}