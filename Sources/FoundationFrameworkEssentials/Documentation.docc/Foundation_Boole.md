# ``Foundation_Boole``

A value type whose instances are either `true` or `false`.

## Overview

`Foundation_Boole` represents Boolean values. Create instances of 
`Foundation_Boole` by using one of the Boolean literals `true` or `false`, or by 
assigning the result of a Boolean method or operation to a variable or constant.

```c
Foundation_Boole hasArrived = false;


Foundation_Boole isLess = 100 < 101;
// isLess == "true"
```

It's recommended to use only simple Boolean values in conditional contexts to 
help avoid accidental programming errors and to help maintain the clarity of 
each control statement.
