#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
typedef long long ll;

int main(void){
    fastio;
    ll t;
    cin >> t;

    for(int i = 0; i < t; i++){
        ll n;
        ll max_value = -1;
        cin >> n;
        vector<ll> data;
        if(n == 1){
            cout << 0 << "\n";
            int trash;
            for(int i = 0; i < n; i++){
                cin >> trash;
            }
            continue;
        }
        else{
            for(int i = 0; i < n; i++){
                int temp;
                cin >> temp;
                if(temp > max_value){
                    max_value = temp;
                }
                data.push_back(temp);
            }

        }
        
        ll c = -1;
        ll pq = -1;
        ll front = data[0];
        ll back = data[1];

        if(back >= front){
            c = back - front;
        }
        else{
            pq = front - back;
        }
        
        bool error = false;
        for(int i = 2; i < n; i++){
            front = back;
            back = data[i];
            if(back >= front){
                if(c == -1){
                    c = back - front;
                }
                else{
                    if(c != back - front){
                        cout << -1 << "\n";
                        error = true;
                        break;
                    }
                }
            }
            else{
                if(pq == -1){
                    pq = front - back;
                }
                else{
                    if(pq != front - back){
                        error = true;
                        cout << -1 << "\n";
                        break;
                    }
                }
            }
        }

        if(error) continue;
        if(c == -1){
            cout << 0 << "\n"; // if m - c가 유니크하면
        }
        // c는 unique하게 결정된 상황
        else{
            if(pq == -1){
                cout << 0 << "\n";
            }
            else{
                if(c + pq > max_value){
                    cout << c + pq << " "<< c << "\n";
                }
                else cout << -1 << "\n";
                
            }         
        }
    }
    return 0;
}