package main

import (
	"fmt"
)

func main() {
	freezing := make(map[string]float32)
	fmt.Println(freezing)
	fmt.Println(len(freezing))

	freezing["celsius"] = 0.0
	freezing["fahrenheit"] = 32.0
	freezing["kelvin"] = 273.2

	fmt.Println(freezing)
	fmt.Println(len(freezing))

	delete(freezing, "kelvin")
	fmt.Println(freezing)
	fmt.Println(len(freezing))
}
