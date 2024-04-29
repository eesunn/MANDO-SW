////#include<iostream>
////using namespace std;
////
////class Rectangle {
////public:
////	int width, height;
////	Rectangle ();
////	Rectangle (int w, int h);
////	Rectangle (int s);
////	int isSquare();
////};
////
////Rectangle::Rectangle() {
////	width = 2;
////	height = 2;
////
////}
////Rectangle::Rectangle(int s) {
////	width = height = s;
////}
////Rectangle::Rectangle(int w, int h) {
////	width = w; height = h;
////}
////
////int Rectangle::isSquare() {
////	if (width == height) return true;
////	else return false;
////}
////
////int main() {
////	Rectangle rect1;
////	Rectangle rect2(3);
////	Rectangle rect3(2, 3);
////	if (rect1.isSquare()) cout << "rect1은 정사각형 입니다." << endl;
////	if (rect2.isSquare())cout << "rect2는 정사각형 입니다." << endl;
////	if (rect3.isSquare())cout << "rect3는 정사각형 입니다." << endl;
////
////}
//
//
//
////#include<iostream>
////using namespace std;
////
////class Circle {
////public:
////	int radius;
////	Circle();
////	Circle(int r);
////	double getArea();
////};
////
////Circle::Circle() {
////	radius = 1;
////	cout << "반지름이 " << radius << "인 원생성" << endl;
////}
////
////Circle::Circle(int r) {
////	radius = r;
////	cout << "반지름이 " << radius << "인 원생성" << endl;
////}
////
////double Circle::getArea() {
////	return 3.14 * radius * radius;
////}
////
////int main() {
////	Circle donut;
////	double area = donut.getArea();
////	cout << "donut의 면적은" << area << endl;
////	Circle pizza(20);
////	area = pizza.getArea();
////	cout << "pizza의 면적은 " << area << endl;
////}
//
//
////#include<iostream>
////using namespace std;
////
////class Circle {
////public:
////	int radius;
////	Circle();
////	Circle(int r);
////	double getArea();
////};
////
////Circle::Circle() : Circle(1){}
////Circle::Circle(int r) {
////	radius = r;
////	cout << "반지름이 " << radius << " 인 원 생성" << endl;
////}
////
////double Circle::getArea() {
////	return 3.14 * radius * radius;
////}
////
////int main() {
////	Circle donut;
////	double area = donut.getArea();
////	cout << "donut의 면적은 " <<area << endl;
////	Circle pizza(30);
////	area = pizza.getArea();
////	cout << "pizza의 면적은 " <<area<< endl;
////}
//
//
//
////#include<iostream>
////using namespace std;
////class Point {
////	int x, y;
////public:
////	Point();
////	Point(int a, int b);
////	void show() {
////		cout << "(" << x << "," << y << ")" << endl;
////	}
////};
////Point::Point() : Point(0,0){}
////Point::Point(int a, int b) {
////	x = a; y = b;
////}
////int main() {
////	Point origin;
////	Point target(10, 20);
////	origin.show();
////	target.show();
////}
//
//
////#include<iostream>
////using namespace std;
////
////class Rectangle {
////public:
////	int width, height;
////	int isSquare();
////	Rectangle();
////	Rectangle(int w, int h);
////	Rectangle(int s);
////
////};
////
////Rectangle::Rectangle() {
////	width = height = 2;
////}
////Rectangle::Rectangle(int w, int h) {
////	width = w; height = h;
////}
////Rectangle::Rectangle(int s) {
////	width = height = s;
////}
////
////int Rectangle::isSquare() {
////	if (width == height) return true;
////	else return false;
////
////}
////int main() {
////	Rectangle rect1;
////	Rectangle rect2(2,3);
////	Rectangle rect3(5);
////	
////	if(rect1.isSquare()) cout << "rect1은 정사각형 입니다." << endl;
////	if(rect2.isSquare()) cout << "rect2는 정사각형 입니다." << endl;
////	if(rect3.isSquare()) cout << "rect3는 정사각형 입니다." << endl;
////}
////
//
//
////#include<iostream>
////using namespace std;
////
////class Circle {
////public:
////	int radius;
////	Circle();
////	Circle(int r);
////	~Circle();
////	double getArea();
////};
////
////Circle::Circle() {
////	radius = 1;
////	cout << "반지름이 " << radius << " 인 원 생성" << endl;
////}
////Circle::Circle(int r) {
////	radius = r;
////	cout << "반지름이 " << radius << " 인 원 생성" << endl;
////
////}
////
////Circle::~Circle() {
////	cout << "반지름 " << radius << " 인 원 소멸" << endl;
////}
////
////double Circle::getArea() {
////	return 3.14 * radius * radius;
////}
////
////int main() {
////	Circle donut;
////	Circle pizza(32);
////	return 0;
////}
////#include<iostream>
////using namespace std;
////
////struct StructCircle {
////private:
////	int radius;
////public:
////	StructCircle(int r) { radius = r; }
////	double getArea();
////};
////
////double StructCircle::getArea() {
////	return 3.14 * radius * radius;
////}
////
////int main() {
////	StructCircle waffle(3);
////	cout << "면적은 " << waffle.getArea();
////}
//
//
//#include<iostream>
//using namespace std;
//
//class Exp {
//public:
//	int i,j,n;
//
//	int getValue();
//	int getBase();
//	int getExp();
//	bool equals(Exp b);
//	Exp (int x, int y);
//	Exp (int z);
//	Exp ();
//};
//int Exp::getValue() {
//	return i;
//}
//int Exp::getBase() {
//	return j;
//}
//int Exp::getExp() {
//	return n;
//}
//
//bool Exp::equals(Exp b) {
//	if (Exp b == Exp a) return true;
//}
//
//
//
//
//
//
//
//
//
//
//


