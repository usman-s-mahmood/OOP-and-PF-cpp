#include <iostream>
#include "header.h"
using namespace std;
char unk[] = "Unknown";
char defaultDate[] = "8/01/2024";
User::User()
{
    username = unk;
    dateJoined = defaultDate;
}

User::User(const char *username, const char *dateJoined)
{
    this->username = username;
    this->dateJoined = dateJoined;
}
void User::setVals(const char *username, const char *dateJoined)
{
    this->username = username;
    this->dateJoined = dateJoined;
}
void User::displayUserInfo()
{
    cout<<"User info is: "<<endl
        <<"Username: "<<username<<endl
        <<"Date Joined: "<<dateJoined
    <<endl;
}
char defaultBio[] = "No Bio available";
Profile::Profile()
{
    bio = defaultBio;
    followers = 0;
}
Profile::Profile(const char *username, const char *dateJoined, const char *bio, int followers)
{
    this->bio = bio;
    this->followers = followers;
    User::setVals(username, dateJoined);
}
void Profile::setVals(const char *username, const char *dateJoined, const char *bio, int followers)
{
    this->bio = bio;
    this->followers = followers;
    User::setVals(username, dateJoined);
}
void Profile::displayProfileInfo()
{
    User::displayUserInfo();
    cout<<"Profile details are: "<<endl
        <<"Bio is: "<<bio<<endl
        <<"Followers are: "<<followers
    <<endl;
}
char defaultContent[] = "No content available";
Post::Post()
{
    postID = 0;
    content = defaultContent;
}
Post::Post(const char *username, const char *dateJoined, int postID, const char *content)
{
    User::setVals(username, dateJoined);
    this->postID = postID;
    this->content = content;
}
void Post::setVals(const char *username, const char *dateJoined, int postID, const char *content)
{
    User::setVals(username, dateJoined);
    this->postID = postID;
    this->content = content;
}
void Post::displayPostInfo()
{
    User::displayUserInfo();
    cout<<"Post Details are: "<<endl
        <<"Post ID: "<<postID<<endl
        <<"Post Content: "<<content
    <<endl;
}