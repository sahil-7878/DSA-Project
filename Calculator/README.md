# 🧮 Calculator Application

A simple yet powerful command-line calculator built in C++ that supports basic arithmetic operations.

## ✨ Features

- ➕ Addition of two numbers
- ➖ Subtraction of two numbers
- ✖️ Multiplication of two numbers
- ➗ Division of two numbers
- 🔢 Modulus operation

## 🚀 How to Use

1. Compile the program using a C++ compiler:
   ```
   g++ calc.cpp -o calculator
   ```

2. Run the executable:
   ```
   ./calculator
   ```

3. Choose an operation by entering the corresponding number:
   - Press 1 for addition
   - Press 2 for subtraction
   - Press 3 for multiplication
   - Press 4 for division
   - Press 5 for modulus
   - Press 0 to exit

4. Enter the two numbers when prompted.

5. View the result!

## 📋 Example Usage

```
Press 1 for addition
Press 2 for subtraction
Press 3 for multiplication
Press 4 for division
Press 5 for modulus
Press 0 for exit
Enter your choice: 1
Enter num1: 5
Enter num2: 7
addition is: 12
```

## 🛠️ Technical Details

This calculator implements functions for each arithmetic operation:
- `addition(double a, double b)`
- `subtraction(double a, double b)`
- `multiplication(double a, double b)`
- `division(double a, double b)`
- `modulus_op(double a, double b)`

Each function prompts the user for two numbers and returns the result of the operation.

## 📝 Note

- The division operation does not handle division by zero, so be careful when inputting values.
- The modulus operation uses the `fmod()` function from the `cmath` library to handle floating-point modulus.

## 🔄 Future Improvements

- Add error handling for division by zero
- Implement more advanced mathematical operations (powers, roots, etc.)
- Add memory functions to store and recall values
- Create a more user-friendly interface

## 👨‍💻 Author

Created as part of DSA Projects

---

⭐ Feel free to star and fork this project if you find it useful! ⭐