﻿#include "Page.h"



void Page::init()
{
	_status = "";
	_posts = "";

}

std::string Page::getPosts()
{
	return _posts;
}

std::string Page::getStatus()
{
	return _status;
}

void Page::clearPage()
{
	_posts = "";

}

void Page::setStatus(std::string status)
{
	_status = status;

}

void Page::addLineToPosts(std::string new_line)
{
	_posts += ("\n" + new_line);
}


