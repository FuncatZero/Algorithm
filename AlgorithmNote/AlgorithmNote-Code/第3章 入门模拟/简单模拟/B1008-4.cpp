#include <cstdio> 
//���Լ�� 
int gcd(int a, int b) {
	if(b == 0) return a;
	else return gcd(b, a % b);
}
int main() {
	int N, n, m;
	scanf("%d %d", &n, &m);
	N = n;//���ʹ�� 
	int a[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	m %= n; //�迼��n < m
	if(m != 0) {//m==0�������жϣ����򸡵������� 
        int d = gcd(n, m);
		for(int i = 0; i < d; i++) {//������Ҫ��������Ŀ
			int w = n / d;//ÿ���ڵ�Ԫ�ظ��� 
				int pre, pcur = a[i];
				int j = i, k;
				while(w--) {
					k = (j + m) % n;
					pre = pcur;
					pcur = a[k];
					a[k] = pre;
					j = k;
				}
		} 
    }    
	for(int i = 0; i < n - 1; i++) {
		printf("%d ", a[i]);
	}
	printf("%d", a[n-1]);
	
	return 0;
} 
