#include <cstdio>
#include <algorithm> 
using namespace std;
int main() {
	int n, a;
	scanf("%d", &n);
	int cnt[5] = {0};//����A1~A5����ĸ��� 
	int ans[5] = {0};//�𰸷��� 
	ans[4] = -1;//���ڼ������ֵ 
	for(int i = 0; i < n; i++) {
		scanf("%d", &a);
		switch(a % 5) {//����ģ5������Ϊ5�� 
			case 0: 
				if(a % 2 == 0){
					ans[0] += a;
					cnt[0]++;
				}
				break;
			case 1:
				cnt[1]++;
				if(cnt[1] % 2 == 0)a = -a;//������� 
				ans[1] += a;
				break;
			case 2:
				cnt[2]++;
				break;
			case 3:
				cnt[3]++;
				ans[3] += a;
				break;
			case 4:
				cnt[4]++;
				ans[4] = max(ans[4], a);//���ֵ 
				break;	
		}
	}
	ans[2] = cnt[2];//�洢�� 
	//��� 
	for(int i = 0; i < 4; i++){
		if(cnt[i] == 0)	printf("N ");//������������N 
		else {
			if(i == 3) printf("%.1f ", (float)ans[i] / cnt[i]);//ƽ��������һλС�� 
			else printf("%d ", ans[i]);
		}
	}
	if(cnt[4] == 0)printf("N");//���һλ���޿ո� 
	else printf("%d", ans[4]);
	
	return 0;
} 
