class Employee
{
    int id;
    const char *name;
    double salary;
    public:
        Employee();
        Employee(int id, const char *name, double salary);
        void setVals(int id, const char *name, double salary);
        void display();
        ~Employee(){}
};

class Department
{
    const char *name;
    Employee manager;
    public:
        Department();
        Department(const char *empName, int id, double salary, const char *name);
        void setVals(const char *empName, int id, double salary, const char *name);
        void display();
        ~Department(){}
};