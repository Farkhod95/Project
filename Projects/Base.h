#include<iostream>
#include<string>
using std::string;
class Printable
{
public:
	string Text;
	virtual double getSquare() = 0;
	virtual double getPerimeter() = 0;

};
class Named :public Printable
{
public:
	
	};
class Shapes :public Printable
{
	//Statik: Shape::GetCount();
	
};

class Rect : public Named
{
private:
	double x1,x2,y1,y2;
public:
	Rect(double x1_, double y1_,double x2_,double y2_)
	{
		x1 = x1_;
		y1 = y1_;
		x2 = x2_;
		y2 = y2_;
	Text = "Rectangle - ...";
	}
	double getSquare() override
	  {
	return (x2-x1)*(y2-y1);
	  }
	double getPerimeter() override
	  {
	return (x2-x1) * 2 +(y2-y1) * 2;
	  }



};
class Circle : public Named
{
    private:
	double radius;
    public:
		Circle(double r)
		{
			radius = r;
			Text = "Circle - ...";
		}
		double getSquare() override
	{
		return radius * radius * 3.14 ;
	}
		double getPerimeter() override
	{
			return 2 * 3.14 * radius;
	}
		
};


class Square :public Named{
private:
double a;
public:
	Square(double x) 
	{
		a = x;
		Text = "Square - ...";
	}
	double getSquare() override
	{
		return a * a ;
	}
	double getPerimeter() override
	{
		return 4 * a ;
	}
	
	
};
 

std::ostream& operator << (std::ostream& os, const Square& obj) {
	os << obj.Text << '\n';
	return os;
}
std::ostream& operator << (std::ostream& os, const Circle& obj) {
	os << obj.Text << '\n';
	return os;
}
std::ostream& operator << (std::ostream& os, const Rect& obj) {
	os << obj.Text << '\n';
	return os;
}