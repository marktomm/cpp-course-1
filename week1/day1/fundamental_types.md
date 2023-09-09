### C++17 Fundamental Primitive Types

#### Note: Byte sizes and value ranges are architecture-dependent. Below are typical sizes and ranges on a 64-bit system.

1. **Integral Types**
    - `bool` (1 byte / 8 bits) (true or false)
    - `char` (1 byte / 8 bits) (-128 to 127 or 0 to 255 depending on the system)
    - `wchar_t` (4 bytes / 32 bits) (0 to 4,294,967,295)
    - `char16_t` (C++11 addition) (2 bytes / 16 bits) (0 to 65,535)
    - `char32_t` (C++11 addition) (4 bytes / 32 bits) (0 to 4,294,967,295)
    - `signed char` (1 byte / 8 bits) (-128 to 127)
    - `unsigned char` (1 byte / 8 bits) (0 to 255)
    - `short int` (2 bytes / 16 bits) (-32,768 to 32,767)
    - `unsigned short int` (2 bytes / 16 bits) (0 to 65,535)
    - `int` (4 bytes / 32 bits) (-2,147,483,648 to 2,147,483,647)
    - `unsigned int` (4 bytes / 32 bits) (0 to 4,294,967,295)
    - `long int` (8 bytes / 64 bits) (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)
    - `unsigned long int` (8 bytes / 64 bits) (0 to 18,446,744,073,709,551,615)
    - `long long int` (C++11 addition) (8 bytes / 64 bits) (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)
    - `unsigned long long int` (C++11 addition) (8 bytes / 64 bits) (0 to 18,446,744,073,709,551,615)

2. **Floating-Point Types**
    - `float` (4 bytes / 32 bits) (~1.18e-38 to ~3.4e38)
    - `double` (8 bytes / 64 bits) (~2.22e-308 to ~1.79e308)
    - `long double` (16 bytes / 128 bits) (Implementation dependent)

3. **Void Type**
    - `void` (N/A)

### Applicable Built-in Operators for C++17 Fundamental Primitive Types

The following comma-separated lists specify applicable built-in operators for each category of C++17 fundamental types:

1. **Integral Types**
    - `bool`: `==, !=, &&, ||, !`
    - `char, wchar_t, char16_t, char32_t, signed char, unsigned char, short int, unsigned short int, int, unsigned int, long int, unsigned long int, long long int, unsigned long long int`: `+, -, *, /, %, ++, --, ==, !=, <, <=, >, >=, &, |, ^, ~, <<, >>, &&, ||, !, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=`

2. **Floating-Point Types**
    - `float, double, long double`: `+, -, *, /, ++, --, ==, !=, <, <=, >, >=, +=, -=, *=, /=`

3. **Void Type**
    - `void`: `N/A`
