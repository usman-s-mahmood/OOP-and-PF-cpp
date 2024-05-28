class Shape
{
    const char *color;
    public:
        Shape();
        Shape(const char *color);
        void setVals(const char *color);
        void display();
        ~Shape(){}
};

class Circle: public Shape
{
    double radius;
    public:
        Circle();
        Circle(const char *color, double radius);
        void setVals(const char *color, double radius);
        void display();
        ~Circle(){}
};

class Rectangle: private Shape
{
    double length, width;
    public:
        Rectangle();
        Rectangle(const char *color, double length, double width);
        void setVals(const char *color, double length, double width);
        void display();
        ~Rectangle(){}
};