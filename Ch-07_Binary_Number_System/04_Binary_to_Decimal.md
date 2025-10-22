# Binary to Decimal Conversion

This note explains how to convert **binary numbers to decimal** by using **powers of 2**.  
We always start **from right to left**, multiplying each bit by \( 2^{position} \).

---

## Example 1: (101010)₂ → ?

### Step-by-step:
| Bit | Power of 2 | Calculation | Result |
|-----|-------------|--------------|---------|
| 1 | 2⁵ | 1 × 32 | 32 |
| 0 | 2⁴ | 0 × 16 | 0 |
| 1 | 2³ | 1 × 8 | 8 |
| 0 | 2² | 0 × 4 | 0 |
| 1 | 2¹ | 1 × 2 | 2 |
| 0 | 2⁰ | 0 × 1 | 0 |

**Add them up:**  
32 + 0 + 8 + 0 + 2 + 0 = **42**

✅ **(101010)₂ = (42)₁₀**

---

## Example 2: (110010)₂ → ?

| Bit | Power of 2 | Calculation | Result |
|-----|-------------|--------------|---------|
| 1 | 2⁵ | 1 × 32 | 32 |
| 1 | 2⁴ | 1 × 16 | 16 |
| 0 | 2³ | 0 × 8 | 0 |
| 0 | 2² | 0 × 4 | 0 |
| 1 | 2¹ | 1 × 2 | 2 |
| 0 | 2⁰ | 0 × 1 | 0 |

**Add them up:**  
32 + 16 + 0 + 0 + 2 + 0 = **50**

✅ **(110010)₂ = (50)₁₀**

---

## Example 3: (1100101)₂ → ?

| Bit | Power of 2 | Calculation | Result |
|-----|-------------|--------------|---------|
| 1 | 2⁶ | 1 × 64 | 64 |
| 1 | 2⁵ | 1 × 32 | 32 |
| 0 | 2⁴ | 0 × 16 | 0 |
| 0 | 2³ | 0 × 8 | 0 |
| 1 | 2² | 1 × 4 | 4 |
| 0 | 2¹ | 0 × 2 | 0 |
| 1 | 2⁰ | 1 × 1 | 1 |

**Add them up:**  
64 + 32 + 0 + 0 + 4 + 0 + 1 = **101**

✅ **(1100101)₂ = (101)₁₀**

---

📘 **Method Summary:**  
1. Write the binary digits.  
2. Starting from the rightmost bit, multiply each bit by \( 2^{position} \).  
3. Add all results to get the decimal value.
