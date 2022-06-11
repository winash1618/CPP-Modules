# references
## Compare : references in c++ and pointers in c
- In c we use pointers when we need to allocate variable visible out of our scope or when we want allocate on the heap not on the stack. Then manipulates it with its address and so on. 
- In c++ we have another concept called references doing pretty much the same thing. The way to understand references is by saying that it just alias for an existing variable. This is definition is not that perfect but it can used to understand the concept of references.
- There is another way to explain reference which is more accurate. References are pointer that is constant and allways unreferenced and never void.
- refer ref1.cpp
- We cannot declare a reference without it being initialised. On the corrolory we can say that if we have reference it will be pointing to something. 
- A reference is like a dereferenced pointer means we directly access the variable without dereferencing.


## passing parameter by reference
- We allready seen how to use pointers as function parameters.
- Here we will see how to use pass references as function parameters.
- refer ref2.cpp

## return by reference
- refer ref3.cpp

## when to use
- References is not a replacement for pointers they just complement them.
- References allways needs to initialised at the beginning but not the pointers. So you need to use pointers if you are not initilizing something in the beginning.