#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

auto main() -> int {
	std::vector<int> vec{6, 5, 9};
	std::ranges::sort(vec);
	std::ranges::copy(vec, std::ostream_iterator<int>(std::cout, " "));
	std::cout << '\n';
}
