# CH2 : Objects Functions and Types

Not a novel concept, but I think the definition in the C standard is interesting.

```
Object:
A region of data storage in the execution environment, the contents of which can represent values.

When referenced, an object can be interpreted as having a particular type.
```

## Definitions:

- ***Object***: A region of data storage in the execution environment, the contents of which can represent values.
- ***Variable***: An object with a declared type.
- ***Type***: Self-explanatory in a way, but a defined method of interpretation of the represented data in an object.
- ***Pointer***: An address in memory where an object or function is stored.
    - A pointer's so-called 'type' is derived from the object or function referenced, and is called the *referenced type*.
- ***Compound Statement***: A block of code (defined often between two braces) in which more than one action is taken (such as most main functions).
- ***Declaration***: To state for the compiler (and in the program) the name and type of a variable, but not to assign any content to the declared variable.
    - "This thing exists somewhere..."
    - `int a;` is declaring and defining; `void xyz()` is declaring but not defining
- ***Define***: To state the content of a variable (object or function); `void xyz() {return 0; };` is a definition.
    - "This thing exists here; make space for it"
- ***Initialize***: To assign the value of a variable at a construction time.
    - "This thing exists here, make space for it and assign it this value."
    - `int x = 0;` is Declaration, Definition, and Initialization all in one.

## More notes

- Teaching pass by value vs pass by reference. (also called call-by-value vs call-by-reference)


