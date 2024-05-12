package main

import (
	"fmt"
)

func main() {
	s := make([]int, 3)
	fmt.Println(s)
	fmt.Println(len(s))
	fmt.Println(cap(s))
	s[0] = 8
	s[1] = 16
	s[2] = 32
	fmt.Println(s)
}
