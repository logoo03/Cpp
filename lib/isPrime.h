#ifndef _ISPRIME_H
#define _ISPRIME_H

int isPrime(int n) {
    if (n < 2) return 0;
    int i = 2;
    while (i * i <= n)
        if (n % i++ == 0) return 0;
    return 1;
}

#endif