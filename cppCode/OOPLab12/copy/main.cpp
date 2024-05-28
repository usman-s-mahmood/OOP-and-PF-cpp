#include <iostream>
#include "header.cpp"
using namespace std;
int main()
{
    char user[] = "rehmantariq", date[] = "12-1-2020";
    int postID = 5;
    char content[] = "This is my first post";
    char bio[] = "Nothing about me"; int followers = 5;
    User usr(user, date);
    usr.displayUserInfo();
    Profile prf(user, date, bio, followers);
    prf.displayProfileInfo();
    Post pst(user, date, postID, content);
    pst.displayPostInfo();
    return 0;
}