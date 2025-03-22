#include <iostream>
#include <vector>
#include "Output.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	int example = 0;
	int target, expected;
	vector<int> nums{};

	Output output;

	example++;
	nums = { -1, 2, 1, -4 };
	target = 1;
	expected = 2;
	output.setOutputData(example, target, expected, nums);
	output.printOutput();

	example++;
	nums = { 0, 0, 0 };
	target = 1;
	expected = 0;
	output.setOutputData(example, target, expected, nums);
	output.printOutput();

}
