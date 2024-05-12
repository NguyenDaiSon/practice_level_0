#include <iostream>
#include <concepts>
#include <format>

template <typename T>
concept IsPointer = requires(T p) {
	*p;
	p == nullptr;
	{p < p} -> std::convertible_to<bool>;
};

auto maxValue(auto a, auto b) {
	std::cout << "non-pointer version\n";
	return b < a ? a : b;
}

auto maxValue(IsPointer auto a, IsPointer auto b)
requires std::totally_ordered_with<decltype(*a), decltype(*b)> {
	std::cout << "pointer version\n";
	return maxValue(*a, *b);
}

auto main() -> int {
	constexpr auto a{1}, b{2};
	std::cout << std::format("{}\n", maxValue(a, b));
	std::cout << std::format("{}\n", maxValue(&a, &b));
}
