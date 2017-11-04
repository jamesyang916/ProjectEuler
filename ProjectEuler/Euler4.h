#pragma once
#include <cmath>

int reverseInt(int n) {
	int reversed = 0;
	while (n > 0) {
		reversed = 10 * reversed + n % 10;
		n /= 10;
	}
	return reversed;
}
bool checkPalindrome(int n) {
	return n == reverseInt(n);
}

int Euler4() {
	int largestPalindrome = 0;
	int x = 999;
	int y, dy;
	while (x >= 100) {
		if (x % 11 == 0) {
			y = 999;
			dy = 1;
		}
		else {
			y = 990;
			dy = 11;
		}
		while (y >= x) {
			if (x*y <= largestPalindrome) {
				break;
			}
			if (checkPalindrome(x*y)) {
				largestPalindrome = x*y;
			}
			y -= dy;
		}
		--x;
	}
	
	return largestPalindrome;
}
