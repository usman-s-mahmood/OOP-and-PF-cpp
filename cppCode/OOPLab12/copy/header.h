class User
{
    const char *user;
    const char *date;
    public:
        User();
        User(const char *user, const char *date);
        void setVals(const char *user, const char *date);
        void displayUserInfo();
        ~User(){}
};

class Profile: public User
{
    const char *bio;
    int followers;
    public:
    Profile();
    Profile(const char *user, const char *date, const char *bio, int followers);
    void setVals(const char *user, const char *date, const char *bio, int followers);
    void displayProfileInfo();
    ~Profile(){}
};

class Post: private User
{
    int postID;
    const char *content;
    public:
        Post();
        Post(const char *user, const char *date, int postID, const char *content);
        void setVals(const char *user, const char *date, int postID, const char *content);
        void displayPostInfo();
        ~Post(){}
};
