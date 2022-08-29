#include "MustImplementMemorySafeConstructors.h"
#include <vector>

int main()
{
	Child toCopy;

	Child toCopyTo = toCopy;

	std::vector<Child> childVector;
	childVector.push_back(Child{});

	Child a, b;
	a = b;

	b = std::move(a);

	return 0;
}