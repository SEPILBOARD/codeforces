#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    vector<int> tests(t);
    int max_n = 0;
    for (int i = 0; i < t; i++){
        cin >> tests[i];
        if(tests[i] > max_n)
            max_n = tests[i];
    }
    
    // Sieve of Eratosthenes로 max_n까지 소수를 구함
    vector<bool> isPrime(max_n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= max_n; i++){
        if(isPrime[i]){
            for (int j = i * i; j <= max_n; j += i)
                isPrime[j] = false;
        }
    }
    vector<int> primes;
    for (int i = 2; i <= max_n; i++){
        if(isPrime[i])
            primes.push_back(i);
    }
    
    // 각 테스트 케이스별로 답 계산
    for (int n : tests){
        long long ans = 0;
        for (int p : primes){
            if(p > n) break;
            ans += n / p;
        }
        cout << ans << "\n";
    }
    
    return 0;
}
