class GrandFather
{
    int pvtG;
    public:
        GrandFather();
        void setValsG(int pvtG, int prtG);
        void getValsG();
        ~GrandFather();
    protected:
        int prtG;
};
class Parent: public GrandFather
{
    int pvtP;
    public:
        Parent();
        void setValsP(int pvtP, int prtP);
        void getValsP();
        ~Parent();
    protected:
        int prtP;
};
class Child: public Parent, public GrandFather
{
    int pvtC;
    public:
        Child();
        void setValsC(int pvtC, int prtC);
        void getValsC();
        ~Child();
    protected:
        int prtC;
};