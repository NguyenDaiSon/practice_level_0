package main

import (
	"fmt"
)

func main() {
	s := []int{0, 1, 2, 3, 4, 5, 6}
	fmt.Println(s)
	fmt.Println(len(s))
	fmt.Println(cap(s))

	s1 := s[:4]
	fmt.Println(s1)
	fmt.Println(len(s1))
	fmt.Println(cap(s1))

	s2 := s[3:]
	fmt.Println(s2)
	fmt.Println(len(s2))
	fmt.Println(cap(s2))

	s[3] = 9
	fmt.Println(s)
	fmt.Println(s1)
	fmt.Println(s2)
}
