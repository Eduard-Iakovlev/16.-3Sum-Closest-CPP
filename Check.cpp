#include "Check.h"

Check::Check(int result, int expected) : _result(result), _expected(expected) {}

bool Check::checkResult(){
	return _result == _expected;
}
