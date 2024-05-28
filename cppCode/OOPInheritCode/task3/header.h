class A
{
    public:
        A();
        void setA(int aVar);
        void getA();
        ~A();
    protected:
        int aVar;
};
class B
{
    public:
        B();
        void setB(int bVar);
        void getB();
        ~B();
    protected:
        int bVar;
};
class C: public A, public B
{
    public:
        C();
        void setC(int cVar);
        void getC();
        ~C();
    protected:
        int cVar;
};
class D: public C
{
    public:
        D();
        void setD(int dVar);
        void getD();
        ~D();
    protected:
        int dVar;
};
class E: public D
{
    public:
        E();
        void setE(int eVar);
        void getE();
        ~E();
    protected:
        int eVar;
};