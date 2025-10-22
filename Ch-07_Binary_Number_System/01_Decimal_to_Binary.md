# Decimal to Binary Conversion

This note demonstrates how to convert decimal numbers to binary using **repeated division by 2**.

---

## Example 1: Converting 42₁₀ to Binary

| ÷2 | Quotient | Remainder |
|----|-----------|------------|
| 42 | 21 | 0 |
| 21 | 10 | 1 |
| 10 | 5  | 0 |
| 5  | 2  | 1 |
| 2  | 1  | 0 |
| 1  | 0  | 1 |

**Binary:** Write the remainders from bottom to top →  
**(42)₁₀ = (101010)₂**

---

## Example 2: Converting 50₁₀ to Binary

| ÷2 | Quotient | Remainder |
|----|-----------|------------|
| 50 | 25 | 0 |
| 25 | 12 | 1 |
| 12 | 6  | 0 |
| 6  | 3  | 0 |
| 3  | 1  | 1 |
| 1  | 0  | 1 |

**Binary:** Write from bottom to top →  
**(50)₁₀ = (110010)₂**

---

📘 **Method Summary:**  
1. Divide the decimal number by 2.  
2. Write down the remainder.  
3. Repeat with the quotient until it becomes 0.  
4. The binary number is the remainders **read from bottom to top**.