class Vehicle
{
    const char *brand;
    const char *model;
    public:
        Vehicle();
        Vehicle(const char *brand, const char *model);
        void setVals(const char *brand, const char *model);
        virtual void displayInfo();
        ~Vehicle(){}
};

class Car: public Vehicle
{
    int numDoors;
    public:
        Car();
        Car(const char *brand, const char *model, int numDoors);
        void setVals(const char *brand, const char *model, int numDoors);
        void displayInfo() override;
        ~Car(){}
};

class Motorcycle: public Vehicle
{
    int numWheels;
    public:
        Motorcycle();
        Motorcycle(const char *brand, const char *model, int numWheels);
        void setVals(const char *brand, const char *model, int numWheels);
        void displayInfo() override;
        ~Motorcycle(){}
};

class Truck: public Vehicle
{
    double cargoCapacity;
    public:
        Truck();
        Truck(const char *brand, const char *model, double cargoCapacity);
        void setVals(const char *brand, const char *model, double cargoCapacity);
        void displayInfo() override;
};

class RentalAgency
{
    Vehicle *vehicles = new Vehicle[3];
    public:
        RentalAgency(Vehicle *vehicles);
        void addVehicle(Vehicle *vehicles);
        void displayRentalInfo();
        ~RentalAgency()
        {
            delete [] vehicles;
        }
};