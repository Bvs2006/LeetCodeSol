class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        
        vector<char> p(n, 1);
        p[0] = 0;
        p[1] = 0;
        
        // Only loop up to sqrt(n)
        for (int i = 3; i * i < n; i += 2) {
            if (p[i]) {
                // Start at i * i and skip even multiples by incrementing by 2 * i
                for (int j = i * i; j < n; j += 2 * i) {
                    p[j] = 0;
                }
            }
        }
        
        int c = 1; // Count 2 as a prime
        // Count remaining primes, checking only odd numbers
        for (int i = 3; i < n; i += 2) {
            if (p[i]) c++;
        }
        
        return c;
    }
};