# CISC-3142

## Chapter 6

### Deep constructor

When designing classes that handle dynamic allocated memory, copying can get us in a lot of trouble. That is because shallow copies of the pointer only copies the address of the pointer, it does not copy the contents.

A deep copy will copy the value too, doing so requires to write your own copy constructor and overload assingment operator

### Access Modifiers in C++

Also known as Data Hiding, there are 3 types, Public, Private, Protected

**Protected**
![image](https://user-images.githubusercontent.com/66978846/167687525-14ee7a05-1e01-4dff-a623-10607330a03c.png)


**Private**
![image](https://user-images.githubusercontent.com/66978846/167687758-f2a73761-4ba4-4cef-9086-aed49e7ef9d0.png)

**Public**

Can be accessed anywhere

### Constructor Inheritance 
![image](https://user-images.githubusercontent.com/66978846/167687966-de9631bd-6974-4cb6-958f-15ebc17f669f.png)
![image](https://user-images.githubusercontent.com/66978846/167688018-0ce90583-f34e-48ac-987a-d3f2208cd6d0.png)
