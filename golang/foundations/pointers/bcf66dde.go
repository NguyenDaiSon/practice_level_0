package main

import (
	"fmt"
)

func main() {
	var i int = 10
	var pi *int = &i
	fmt.Println(i)
	fmt.Println(&i)
	fmt.Println(pi)
	fmt.Println(*pi)
	*pi = 20
	fmt.Println(i)
	fmt.Println(&i)
	fmt.Println(pi)
	fmt.Println(*pi)
}
