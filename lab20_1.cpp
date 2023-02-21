#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a, Rect b){
	Rect R3y1,R3y2,R3x1,R3x2;
	double wide,hight,sum;
	if(a.y-a.h < b.y-b.h) R3y2.y = b.y-b.h;
	else  R3y2.y = a.y-a.h;
	if(a.y > b.y) R3y1.y = b.y;
	else R3y1.y = a.y;
	if(a.x > b.x) R3x1.x = a.x;
	else R3x1.x = b.x;
	if(a.x+a.w < b.x+b.w) R3x2.x = a.x+a.w;
	else R3x2.x = b.x+b.w;
	if(R3x2.x - R3x1.x < 0) return 0;
	
	hight = abs(R3y2.y - R3y1.y);
	wide = R3x2.x - R3x1.x;
	sum = hight * wide;
	return sum;

	



}

int main() {
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};
	cout << overlap(R1,R2);
	return 0;
}
