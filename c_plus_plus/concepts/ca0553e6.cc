#include <iostream>
#include <format>
#include <array>

template <auto Val>
concept LessThan10 = Val < 10;

template <typename T, std::size_t Size>
requires LessThan10<Size>
struct Array {
	std::array<T, Size> data;
};

auto main() -> int {
	Array<int, 9> a9;
	// Array<int, 10> a10; // compile-error
}
