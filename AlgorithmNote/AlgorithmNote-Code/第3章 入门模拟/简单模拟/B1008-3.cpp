#include <cstdio> 
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
		if(n % m != 0) {//������:  
		int i = 0, k, pre, pcur = a[0];
			while(N--) {
				k = (i + m) % n;//i����λ�õ��±� 
				pre = pcur;
				pcur = a[k];
				a[k] = pre;
				i = k; 
			}
		}
		else {//���� 
			for(int i = 0; i < m; i++) {//m���ֻ� 
				int w = n / m;//ÿ���ڵ�Ԫ�ظ��� 
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
	}


	for(int i = 0; i < n - 1; i++) {
		printf("%d ", a[i]);
	}
	printf("%d", a[n-1]);
	
	return 0;
} 
