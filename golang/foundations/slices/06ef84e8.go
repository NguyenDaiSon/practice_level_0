package main

import (
	"fmt"
)

func main() {
	s := []int{0, 1, 2, 3, 4, 5, 6}
	fmt.Println(s)

	fmt.Print(s[:4]) // 0 1 2 3
}
