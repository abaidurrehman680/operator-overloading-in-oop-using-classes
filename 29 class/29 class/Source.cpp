#include<iostream>
using namespace std;
class cube {
private:
	double lenght;
	double width;
	double height;
public:
	cube() {
		lenght = 0;
		width = 0;
		height = 0;
	}
	cube(double a, double b, double c) {
		lenght = a;
		width = b;
		height = c;
	}
	void display() {
		cout <<"lenght= "<< lenght << endl;
		cout <<"width= " <<width << endl;
		cout <<"height= " <<height<< endl;
	}
	cube operator + (cube& cu) {
		cube temp;
		temp.lenght =lenght + cu.lenght;
		temp.width =width + cu.width;
		temp.height = height + cu.height;
		return temp;
	}
	cube operator - (cube& cu) {
		cube temp;
		lenght = lenght - cu.lenght;
		width = width - cu.width;
		temp.height = height - cu.height;
		return temp;
	}
	cube operator * (cube& cu) {
		cube temp;
		temp.lenght = lenght * cu.lenght;
		temp.width = width * cu.width;
		temp.height = height * cu.height;
		return temp;
	}
	cube operator / (cube& cu) {
		cube temp;
		temp.lenght = lenght / cu.lenght;
		temp.width = width / cu.width;
		temp.height = height / cu.height;
		return temp;
	}
	void operator = (cube&cu) {
		cube temp;
		lenght = cu.lenght;
		width = cu.width;
		height = cu.height;
	}
	bool operator ==(cube&cu) {
		cube temp;
		if (lenght ==cu.lenght&&width==cu.width&&height==cu.height ) {
			return 1;
		}
		else {
			return 0;
		}

	}
};
int main() {
	cube c1(10.5, 20.4, 30.6), c2(15.4, 25.7, 35.8);
	cube result1=c1+c2;
	cube result2 = c1 * c2;
	cube result3 = c1 / c2;
	cube result4 = c1 - c2;
	bool res;
	res=c1 == c2;\
	c1 = c2;
	cout << "\nsum\n" << endl;
	result1.display();
	cout << "\nproduct\n" << endl;
	result2.display();
	cout << "\ndivision\n" << endl;
	result3.display();
	cout << "\nsubtraction\n" << endl;
	result4.display();
	cout << "\ncomparing\n" << endl;
	cout << res;

	return 0;
}