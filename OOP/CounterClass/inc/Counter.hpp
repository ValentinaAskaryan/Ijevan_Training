#pragma once

class Counter {
public:
	// Data methods.
	Counter();
	~Counter();

private:
	// Data members.
	static int createdInstCount;
	static int destroyedInstCount;

};
