package main

import (
	"fmt"
)

func main() {
	freezing := map[string]float32{
		"celsius":    0.0,
		"fahrenheit": 32.0,
		"kelvin":     273.2,
	}

	fmt.Println(freezing)
	fmt.Println(len(freezing))

	delete(freezing, "celsius")
	fmt.Println(freezing)
	fmt.Println(len(freezing))
}
