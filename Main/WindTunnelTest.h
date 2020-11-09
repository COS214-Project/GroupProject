#ifndef WINDTUNNELTEST_H
#define WINDTUNNELTEST_H

class WindTunnelTest : Test {

private:
	Test carTests[tokens];
	int tokens;

public:
	void createIterator();

	void checkRemainingTokens();
};

#endif
