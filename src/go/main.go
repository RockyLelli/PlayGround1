package main

import (
	"fmt"
	"os"
) // https://pkg.go.dev/fmt

func main() {

	arg := os.Args[1]

	fmt.Print("Hello ")
	fmt.Println(arg)
}
