#include <cstdio>
int main() {
	int n;
	scanf("%d", &n);
	int a[n+2];//���n�����ھ��� 
	int dis[n+2] = {0}, sum = 0;//dis[i]��exit1�� i��˳ʱ����һ��exit�ľ��� 
	for(int i = 1; i <= n; i++) {//��1�ſ�ʼ�棬������ѯ���� 
		scanf("%d", &a[i]);
		sum += a[i];
		dis[i] += sum; 
	}
	int m;
	scanf("%d", &m);//m����������
	int ans[m];
	for(int i = 0; i < m; i++) {
		int e1, e2;
		scanf("%d %d", &e1, &e2);
		int d1 = 0, d2 = 0;//�������һ���ջ���������������ľ��� 
		if(e1 > e2){//��֤e1 <= e2 
			int t = e1;
			e1 = e2;
			e2 = t;
		}
		d1 = dis[e2 - 1] - dis[e1 - 1];//˳ʱ����� 
		d2 = sum - d1; //������� 
		ans[i] = (d1 < d2) ? d1 : d2;//ȡ�϶� 
		printf("%d\n", ans[i]); 
	} 
	return 0;
} 
