class Employee
{
    const char *name;
    public:
        Employee();
        Employee(const char *name);
        void setVals(const char *name);
        void display();
        ~Employee(){}
};

class Manager: public Employee
{
    const char *department;
    public:
        Manager();
        Manager(const char *name, const char *department);
        void setVals(const char *name, const char *department);
        void display();
        ~Manager(){}
};

class Engineer: private Employee
{
    const char *project;
    public:
        Engineer();
        Engineer(const char *name, const char *project);
        void setVals(const char *name, const char *project);
        void display();
        ~Engineer(){}
};
class Clerk: protected Employee
{
    const char *task;
    public:
        Clerk();
        Clerk(const char *name, const char *task);
        void setVals(const char *name, const char *task);
        void display();
        ~Clerk(){}
};