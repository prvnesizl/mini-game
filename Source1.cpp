#include<iostream>
#include <conio>
using namespace std;

int nodd(a, b, c) {
	return nod(nod(static_cast<int>(a * 100), static_cast<int>(b * 100)), static_cast<int>(c * 100));
}
int main() {
	long double m, V, mH2O;
	cin >> m >> V >> mH2O;
	long double nCO2;
	nCO2 = V / 22.4;
	long double mC;
	mC = nCO2 * 12;
	long double nH2O;
	nH2O = mH2O / 18;
	long double mH;
	mH = 2 * nH2O;
	long double mO;
	mO = m - mC - mH;
	int n
	if (mO == 0) {
		n = nod(static_cast<int>(mC * 100), static_cast<int>(mH * 100));
		cout << (mC * 100) / n << ' ' << (mH * 100) / n;
	}
	else {
		n = nodd(mC, mH, mO);
		cout << (mC * 100) / n << ' ' << (mH * 100) / n << ' ' << (mO * 100) / n;
	}
}