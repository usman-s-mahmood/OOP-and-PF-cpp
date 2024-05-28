class Department
{
    const char *name;
    public:
        Department();
        Department(const char *name);
        void setVals(const char *name);
        void display();
        ~Department(){}
};

class Student
{
    Department *department = new Department;
    const char *name;
    int id;
    public:
        Student();
        Student(const char *depName, const char *name, int id);
        void setVals(const char *depName, const char *name, int id);
        void display();
        ~Student()
        {
            delete department;
        }

};