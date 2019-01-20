vector<int> primes;
vector<bool> isPrime;
vector<vector<int> > factors;

void sieve(int n){
    isPrime.resize(n+1, 1);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i <= n; i++){
        if(!isPrime[i]) continue;
        for(int j = 2*i; j <= n; j+=i) isPrime[j] = false;
    }
    for(int i = 0; i <= n; ++i){
        if(isPrime[i]) primes.push_back(i);
    }
}

void fillFactors(int n){
    //sieve(n);
    factors.resize(n+1);
    for(int p: primes){
        for(int i = p; i <= n; i+=p) factors[i].push_back(p);
    }
}
