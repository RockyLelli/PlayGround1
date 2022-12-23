package main

import (
	"fmt"
	"os"
) // https://pkg.go.dev/fmt

func main() {

	name := os.Args[1]

	fmt.Print("Hello ")
	fmt.Println(name)
}
