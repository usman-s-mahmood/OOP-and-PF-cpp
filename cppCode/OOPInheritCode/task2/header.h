class Base2
{
    public:
        Base2();
        ~Base2();
};
class Base1
{
    public:
        Base1();
        ~Base1();
};
class Derived: public Base1, public Base2
{
    public:
        Derived();
        ~Derived();
};