#include <cstdio>
int main() {
	int n;
	scanf("%d", &n);
	int a[n];//���n�����ھ��� 
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int m;
	scanf("%d", &m);//m����������
	int ans[m];
	for(int i = 0; i < m; i++) {
		int e1, e2;
		scanf("%d %d", &e1, &e2);
		int d1 = 0, d2 = 0;//�������һ���ջ���������������ľ��� 
		if(e1 != e2) {//ͬһ��λ��Ϊ0 
			int j = e1 - 1;
			do {
				d1 += a[j];
				j++;
				j %= n;
			}while(j != e2 - 1);
			
			j = e2 - 1;
			do {
				d2 += a[j];
				j++;
				j %= n;
			}while(j != e1 - 1);
		} 
		ans[i] = (d1 < d2) ? d1 : d2;//ȡ�϶� 
		printf("%d\n", ans[i]); 
	} 
	return 0;
} 
