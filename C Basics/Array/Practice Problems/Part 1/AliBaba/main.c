#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {

    long long int a, b, c, d;
    printf("Enter 4 numbers: ");
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

    if (a + (b + c) == d) {
        printf("YES");
    }
    else if ((a + b) + c == d) {
        printf("YES");
    }
    else if (a + (b - c) == d) {
        printf("YES");
    }
    else if ((a + b) - c == d) {
        printf("YES");
    }
    else if (a + (b * c) == d) {
        printf("YES");
    }
    else if ((a + b) * c == d) {
        printf("YES");
    }
    else if (a - (b - c) == d) {
        printf("YES");
    }
    else if ((a - b) - c == d) {
        printf("YES");
    }
    else if (a - (b + c) == d) {
        printf("YES");
    }
    else if ((a - b) + c == d) {
        printf("YES");
    }
    else if (a - (b * c) == d) {
        printf("YES");
    }
    else if ((a - b) * c == d) {
        printf("YES");
    }
    else if (a * (b * c) == d) {
        printf("YES");
    }
    else if ((a * b) * c == d) {
        printf("YES");
    }
    else if (a * (b + c) == d) {
        printf("YES");
    }
    else if ((a * b) + c == d) {
        printf("YES");
    }
    else if (a * (b - c) == d) {
        printf("YES");
    }
    else if ((a * b) - c == d) {
        printf("YES");
    }
    else {
        printf("NO");
    }
	
	return 0;
}