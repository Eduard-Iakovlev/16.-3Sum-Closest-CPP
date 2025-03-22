#include "Output.h"
#include "Solution.h"
#include <iostream>

using namespace std;

void Output::setOutputData(int example, int target, int expected, vector<int> nums) {
	setExample(example);
	setTarget(target);
	setExpected(expected);
	setNums(nums);
}

void Output::printOutput(){
	cout << "============ Тест №" << _example << " ============" << endl;
	cout << "Входные данные: nums = ";
	printVector();
	cout << ", target = " << _target << endl;
	cout << "Ожидаемый результат: " << _expected << endl;
	setResult();
	cout << "Полученный результат: " << _result << endl;
	cout << "============ Проверка ============" << endl;
	printCheckResult();
	cout << "=================================\n" << endl;	
}

void Output::printCheckResult(){
;
	if (_expected == _result) {
		cout << "Тест пройден" << endl;
	}
	else {
		cout << "Тест не пройден" << endl;
	}
}

void Output::printVector() {
	cout << "[ ";
	for (auto& i : _nums) {
		cout << i;
		if (&i != &_nums.back()) {
			cout << ", ";
		}
	}
	cout << " ]";
}


void Output::setExample(int example) {
	_example = example;
}

void Output::setTarget(int target){
	_target = target;
}

void Output::setExpected(int expected){
	_expected = expected;
}

void Output::setResult(){
	Solution solution;
	_result = solution.threeSumClosest(_nums, _target);
}

void Output::setNums(vector<int> nums){
	_nums = nums;
}

