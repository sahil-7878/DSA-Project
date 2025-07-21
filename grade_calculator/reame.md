# 🎓 Grade Calculator (C++)

This project is a collection of simple C++ programs that calculate a student's grade based on their input score. It showcases different logic approaches using conditional operators, `if-else` statements, and `switch-case` statements.

## 📁 Project Structure

### ✅ `1.cpp`
- Uses **nested ternary operators** to determine the grade.
- Directly prints the grade based on the entered marks.
- Quick and compact approach.

### ✅ `2.cpp`
- First calculates the grade using ternary operators.
- Then uses a **`switch-case`** statement to display a personalized message for each grade.
- Provides detailed feedback on performance.

### ✅ `3.cpp`
- Implements a **classic `if-else` ladder** for more precise score ranges (with decimal ranges).
- Checks if the user is **eligible for the next level** or not, based on their grade.
- Great for real-world scenarios with float inputs.

## 📌 Grading Criteria

| Score Range      | Grade |
|------------------|--------|
| 81 - 100         | A      |
| 71 - 80          | B      |
| 61 - 70          | C      |
| 51 - 60          | D      |
| 41 - 50          | E      |
| 0 - 40           | F      |

> Note: `3.cpp` allows decimal ranges like 81.1, 70.9, etc., for more accurate grading.

## 🚀 How to Run

1. Make sure you have a C++ compiler (like `g++`) installed.
2. Compile the file:
   ```bash
   g++ 1.cpp -o grade1
   ./grade1
```

💡 Purpose
Practice different C++ control structures (if-else, ternary, switch-case).

Understand basic grading logic.

Demonstrate clean code with user interaction.
