#include <cstdio>
int main() {
	int n, cnt = 0;
	float res[2000] = {0.0};
	scanf("%d", &n);//��һ�� 
	int exp;//ָ�� 
	float cet;//coefficient��ϵ�� 
	for(int i = 0; i < n; i++) {
		scanf("%d %f", &exp, &cet);
		if(res[exp] == 0.0) cnt++;
		res[exp] += cet;
	}
	scanf("%d", &n);//�ڶ��� 
	for(int i = 0; i < n; i++) {
		scanf("%d %f", &exp, &cet);
		if(res[exp] == 0.0) cnt++;
		res[exp] += cet;
		if(res[exp] == 0.0) cnt--;//���ǵ��͵�һ������ʽ��ָͬ����Ӧ��ϵ���������� 
	}
	//��� 
	printf("%d", cnt);//��Ӻ�Ķ���ʽ������������Ӻ�Ϊ0����Բ�������ո� 
	for(int i = 1000; i >= 0; i--) {//N <= 1000 && ָ��������� 
		if(res[i] != 0.0) printf(" %d %.1f", i, res[i]);//����һλС�� 
	}
	return 0;
} 
