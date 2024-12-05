#include "User.h"



void User::init(unsigned int id, std::string username, unsigned int age)
{
	_id = id;
	_userName = username;
	_age = age;
}

void User::clear()
{
	_id = 0;
	_userName = "";
	_age = 0;
	_lst.clear();
}

unsigned int User::getID() const
{
	return _id;
}

std::string User::getUserName() const
{
	return _userName;
}

unsigned int User::getAge() const
{
	return _age;
}

const DevicesList& User::getDevices() const
{
	return _lst;
}

void User::addDevice(Device newDevice) //DiviceList
{
	_lst.add(newDevice);
}


bool User::checkIfDevicesAreOn() const
{
	DeviceNode* curr = _lst.get_first();
	if (curr == nullptr)
	{
		return true;
	}
	while (curr->get_next() != nullptr)
	{
		if (!(curr->get_data().isActive()))
		{
			return false;
		}
		curr = curr->get_next();
	}
	return true;
}












