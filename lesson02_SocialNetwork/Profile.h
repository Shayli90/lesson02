#ifndef PROFILE_H
#define PROFILE_H
#pragma once
#include <string>
#include <iostream>
#include "Page.h"
#include "UserList.h"

class Profile
{
private:

	User _user;
	Page _page;
	UserList _lst;


public:

	void init(User owner);

	void clear();

	User getOwner() const;

	void setStatus(std::string new_status);

	void addPostToProfilePage(std::string post);

	void addFriend(User friend_to_add);

	std::string getPage();

	std::string getFriends() const;

	std::string getFriendsWithSameNameLength() const;


};





#endif // PROFILE_H