#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main(void){
    fastio;
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> data_store;
        int visited[100001] = {0};

        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            data_store.push_back(temp);
        }
        
        int max_value = n;
        vector<int> print_store;
        int index_end = n - 1;
        int index_check = n - 1;
        while(index_check >= 0){
            if(data_store[index_check] == max_value){
                visited[max_value] = 1;
                for(int i = index_check; i <= index_end; i++){
                    print_store.push_back(data_store[i]);
                }
                for(int i = max_value - 1; i >= 0; i--){
                    if(visited[i] == 0){
                        max_value = i;
                        break;
                    }
                }
                index_end = index_check - 1;
            }
            else{
                visited[data_store[index_check]] = 1;
            }
            index_check--;
        }

        for(int i = 0; i < n; i++){
            cout << print_store[i]  << " ";
        }
        cout << "\n";
    }
    return 0;
}