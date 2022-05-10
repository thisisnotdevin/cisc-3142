# CISC-3142

## Chapter 6

### Deep constructor

When designing classes that handle dynamic allocated memory, copying can get us in a lot of trouble. That is because shallow copies of the pointer only copies the address of the pointer, it does not copy the contents.

A deep copy will copy the value too, doing so requires to write your own copy constructor and overload assingment operator

