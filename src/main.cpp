#include "box.hpp"

int main() {
	std::vector<std::string> lines = {"This is a dialog box.", "Created naively."};

	Box box(Type::INFO, "\'TIS A BOX", lines, '*', true); // UGLY AHH CONSTRUCTOR
	box.display();
	
	return 0;
}