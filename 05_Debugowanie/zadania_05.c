#include <stdio.h>
#include <stdlib.h>

// Zadanie 1
/*
int main() {
    int a = 10; // a = 10
    int b = 5;  // a = 10, b = 5
    a = a + b;  // a = 15, b = 5
    b = a - b;  // a = 15, b = 10
    a = a - b;  // a = 5, b = 10
    b = a * b;  // a = 5, b = 50
    a = b / a;  // a = 10, b = 50
    b = a << 2; // a = 10, b = 40
    a = b >> 1; // a = 20, b = 40
    b = a & b;  // a = 20, b = 0
    a = a ^ b;  // a = 20, b = 0
    b = ~a;     // a = 20, b = -21
    return 0;
}
*/

// Zadanie 2
/*
int main() {
    int a = 10; // a = 10
    int b = 5;  // a = 10, b = 5
    int c = 0;  // a = 10, b = 5, c = 0
    a = a + b;  // a = 15, b = 5, c = 0
    b = a - b;  // a = 15, b = 10, c = 0
    a = a - b;  // a = 5, b = 10, c = 0
    c = a;      // a = 5, b = 10, c = 5
    a = b * c;  // a = 50, b = 10, c = 5
    b = a / c;  // a = 50, b = 10, c = 5
    c = b << 2; // a = 50, b = 10, c = 40
    b = c >> 1; // a = 50, b = 20, c = 40
    a = b & c;  // a = 0, b = 20, c = 40
    c = a ^ b;  // a = 0, b = 20, c = 20
    b = ~c;     // a = 0, b = -21, c = 20
    return 0;
}
*/

// Zadanie 3
/*
int main() {
    int x = 7;    // x = 7
    int y = 3;    // x = 7, y = 3
    int z = 12;   // x = 7, y = 3, z = 12
    x = x * 2;    // x = 14, y = 3, z = 12
    y = y + x;    // x = 14, y = 17, z = 12
    z = z - y;    // x = 14, y = 17, z = -5
    x = z / 2;    // x = -2, y = 17, z = -5
    y = x % 3;    // x = -2, y = -2, z = -5
    z = x + y;    // x = -2, y = -2, z = -4
    x = z++;      // x = -4, y = -2, z = -3
    y = ++x;      // x = -3, y = -3, z = -3
    z = y--;      // x = -3, y = -4, z = -3
    return 0;
}
*/

// Zadanie 4
/*
int main() {
    int p = 15;   // p = 15
    int q = 6;    // p = 15, q = 6
    int r = 1;    // p = 15, q = 6, r = 1
    p = p | q;    // p = 15, q = 6, r = 1
    q = p & 10;   // p = 15, q = 10, r = 1
    r = r << 3;   // p = 15, q = 10, r = 8
    p = p ^ r;    // p = 7, q = 10, r = 8
    q = q >> 1;   // p = 7, q = 5, r = 8
    r = ~p;       // p = 7, q = 5, r = -8
    p = q | r;    // p = -3, q = 5, r = -8
    q = p & r;    // p = -3, q = -8, r = -8
    r = r ^ q;    // p = -3, q = -8, r = 0
    return 0;
}
*/

// Zadanie 5
/*
int main() {
    float a = 10.5;  // a = 10.5
    float b = 2.0;   // a = 10.5, b = 2.0
    float c = 0.5;   // a = 10.5, b = 2.0, c = 0.5
    a = a / b;       // a = 5.25, b = 2.0, c = 0.5
    b = b * 3;       // a = 5.25, b = 6.0, c = 0.5
    c = a + b;       // a = 5.25, b = 6.0, c = 11.25
    a = c - a;       // a = 6.0, b = 6.0, c = 11.25
    b = b / 2;       // a = 6.0, b = 3.0, c = 11.25
    c = a * b;       // a = 6.0, b = 3.0, c = 18.0
    a = c + 0.5;     // a = 18.5, b = 3.0, c = 18.0
    b = a - c;       // a = 18.5, b = 0.5, c = 18.0
    c = a / b;       // a = 18.5, b = 0.5, c = 37.0
    return 0;
}
*/

// Zadanie 6
/*
int main() {
    int m = 20;   // m = 20
    int n = 4;    // m = 20, n = 4
    int k = 2;    // m = 20, n = 4, k = 2
    m += n;       // m = 24, n = 4, k = 2
    n -= k;       // m = 24, n = 2, k = 2
    k *= 3;       // m = 24, n = 2, k = 6
    m /= 2;       // m = 12, n = 2, k = 6
    n += m;       // m = 12, n = 14, k = 6
    k %= n;       // m = 12, n = 14, k = 6
    m <<= 1;      // m = 24, n = 14, k = 6
    n >>= 2;      // m = 24, n = 3, k = 6
    k ^= m;       // m = 24, n = 3, k = 30
    return 0;
}

*/
