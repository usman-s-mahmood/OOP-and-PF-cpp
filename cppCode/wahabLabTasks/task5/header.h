class Engine
{
    int horsePower;
    const char *fuelType;
    public:
        Engine();
        Engine(int horsePower, const char *fuelType);
        void setVals(int horsePower, const char *fuelType);
        void display();
        ~Engine(){}
};

class Car
{
    Engine engine;
    const char *model;
    public:
        Car();
        Car(const char *fuelType, int horsePower, const char *model);
        void setVals(const char *fuelType, int horsePower, const char *model);
        void display();
        ~Car(){}
};