#include "Profile.h"

// This func initializes an object from Profile type
//input: object from User type named owner
//output: none 
void Profile::init(User owner)
{
	_user = owner;
	_page.Page::init();
	_lst.UserList::init();
}

// This function clear the memory 
//input:
//output:
void Profile::clear()
{
	_user.User::clear();
	_page.Page::clearPage();
	_lst.UserList::clear();
}

// This function 
//input:
//output:
User Profile::getOwner() const
{
	return _user;
}

// This function 
//input:
//output:
void Profile::setStatus(std::string new_status)
{
	_page.Page::setStatus(new_status);

}

// This function 
//input:
//output:
void Profile::addPostToProfilePage(std::string post)
{
	_page.Page::addLineToPosts(post);

}

// This function 
//input:
//output:
void Profile::addFriend(User friend_to_add)
{
	_lst.UserList::add(friend_to_add);
}

// This function 
//input:
//output:
std::string Profile::getPage()
{
	std::string totalPage = "Status " + _page.Page::getStatus() + "*******************\n*******************\n" + _page.Page::getPosts();
	return totalPage;
}

// This function 
//input:
//output:
std::string Profile::getFriends() const
{
	std::string friends_ofUser = "";
	UserNode* curr = _lst.get_first();
	while (curr->get_next() != nullptr)
	{
		friends_ofUser += (curr->get_data().getUserName() + ", ");
		curr = curr->get_next();
	}
	// remove the last two characters ", "  before returning 
	friends_ofUser.erase(friends_ofUser.length() - 2);

	return friends_ofUser;

}

// This function 
//input:
//output:
std::string Profile::getFriendsWithSameNameLength() const
{
	unsigned int length_userName = _user.getUserName().length(); // methood in std 
	std::string sameNameLength = "";
	UserNode* curr = _lst.get_first();
	while (curr->get_next() != nullptr)
	{
		if (curr->get_data().getUserName().length() == length_userName)  // only if user name from user list (friends), has the same length as owner
		{
			sameNameLength += (curr->get_data().getUserName() + ", ");
		}
		curr = curr->get_next();
	}
	// remove the last two characters ", "  before returning
	sameNameLength.erase(sameNameLength.length() - 2);

	return sameNameLength;
}

