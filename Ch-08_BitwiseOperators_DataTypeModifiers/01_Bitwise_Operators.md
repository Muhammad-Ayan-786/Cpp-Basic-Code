# Digital Logic Fundamentals

This document covers the process of converting decimal numbers to binary and explains the functionality of basic bitwise operators.

---

## Decimal to Binary Conversion

This section demonstrates the process of converting decimal numbers to binary using the **repeated division-by-2** method.

### Method: Repeated Division by 2

To convert a decimal number to binary:
1. Continuously divide the number by 2.
2. Record the remainder (which will be either 0 or 1) after each division.
3. The binary equivalent is read as the sequence of remainders **from the last one obtained to the first**.

### Conversion Examples

#### Example 1: Convert (42)₁₀ to Binary

| Division | Quotient | Remainder |
| :------- | :------- | :-------- |
| 42 / 2   | 21       | **0**     |
| 21 / 2   | 10       | **1**     |
| 10 / 2   | 5        | **0**     |
| 5 / 2    | 2        | **1**     |
| 2 / 2    | 1        | **0**     |
| 1 / 2    | 0        | **1**     |

**Reading the remainders from bottom to top gives the binary equivalent.**

**Result:** (42)₁₀ = **(101010)₂**

#### Example 2: Convert (50)₁₀ to Binary

| Division | Quotient | Remainder |
| :------- | :------- | :-------- |
| 50 / 2   | 25       | **0**     |
| 25 / 2   | 12       | **1**     |
| 12 / 2   | 6        | **0**     |
| 6 / 2    | 3        | **0**     |
| 3 / 2    | 1        | **1**     |
| 1 / 2    | 0        | **1**     |

**Reading the remainders from bottom to top gives the binary equivalent.**

**Result:** (50)₁₀ = **(110010)₂**

---

## Bitwise Operators

This section explains the functionality of basic bitwise operators in programming and digital logic.

### Bitwise AND (`&`)

The bitwise AND operator compares each bit of its first operand to the corresponding bit of its second operand. If both bits are 1, the corresponding result bit is set to 1. Otherwise, the result bit is set to 0.

#### Truth Table
| A | B | A & B |
|:-:|:-:|:-----:|
| 0 | 0 |   0   |
| 1 | 0 |   0   |
| 0 | 1 |   0   |
| 1 | 1 |   1   |

#### Example: `a = 4, b = 8`

a = 4  →  0100
b = 8  →  1000
            &
         ----
          0000  → (0)₁₀


**Result:** `4 & 8 = 0`

### Bitwise OR (`|`)

The bitwise OR operator compares each bit of its first operand to the corresponding bit of its second operand. If either bit is 1, the corresponding result bit is set to 1. Otherwise, the result bit is set to 0.

#### Truth Table
| A | B | A \| B |
|:-:|:-:|:------:|
| 0 | 0 |    0   |
| 1 | 0 |    1   |
| 0 | 1 |    1   |
| 1 | 1 |    1   |

#### Example: `a = 4, b = 8`

a = 4  →  0100
b = 8  →  1000
            |
         ----
          1100  → (12)₁₀

**Verification:** `1100₂ = 2³ + 2² = 8 + 4 = 12`

**Result:** `4 | 8 = 12`

### Bitwise XOR (`^`) - Exclusive OR

The bitwise XOR operator compares each bit of its first operand to the corresponding bit of its second operand. If the bits are different, the corresponding result bit is set to 1. If the bits are the same, the result bit is set to 0.

* **Same bits give 0**
* **Different bits give 1**

#### Truth Table
| A | B | A ^ B |
|:-:|:-:|:-----:|
| 0 | 0 |   0   |
| 1 | 0 |   1   |
| 0 | 1 |   1   |
| 1 | 1 |   0   |

#### Example 1: `a = 4, b = 8`

a = 4  →  0100
b = 8  →  1000
            ^
         ----
          1100  → (12)₁₀

**Result:** `4 ^ 8 = 12`

#### Example 2: `c = 3, d = 7`

c = 3  →  011
d = 7  →  111
            ^
         ----
          100  → (4)₁₀

**Result:** `3 ^ 7 = 4`

---

## Summary

