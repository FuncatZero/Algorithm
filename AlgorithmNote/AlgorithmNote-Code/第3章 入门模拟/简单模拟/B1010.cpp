#include <cstdio>
int main() {
	int a, b;
	int res[2003], exp[2003], cnt = 0;
	while(scanf("%d %d", &a, &b) != EOF) {
		if(b == 0)continue;//���������� 
		else {
			res[cnt] = a * b;//ϵ�� 
			exp[cnt] = b - 1;//ָ�� 
			cnt++;//��������� 
		}
	}
	if(cnt == 0)printf("0 0\n");//�޷�������� 0 0 
	for(int i = 0; i < cnt; i++) {
		if(i != cnt - 1) printf("%d %d ", res[i], exp[i]);
		else printf("%d %d\n", res[i], exp[i]);//һ��ĩβ�������ո� 
	}
	return 0;
}
