example: Example.c ExampleDep.c
	cc Example.c ExampleDep.c -o example
Example.c: ExampleDep.h
ExampleDep.c: ExampleDep.h