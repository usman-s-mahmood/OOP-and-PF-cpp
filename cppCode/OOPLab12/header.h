class User
{
    const char *username;
    const char *dateJoined;
    public:
        User();
        User(const char *username, const char *dateJoined);
        void setVals(const char *username, const char *dateJoined);
        void displayUserInfo();
        ~User(){}
};

class Profile: public User
{
    const char *bio;
    int followers;
    public:
    Profile();
    Profile(const char *username, const char *dateJoined, const char *bio, int followers);
    void setVals(const char *username, const char *dateJoined, const char *bio, int followers);
    void displayProfileInfo();
    ~Profile(){}
};

class Post: private User
{
    int postID;
    const char *content;
    public:
        Post();
        Post(const char *username, const char *dateJoined, int postID, const char *content);
        void setVals(const char *username, const char *dateJoined, int postID, const char *content);
        void displayPostInfo();
        ~Post(){}
};