//
//
//#include<iostream>
//using namespace std;
//
//class House {
//	int numOfRooms;
//	int size;
//public:
//	House(int n, int s);
//	~House();
//
//};
//House::House(int n, int s) {
//	numOfRooms = n; size = s;
//	cout << "생성 - numOfRooms= " << n << "size=" << s << endl;
//
//}
//House::~House() {
//	cout << "소멸 - numOfRooms = " << numOfRooms << "size = " << size << endl;
//}
//
//void f() {
//	House a(2, 20);
//}
//House b(3, 30), c(4, 40);
//int main() {
//	f();
//	House d(5, 50);
//}

//#include<iostream>
//using namespace std;
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;
//	Circle pizza(30);
//	cout << donut.getArea() << endl;
//	Circle* p;
//	p = &donut;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//
//	p = &pizza;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//}










//#include<iostream>
//using namespace std;
//
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int r) { radius = r; }
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle circleArray[3];
//
//	circleArray[0].setRadius(10);
//	circleArray[1].setRadius(20);
//	circleArray[2].setRadius(30);
//
//	for (int i = 0; i < 3; i++)
//		cout << "Circle" << i << "의 면적은" << circleArray[i].getArea() << endl;
//
//	Circle* p;
//	p = circleArray;
//	for (int i = 0; i < 3; i++) {
//		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
//		p++;
//	
//	}
//}
//#include<iostream>
//using namespace std;
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int r) { radius = r; }
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle circleArray[3] = { Circle(10),Circle(20),Circle() };
//
//	for (int i = 0; i < 3; i++)
//		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
////}
//
//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int r) { radius = r; }
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//int main() {
//	Circle circles[2][3];
//
//	circles[0][0].setRadius(1);
//	circles[0][1].setRadius(2);
//	circles[0][2].setRadius(3);
//	circles[1][0].setRadius(4);
//	circles[1][1].setRadius(5);
//	circles[1][2].setRadius(6);
//	for(int i=0;i<2;i++)
//		for (int j = 0; j < 3; j++) {
//			cout << "Circle ["<< i << "," << j << "] 의 면적은 ";
//			cout << circles[i][j].getArea() << endl;
//
//		}
//}