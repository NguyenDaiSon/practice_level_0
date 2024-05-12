package main

import (
	"fmt"
)

func main() {
	var a [3]int
	fmt.Println(a)
	fmt.Println(a[1])
	a[1] = 10
	fmt.Println(a)
	fmt.Println(a[1])

	a1 := a[1]
	fmt.Println(a1)
}