- **Decimal to Binary**: Use repeated division by 2 and read remainders from bottom to top
- **Bitwise AND**: Both bits must be 1 to get 1
- **Bitwise OR**: At least one bit must be 1 to get 1  
- **Bitwise XOR**: Bits must be different to get 1

These fundamental operations are essential for low-level programming, digital circuit design, and computer architecture.







<!-- # Digital Logic Fundamentals

This document covers the process of converting decimal numbers to binary and explains the functionality of basic bitwise operators.

---

## Decimal to Binary Conversion

This section demonstrates the process of converting decimal numbers to binary using the **repeated division-by-2** method.

### Method: Repeated Division by 2

To convert a decimal number to binary:
1. Continuously divide the number by 2.
2. Record the remainder (which will be either 0 or 1) after each division.
3. The binary equivalent is read as the sequence of remainders **from the last one obtained to the first**.

### Conversion Examples

#### Example 1: Convert (42)₁₀ to Binary

| Division | Quotient | Remainder |
| :------- | :------- | :-------- |
| 42 / 2   | 21       | **0**     |
| 21 / 2   | 10       | **1**     |
| 10 / 2   | 5        | **0**     |
| 5 / 2    | 2        | **1**     |
| 2 / 2    | 1        | **0**     |
| 1 / 2    | 0        | **1**     |

**Reading the remainders from bottom to top gives the binary equivalent.**

**Result:** (42)₁₀ = **(101010)₂**

#### Example 2: Convert (50)₁₀ to Binary

| Division | Quotient | Remainder |
| :------- | :------- | :-------- |
| 50 / 2   | 25       | **0**     |
| 25 / 2   | 12       | **1**     |
| 12 / 2   | 6        | **0**     |
| 6 / 2    | 3        | **0**     |
| 3 / 2    | 1        | **1**     |
| 1 / 2    | 0        | **1**     |

**Reading the remainders from bottom to top gives the binary equivalent.**

**Result:** (50)₁₀ = **(110010)₂**

---

## Bitwise Operators

This section explains the functionality of basic bitwise operators in programming and digital logic.

### Bitwise AND (`&`)

The bitwise AND operator compares each bit of its first operand to the corresponding bit of its second operand. If both bits are 1, the corresponding result bit is set to 1. Otherwise, the result bit is set to 0.

#### Truth Table
| A | B | A & B |
|:-:|:-:|:-----:|
| 0 | 0 |   0   |
| 1 | 0 |   0   |
| 0 | 1 |   0   |
| 1 | 1 |   1   |

#### Example: `a = 4, b = 8`

a = 4  →  0100
b = 8  →  1000
            &
         ----
          0000  → (0)₁₀


**Result:** `4 & 8 = 0`

### Bitwise OR (`|`)

The bitwise OR operator compares each bit of its first operand to the corresponding bit of its second operand. If either bit is 1, the corresponding result bit is set to 1. Otherwise, the result bit is set to 0.

#### Truth Table
| A | B | A \| B |
|:-:|:-:|:------:|
| 0 | 0 |    0   |
| 1 | 0 |    1   |
| 0 | 1 |    1   |
| 1 | 1 |    1   |

#### Example: `a = 4, b = 8`

a = 4  →  0100
b = 8  →  1000
            |
         ----
          1100  → (12)₁₀

**Verification:** `1100₂ = 2³ + 2² = 8 + 4 = 12`

**Result:** `4 | 8 = 12`

### Bitwise XOR (`^`) - Exclusive OR

The bitwise XOR operator compares each bit of its first operand to the corresponding bit of its second operand. If the bits are different, the corresponding result bit is set to 1. If the bits are the same, the result bit is set to 0.

* **Same bits give 0**
* **Different bits give 1**

#### Truth Table
| A | B | A ^ B |
|:-:|:-:|:-----:|
| 0 | 0 |   0   |
| 1 | 0 |   1   |
| 0 | 1 |   1   |
| 1 | 1 |   0   |

#### Example 1: `a = 4, b = 8`

a = 4  →  0100
b = 8  →  1000
            ^
         ----
          1100  → (12)₁₀

**Result:** `4 ^ 8 = 12`

#### Example 2: `c = 3, d = 7`

c = 3  →  011
d = 7  →  111
            ^
         ----
          100  → (4)₁₀

**Result:** `3 ^ 7 = 4` -->