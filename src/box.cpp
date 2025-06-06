#include "box.hpp"

Box::Box(Type type, std::string title, std::vector<std::string> lines, char bullet, bool thick) {
	this->type = type;
	this->title = title;
	this->lines = lines;
	this->bullet = bullet;
	this->thick = thick;
}

Type Box::getType() {
	return type;
}

std::string Box::getTitle() {
	return title;
}

std::vector<std::string> Box::getLines() {
	return lines;
}

char Box::getBullet() {
	return bullet;
}

bool Box::isThickBorder() {
	return thick;
}

void Box::displayTitle(std::string line) {
	if (!thick) {
		std::cout << "+----------------------------------------+\n";
	} else {
		std::cout << "+========================================+\n";
	}
	int leftPadding = (40 - line.length()) / 2;

	std::cout << "|";
	for (int _ = 0; _ < leftPadding; _++) {
		std::cout << ' ';
	}
	std::cout << title;
	for (int _ = leftPadding + line.length(); _ < 40; _++) {
		std::cout << ' ';
	}
	std::cout << "|\n";

	if (!thick) {
		std::cout << "+----------------------------------------+\n";
	} else {
		std::cout << "+========================================+\n";
	}
}

void Box::displayLine(std::string line) {
	std::cout << "|";
	std::cout << " " << bullet << " ";
	std::cout << line;
	for (int _ = line.length() + 3; _ < 40; _++) {
		std::cout << ' ';
	}
	std::cout << "|\n";
}

void Box::displayBottom() {
	if (!thick) {
		std::cout << "+----------------------------------------+\n";
	} else {
		std::cout << "+========================================+\n";
	}
}

void Box::display() {
	displayTitle(title);
	for (auto line : lines) {
		displayLine(line);
	}
	displayBottom();
}