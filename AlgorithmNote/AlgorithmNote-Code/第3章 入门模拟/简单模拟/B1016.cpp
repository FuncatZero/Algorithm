#include <cstdio> 
int main() {
	int ta = 1, tb = 1;
	long long a, da, b, db, pa = 0, pb = 0;
	scanf("%lld %lld %lld %lld", &a, &da, &b, &db);
	//ö��a�е�ÿһλ 
	while(a != 0) {
		if(a % 10 == da) {
			pa += da * ta;
			ta *= 10; 
		} 
		a /= 10;
	}
	//ö��b�е�ÿһλ
	while(b != 0) {
		if(b % 10 == db) {
			pb += db * tb;
			tb *= 10;
		}
		b /= 10;
	}
	
	printf("%lld", pa + pb);
	return 0;
} 
