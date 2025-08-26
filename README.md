# 🧵 Pointer Operations in C++  

---

## 🎯 Aim  
To study and implement pointer operations in C++ and understand the difference between **call by value** and **call by reference** parameter-passing methods.  

---

## 📚 Theory  

In C++, the way we pass parameters to functions determines whether changes inside the function affect the original variables.  

### 📦 Call by Value  
- **Definition:** A copy of the actual parameter is passed to the function.  
- **Effect:** Changes happen only on the copy → originals remain unchanged.  
- **Working:** Function operates in its own scope and does not affect caller variables.  

### 🔗 Call by Reference  
- **Definition:** The address or reference of actual parameters is passed, allowing direct modification of originals.  
- **Effect:** Changes done inside the function reflect in the caller variables.  
- **Working:** Function receives pointers (or references) → dereferences them to access and modify actual memory.  

---

## 📊 Comparison Table  

| ⚙️ Feature                 | 📦 Call by Value           | 🔗 Call by Reference       |
|-----------------------------|----------------------------|-----------------------------|
| **Data Passed**             | Copy of value              | Address / reference         |
| **Changes affect original** | ❌ No                      | ✅ Yes                      |
| **Memory Use**              | Extra copy made            | No extra copy               |
| **Safety**                  | Safer (no side effects)    | Can change caller data      |
| **Typical Use Case**        | Read-only operations       | In-place modifications      |  

---

## 🖼️ Visual Representation  

📌 Call by Value vs Call by Reference  

<img width="346" height="255" alt="image" src="https://github.com/user-attachments/assets/797991e8-a436-474e-87e0-bf274ca271a9" />

---

## Algorithms

### Program 1 Swap by value
---

- Start
- Declare two integer variables a = 5 and b = 10.
- Call the function swap(a, b).
- Inside the function:
  
1.Copy values of a and b into parameters x and y.

2.Swap x and y using a temporary variable.

3.Function ends (changes do not affect original variables).

- Print values of a and b.
- End

---

### Program 2 Swap by pointers
---

- Start
- Declare two integer variables x = 5 and y = 10.
- Call the function swap(&x, &y) (addresses are passed).
- Inside the function:
  
1.Access values using pointers *x and *y.

2.Swap their values using a temporary variable.

3.Since addresses are used, changes reflect in original variables.

- Print values of x and y.
- End

---

### Program 3 Swap by reference
---

- Start
- Declare two integer variables a = 45 and b = 35.
- Print initial values of a and b.
- Call the function swap(a, b) (reference variables are used).
- Inside the function:
  
1.References x and y directly refer to original a and b.

2.Swap values using a temporary variable z.

3.Original values of a and b get modified directly.

- Print updated values of a and b.
- End

---


## 🧠 Conclusion  

This experiment demonstrates the difference between parameter-passing methods in C++.  

- 📦 **Call by Value** → Works on copies, originals remain safe.  
- 🔗 **Call by Reference** → Works directly on real data, originals are modified.  
- ✅ Key Insight:  
  - Use **Call by Value** for safety (read-only operations).  
  - Use **Call by Reference** for in-place updates and efficiency.  
