#include <bits/stdc++.h>
#include "Custom header files.h"
using namespace std;
int n;
double a[10010];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    printf("average value = %.4f\n", mean(a, n));
    printf("median = %.2f\n", median(a, n));
    printf("mode = %.2f\n", mode(a, n));
    printf("variance = %.2f\n", variance(a, n));
    printf("standard_deviation = %.5f\n",standard_deviation(a,n));
    return 0;
}
