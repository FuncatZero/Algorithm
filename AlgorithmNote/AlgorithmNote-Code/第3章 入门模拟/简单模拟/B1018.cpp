#include <cstdio>
#include <map>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	char ca, cb;//�������� 
	int win, draw, fail;//�׵�ʤƽ������ 
	win = draw = fail = 0; 
	map<char, int> mp[2];//��¼����ʤ�������Ʋ��� 
	for(int i = 0; i < 2; i++) {
		mp[i]['J'] = 0;
		mp[i]['C'] = 0;
		mp[i]['B'] = 0;
	}
	for(int i = 0; i < n; i++) {
		getchar();//���ջس�,����scanf����ܻس� 
		scanf("%c %c", &ca, &cb);
		if(ca == cb)	draw++;//ƽ�� 
		else {//ʤ���� 
			switch(ca){//������ 
				case 'J'://���� 
					if(cb == 'B') {//��Ӯ 
						win++;
						mp[0]['J']++;
					}
					else {//���� 
						fail++;
						mp[1]['C']++;
					}
					break;
				case 'C'://���� 
					if(cb == 'J') {
						win++;
						mp[0]['C']++;
					}
					else {
						fail++;
						mp[1]['B']++;
					}
					break;
				case 'B'://�� 
					if(cb == 'C') {
						win++;
						mp[0]['B']++;
					}
					else {
						fail++;
						mp[1]['J']++;
					}
					break;
			}
		} 
	}
	
	//���ʤ�������������ƣ����ڶ��������ֵ�����С 
	ca = 'B';
	if(mp[0][ca] < mp[0]['C']) ca = 'C';
	if(mp[0][ca] < mp[0]['J']) ca = 'J';
	
	cb = 'B';
	if(mp[1][cb] < mp[1]['C']) cb = 'C';
	if(mp[1][cb] < mp[1]['J']) cb = 'J';
	
	printf("%d %d %d\n", win, draw, fail);
	printf("%d %d %d\n", fail, draw, win);
	printf("%c %c\n", ca, cb); 
	return 0;
} 
