#include <iostream>
using namespace std;

void SieveOfAtkin(int limit){
    if (limit > 2)
        cout << 2 << "\n";
    if (limit > 3)
        cout << 3 << "\n";
  
    bool sieve[limit];
    for (int i = 0; i < limit+1; i++)
        sieve[i] = false;

    for (int x = 1; x * x < limit+1; x++) {
        for (int y = 1; y * y < limit+1; y++) {
              
            int n = (4 * x * x) + (y * y);
            if (n <= limit+1 && (n % 12 == 1 || n % 12 == 5))
                sieve[n] ^= true;
  
            n = (3 * x * x) + (y * y);
            if (n <= limit+1 && n % 12 == 7)
                sieve[n] ^= true;
  
            n = (3 * x * x) - (y * y);
            if (x > y && n <= limit+1 && n % 12 == 11)
                sieve[n] ^= true;
        }
    }

    for (int r = 5; r * r < limit+1; r++) {
        if (sieve[r]) {
            for (int i = r * r; i < limit; i += r * r)
                sieve[i] = false;
        }
    }

    for (int a = 5; a < limit+1; a++){
        if (sieve[a]){
            cout << a << "\n";}
    }
}