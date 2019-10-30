vector<int> createAux(string p){
        vector<int> aux(p.length(), 0);
        for(int i = 1, m = 0; i < p.length(); ){
            if(p[m] == '?' || p[i] == p[m]) aux[i++] = ++m;
            else if(m) m = aux[m - 1];
            else aux[i++] = 0;
        }
        return aux;
    }
