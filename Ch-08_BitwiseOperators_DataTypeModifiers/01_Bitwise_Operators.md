# Digital Logic Fundamentals

This document covers the process of converting decimal numbers to binary and explains the functionality of basic bitwise operators.

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

## Bitwise `<<` (Left Shift Operator)

### Syntax:
```
n << i
```
> Shifts the binary form of `n` by `i` places to the **left**.

---

### Example 1:
```
n = 4
n << 1
```
Binary:
```
100  →  1000
```
Result:
```
(8)₁₀
```

---

### Example 2:
```
10 << 2
```
Binary:
```
1010  →  101000
```
Result:
```
(40)₁₀
```

---

## Bitwise `>>` (Right Shift Operator)

### Syntax:
```
n >> i
```
> Shifts the binary form of `n` by `i` places to the **right**.

---

### Example 1:
```
10 >> 1
```
Binary:
```
1010  →  0101
```
Result:
```
(5)₁₀
```

---

### Example 2:
```
8 >> 2
```
Binary:
```
1000  →  0010
```
Result:
```
(2)₁₀
```

---

## Mathematical Formulas

| Operator | Formula | Example | Result |
|-----------|----------|----------|---------|
| `<<` | a << b = a × 2ᵇ | 8 << 1 = 8 × 2¹ | (16)₁₀ |
| `>>` | a >> b = a ÷ 2ᵇ | 8 >> 1 = 8 ÷ 2¹ | (4)₁₀ |

---

**Summary:**
- Left Shift (`<<`) multiplies by 2 for each shift.
- Right Shift (`>>`) divides by 2 for each shift.