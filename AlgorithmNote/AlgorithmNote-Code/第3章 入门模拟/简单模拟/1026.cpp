#include <cstdio> 
int main() {
	int C1, C2, CLK_TCK = 100;
	scanf("%d %d", &C1, &C2);
	int totalSec = (int)((float)(C2 - C1)/CLK_TCK + 0.5);//��������		
	int h, m, s;
	h = totalSec / 3600;//ʱ 
	totalSec %= 3600; 
//	if(h <= 10) printf("0");//���㲹0 
//	printf("%d:", h);
	
	m = totalSec / 60;//�� 
	totalSec %= 60;
//	if(m <= 10) printf("0");
//	printf("%d:", m);
	
	s = totalSec;//�� 
//	if(s <= 10) printf("0");
//	printf("%d", s);
	
	printf("%02d:%02d:%02d\n", h, m, s);
	return 0;
} 
