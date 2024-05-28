class Processor
{
    const char *brand;
    double speed;
    public:
        Processor();
        Processor(const char *brand, double speed);
        void setVals(const char *brand, double speed);
        void display();
        ~Processor(){}
};

class Computer
{
    Processor processor;
    const char *model;
    public:
        Computer();
        Computer(const char *brand, double speed, const char *model);
        void setVals(const char *brand, double speed, const char *model);
        void display();
        ~Computer(){}
};