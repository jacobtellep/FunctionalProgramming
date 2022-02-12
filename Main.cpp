#include <iostream>
#include <vector>


// functional programming is treating functions as "first class citizens"
// can pass functions as params, and assign them to variables. 
// this is how you would do so in c++
void ForEach(const std::vector<int>& values, void(*func)(int)) {
	for (int value : values) {
		func(value);
	}
}

int main() {
	// declared and added values to a vector
	std::vector<int> values = { 1,5,4,2,3 };

	// here the first argument of the ForEach function is the vector above, and the second is
	// an anon function that has inline logic to print the value of the vector for each iteration of the loop
	ForEach(values, [](int value) {std::cout << "Value: " << value << std::endl; });
	std::cin.get();
}