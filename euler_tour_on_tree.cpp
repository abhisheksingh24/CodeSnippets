const int n = 1e5;
vector<vector<int> > adj;
vector<bool> visited(n, false);
vector<int> eulerTree, first, last;

void eulerTour(int u){
    visited[u] = true;
    eulerTree.push_back(u);
    for(int i: adj[u]){
        if(!visited[i]){
            eulerTour(i);
        }
    }
    eulerTree.push_back(u);
}

void fillFirstLast(){
    first.resize(n, -1);
    last.resize(n, -1);
    int n2 = eulerTree.size();
    for(int i = 0; i < n2; i++){
        int cur = eulerTree[i];
        if(first[cur] == -1) first[cur] = i;
        last[cur] = i;
    }
}
