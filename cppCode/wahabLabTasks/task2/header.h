class Author
{
    const char *name;
    const char *email;
    int birthYear;
    public:
        Author();
        Author(const char *name, const char *email, int birthYear);
        void setVals(const char *name, const char *email, int birthYearo);
        void display();
        ~Author(){}
};

class Book
{
    Author author;
    const char *title;
    double price;
    public:
        Book();
        Book(const char *name, const char *email, int birthYear, const char *title, double price);
        void setVals(const char *name, const char *email, int birthYear, const char *title, double price);
        void display();
        ~Book(){}
};