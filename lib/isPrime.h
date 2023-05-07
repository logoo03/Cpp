#pragma once
#include <stdbool.h>

bool isPrime(short n) {
    if (n < 2) return false;
    int i = 2;
    while (i * i <= n)
        if (n % i++ == 0) return false;
    return true;
}

bool isPrime(int n) {
    if (n < 2) return false;
    int i = 2;
    while (i * i <= n)
        if (n % i++ == 0) return false;
    return true;
}

bool isPrime(long n) {
    if (n < 2) return false;
    int i = 2;
    while (i * i <= n)
        if (n % i++ == 0) return false;
    return true;
}

bool isPrime(long long n) {
    if (n < 2) return false;
    int i = 2;
    while (i * i <= n)
        if (n % i++ == 0) return false;
    return true;
}