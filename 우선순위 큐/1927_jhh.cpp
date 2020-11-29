#include<functional>
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    priority_queue<int,vector<int>,greater<int>> q;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x==0){
            cout<<(q.empty()?0:q.top())<<'\n';
            if(!q.empty())
                q.pop();
        }else q.push(x);
    }
    return 0;
}