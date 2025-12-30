#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for(int i=0; i<t;i++){
        int l;
        cin >> l;
        int visited[l][l];
        memset(visited,0,sizeof(visited));

        int dy[8] = {2,1,-1,-2,-2,-1,1,2};
        int dx[8] = {1,2,2,1,-1,-2,-2,-1};
        int sx,sy;
        cin >> sx >> sy;
        int objectX,objectY;
        cin >> objectX >> objectY;

        queue<pair<int,int>> q;
        q.push({sx,sy});
        visited[sx][sy] = 1;
        int cnt =0;
        
        while(q.size()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for(int j=0; j<8;j++){
                int nx = x + dx[j];
                int ny = y + dy[j];

                if(nx < 0 || ny < 0 || nx >= l || ny >=l) continue;
                if(visited[nx][ny])continue;

                if(nx == objectX && ny == objectY){
                    cnt++;
                    break;
                }
                visited[nx][ny] = 1;
                q.push({nx,ny});
                cnt++;
            }
        }

        cout << cnt << "\n";    
        
    }
        return 0;

    
}