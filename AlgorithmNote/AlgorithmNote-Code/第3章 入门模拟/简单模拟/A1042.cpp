#include <cstdio>
int main() {
	int T;//ϴ�ƴ��� 
	scanf("%d", &T);
	int a[54],ans[54];
	for(int i = 0; i < 54; i++) {
		scanf("%d", &a[i]);//���ϴ��˳����򣬴�0��ʼ 
	}
	//ϴ�� 
	for(int i = 0; i < 54; i++) {//54���� 
		int k = i;
		for(int j = 0; j < T; j++) {//�Ե�i����ϴT�� 
			k = a[k] - 1;//����λ���±꣬�����0��ʼ�����һ 
		}
		ans[k] = i;//��i������������ 
	}
	for(int i = 0; i < 54; i++) {
		char tc;
		switch(ans[i] / 13) {
			case 0: tc = 'S'; break;
			case 1: tc = 'H'; break;
			case 2: tc = 'C'; break;
			case 3: tc = 'D'; break;
			case 4: tc = 'J'; break;//��С����© 
		}
		if(i != 53)	printf("%c%d ", tc, ans[i] % 13 + 1);//һ�е�ĩβ���ܴ�����ո� 
		else printf("%c%d", tc, ans[i] % 13 + 1);//�����0��ʼ�����1 
	} 
	return 0;
} 
