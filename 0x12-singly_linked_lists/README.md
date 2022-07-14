this is the edition of the course work where we as holberton students learn the use of linked lists. 
"Structs can be used to define types and can be used to define variables of that type. C structs are
different from Java Classes. Java Classes 'encapsulates' both state (data fields) and behavor (methods)
with these feilds being public, private or protected" (pg #1: "https://www.cs.cmu.edu/~guna/15-123S11/Lectures/Lecture09.pdf").



typdef struct {
  unsigned int var1;
  char* var2;
}node;

***in my own words***
the struct is defined with the unsigned int of "varable" var1; and char var2;
where then we have the "node" at the bottom of the struct benig the type. so...

node mynode;

where "mynode" becomes a varable of the type node and "the feilds within mynode varable can be accessed usnig
mynode.var1 = 100;
mynode.var2 = malloc(20);"
(pg.1)


***the amount of memory requried to hold the varable mynode s equivilent to the sizedof(unsigned int) + sizeof(char*). 
you can also write sizeof(node) and see how many bytes are requried to hold a varable of size node.

====================================

Passing functions to structs
(https://www.cs.cmu.edu/~guna/15-123S11/Lectures/Lecture09.pdf)

when considering the struct where the structure is passed as "value parameter ... a copy of the struct si made on the runtime stack and information
used to perform the operations. ---> the programmer should be aware the if a "struct is large, then too much information may be copeid to run time stack
making the program run slower"(pg.5)


