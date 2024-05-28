#include <iostream>
#include "header.h"
using namespace std;
char unk[] = "Unknown";
char defaultDate[] = "8-01-2024";
User::User()
{
    user = unk;
    date = defaultDate;
}

User::User(const char *user, const char *date)
{
    this->user = user;
    this->date = date;
}
void User::setVals(const char *user, const char *date)
{
    this->user = user;
    this->date = date;
}
void User::displayUserInfo()
{
    cout<<"user: "<<user<<endl<<"Date Joined: "<<date<<endl;
}
char defaultBio[] = "No Bio available";
Profile::Profile()
{
    bio = defaultBio;
    followers = 0;
}
Profile::Profile(const char *user, const char *date, const char *bio, int followers)
{
    this->bio = bio;
    this->followers = followers;
    User::setVals(user, date);
}
void Profile::setVals(const char *user, const char *date, const char *bio, int followers)
{
    this->bio = bio;
    this->followers = followers;
    User::setVals(user, date);
}
void Profile::displayProfileInfo()
{
    User::displayUserInfo();
    cout<<"Bio is: "<<bio<<endl<<"Followers are: "<<followers<<endl;
}
char defaultContent[] = "No content available";
Post::Post()
{
    postID = 0;
    content = defaultContent;
}
Post::Post(const char *user, const char *date, int postID, const char *content)
{
    User::setVals(user, date);
    this->postID = postID;
    this->content = content;
}
void Post::setVals(const char *user, const char *date, int postID, const char *content)
{
    User::setVals(user, date);
    this->postID = postID;
    this->content = content;
}
void Post::displayPostInfo()
{
    User::displayUserInfo();
    cout<<"Post ID: "<<postID<<endl<<"Post Content: "<<content<<endl;
}