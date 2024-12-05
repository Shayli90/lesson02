#ifndef USER_H
#define USER_H
#pragma once
#include <string>
#include <iostream>
#include "DeviceList.h"


class User
{
	std::string _userName;
	
	unsigned int _age;

	unsigned int _id;

	DevicesList _lst;


public:

	void init(unsigned int id, std::string username, unsigned int age);

	void clear();

	unsigned int getID() const;

	std::string getUserName() const;

	unsigned int getAge() const;

	const DevicesList& getDevices() const;

	void addDevice(Device newDevice);

	bool checkIfDevicesAreOn() const;

};












#endif // USER_H