#include <iostream>
#include "header.cpp"
using namespace std;
int main()
{
    char username[] = "Usman-Shahid", dateJoined[] = "12/1/2010";
    User obj(username, dateJoined);
    char bio[] = "I do computers and that stuff"; int followers = 5;
    Profile obj2(username, dateJoined, bio, followers);
    obj2.displayProfileInfo();
    int postID = 5;
    char content[] = "This is some content for the post";
    Post obj3(username, dateJoined, postID, content);
    obj3.displayPostInfo();
    obj.displayUserInfo();
}