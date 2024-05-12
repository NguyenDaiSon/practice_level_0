#include <iostream>
#include <concepts>

template <typename T, typename U>
requires std::same_as<T, U>
void foo(T, U) {
	std::cout << "foo() for parameters of same type\n";
}

template <typename T, typename U>
requires std::same_as<T, U> && std::integral<T>
void foo(T, U) {
	std::cout << "foo() for integral parameters of same type\n";
}

auto main() -> int {
	foo(1, 2);
	foo(1.1, 2.2);
}
