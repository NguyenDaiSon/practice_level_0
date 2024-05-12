#include <iostream>
#include <vector>
#include <set>

template <typename Cont, typename Val>
void add(Cont& c, const Val& v) {
	if constexpr (requires { c.push_back(v);} ) {
		std::cout << "push_back\n";
		c.push_back(v);
	} else {
		std::cout << "insert\n";
		c.insert(v);
	}
}

auto main() -> int {
	std::vector<int> vi;
	std::set<int> si;
	add(vi, 1);
	add(si, 1);
}
