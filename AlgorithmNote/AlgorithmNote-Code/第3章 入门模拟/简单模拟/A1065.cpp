#include <cstdio>
int main() {
	int T, cnt = 0;
	scanf("%d", &T);
	while(T--) {
		long long a, b, c, tmp;
		scanf("%lld %lld %lld", &a, &b, &c);
		tmp = a + b;//����ǿת 
		bool flag = false;
		if(a > 0 && b > 0 && tmp < 0) flag = true;//������ 
		else if(a < 0 && b < 0 && tmp >= 0) flag = false;//������ 
		else if(tmp > c) flag = true;//���� 
		else flag = false; 
		
		if(flag == true) printf("Case #%d: true\n", ++cnt);
		else printf("Case #%d: false\n", ++cnt); 
	}
	return 0;
} 
