class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0; // Handles n = 0, 1, 2 safely

        vector<bool> p(n, true);
        p[0] = false;
        p[1] = false;
        
        for (int i = 3; i * i < n; i+=2) {
            if (p[i]) {
                for(int j = i * i; j < n; j += 2 * i) {
                    p[j] = false;
                }
            }
        }
        
        int c = 1;
        for (int i = 3; i < n; i += 2) {
            if (p[i]) c++;
        }
        return c;
    }
};