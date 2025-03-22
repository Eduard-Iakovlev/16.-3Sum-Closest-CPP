#pragma once
#include <vector>

using namespace std;

class Output{
public:
	Output() = default;

	void setOutputData(int example, int target, int expected, vector<int> nums);

	void printOutput();
	void printCheckResult();
	void printVector();

private:
	int _example, _target, _expected, _result;
	vector<int> _nums;

	void setExample(int example);
	void setTarget(int target);
	void setExpected(int expected);
	void setResult();
	void setNums(vector<int> nums);

};

