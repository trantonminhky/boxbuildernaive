#pragma once
#include "type.hpp"
#include <string>
#include <vector>
#include <iostream>

class Box {
public:
	Box(Type type, std::string title, std::vector<std::string> lines, char bullet, bool thick);

	Type getType();
	std::string getTitle();
	std::vector<std::string> getLines();
	char getBullet();
	bool isThickBorder();

	void display();

private:
	Type type;
	std::string title; // title cannot be longer than 40 char
	std::vector<std::string> lines; // each line cannot be longer than 30 char
	char bullet;
	bool thick;

	void displayTitle(std::string line);
	void displayLine(std::string line);
	void displayBottom();
};