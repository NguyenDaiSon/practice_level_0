#include <iostream>
#include <type_traits>
#include <concepts>
#include <format>

template <typename T>
concept IsPointer = std::is_pointer_v<T>;

template <typename T>
requires (!IsPointer<T>)
auto maxValue(T a, T b) {
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
