# Integer Types in C++: Signed vs Unsigned

This document explains the sizes of different integer types in C++ and the difference between signed and unsigned integers, including the range calculations.

---

## 1. Integer Sizes

| Type            | Typical Size (bytes) |
|-----------------|-------------------|
| `int`           | 4                 |
| `short int`     | 2                 |
| `long int`      | 4 or 8            |
| `long long int` | 8                 |

> **Note:** Size may vary depending on the system.

---

## 2. Signed vs Unsigned Integers

### Signed Integers

- Can store **both positive and negative numbers**
- **Most Significant Bit (MSB)** is the **sign bit**
  - `0` → positive  
  - `1` → negative
- Example (32-bit signed int):
  - `n = 2` → `00000000 00000000 00000000 00000010`  
  - `n = -2` → `11111111 11111111 11111111 11111110` (2’s complement)
- Range:
  - Negative: `−2³¹ = −2,147,483,648`
  - Positive: `0 to 2³¹ − 1 = 2,147,483,647`

### Unsigned Integers

- Can store **only positive numbers and zero**
- All bits are used for the value (no sign bit)
- Example (32-bit unsigned int):
  - `p = 4` → `00000000 00000000 00000000 00000100`
- Range: `0` to `2³² − 1 = 4,294,967,295`

---

## 3. Why Signed Int Range is `−2³¹ to 2³¹−1`

- 32-bit signed int → **1 bit for sign, 31 bits for value**
- Total possible values = 2³² = 4,294,967,296
- Split between negative and positive:
  - Negative: −2³¹ … −1 → 2,147,483,648 values
  - Positive: 0 … 2³¹−1 → 2,147,483,647 values
- **Zero takes one spot** on the positive side, so positive max = 2³¹−1

### Example with 3 bits (small version)

| Bits | Sign | Value |
|------|------|-------|
| 000  | +    | 0     |
| 001  | +    | 1     |
| 010  | +    | 2     |
| 011  | +    | 3     |
| 100  | −    | -4    |
| 101  | −    | -3    |
| 110  | −    | -2    |
| 111  | −    | -1    |

- Range = `−2^(2)` to `2^(2)−1` → `−4 to +3`  
- Same principle scales to 32 bits: `−2³¹ to 2³¹−1`

---

## 4. Summary

- **Signed int:** positive & negative, MSB = sign  
- **Unsigned int:** positive only, all bits for value  
- **32-bit signed int range:** −2,147,483,648 to 2,147,483,647  
- **32-bit unsigned int range:** 0 to 4,294,967,295