class Check {
public:
    Check(int result, int expected);

	bool checkResult();

private:
    int _result;
    int _expected;
};
