#include <iostream>
#include <vector>
using namespace std;
struct edge{
    int from,to,cost;
}
vector<edge> v;
int main(){
    
    int c,n,m;
    cin>>c;
    while(c--){
        cin>>n>>m;
        for(int i=0;i<m;i++){
            edge tmp;
            cin >> tmp.from >> tmp.to >>tmp.cost;
            v.push_back(tmp);
        }
        
    }
}
