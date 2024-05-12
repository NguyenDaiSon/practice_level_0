package main

import (
	"fmt"
)

func main() {
	s := []int{1}
	fmt.Println(s)
	fmt.Println(len(s))
	fmt.Println(cap(s))

	s = append(s, 2)
	fmt.Println(s)
	fmt.Println(len(s))
	fmt.Println(cap(s))

	s = append(s, s...)
	fmt.Println(s)
	fmt.Println(len(s))
	fmt.Println(cap(s))

}
