About
-----

The assert.h header file provides a conditional assertion macro function for diagnosing program execution.  

If the condition is not met. the program terminate directly from the assertion position and print the line number and condition content.  

Define NDEBUG macro before including the "assert. h" file, and the assert macro function will be empty: ((void) 0)
