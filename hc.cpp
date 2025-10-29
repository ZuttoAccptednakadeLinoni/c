#include<bits/stdc++.h>
using namespace std;

class Shape {
	public:
		Shape() {

		}
		virtual ~Shape() {

		}
		virtual float area(){
		}
};

class Circle:public Shape {
	public:
		Circle(float r1) {
			r=r1;
		}
		float area() {
			return r*r*3;
		}
		virtual ~Circle() {

		}
	private:
		float r;
};
class Rectangle:public Shape {
	private:
		int w;
		int h;
	public:
		Rectangle(int w1,int h1) {
			w=w1;
			h=h1;
		}
		float area() {
			return w*h;
		}
		virtual ~Rectangle() {

		}
};
int main() {

	Shape *p,*q;
	int w, h;
	cin >> w >> h;   //输入矩形的长宽
	p = new Rectangle(w,h);
	cout<<"Area of rectangle:"<<p->area()<<endl;

	int r;   //输入圆的半径
	cin >> r;
	q = new Circle(r);  //半径为r的圆
	cout<<"Area of circle:"<<q->area()<<endl;

	return 0;

}
