#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include<sstream>
//#include <stringstream>
using namespace std;
struct pixel { // ���ص�
	int r,g,b;
//	pixel(int _r, int _g, int _b): r(_r), g(_g), b(_b){} // ���캯��
// ����ʹ��Ĭ�Ϲ��캯��
};
vector<vector<pixel> > img; // ͼ��
int m, n, p, q;
int main() {
	scanf("%d %d %d %d", &m, &n, &p, &q);
	getchar();
	char c_rgb[1000];
	string rgb;
	pixel tmp;
	for (int i = 0; i < m; i ++) {
		vector<pixel> a; // ��ʼ�� 
		img.push_back(a);
		for (int j = 0; j < n; j ++) {
			fgets(c_rgb, 1000, stdin);
			rgb = c_rgb;
			if (rgb.size() == 2) rgb += string(5, rgb.back()); // #a -> #aaaaaa
			else if (rgb.size() == 4) { // #abc -> #aabbcc
				string rgbTmp = "#";
				rgbTmp += string(2, rgb[1]) + string(2, rgb[2]) + string(2, rgb[3]); 
				rgb = rgbTmp;
			}
			// 16�����ַ���ת��Ϊ10������ֵ 
			tmp.r = stoi(rgb.substr(1,2), 0, 16);
			tmp.g = stoi(rgb.substr(3,2), 0, 16);
			tmp.b = stoi(rgb.substr(5,2), 0, 16);
			img[i].push_back(tmp); 
		}
//		img.push_back();
//		img.assign()
//		img.back().push_back(pixel{1,2,3});
//		img.back().push_back(pixel{3,3,3});
		for (int j = 0; j < img.back().size(); j ++) {
			printf("%d %d %d; ", img[i][j].r, img[i][j].g, img[i][j].b);
		}	
		printf("\n");	
	}
	return 0;
}

