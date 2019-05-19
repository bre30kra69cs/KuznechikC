# Kuznechik C++

C++ implementation of GOST Kuznechik cipher.

## How to use?

```c++
// I use gcc/g++ compiler and its mean that you
// must include static lib libkuznec.a with linker

// 1) After pev step you must include header
#include "kuznec.h"

// 2) Then use corresponding func for enc/dec 
long long int* ENC(long long int* input, long long int* key);
long long int* DEC(long long int* input, long long int* key);
```

## Where did i get Kuznechik description?

Paper name: "КРИПТОГРАФИЧЕСКАЯ ЗАЩИТА ИНФОРМАЦИИ"

Source: http://wwwold.tc26.ru/standard/gost/GOST_R_3412-2015.pdf

