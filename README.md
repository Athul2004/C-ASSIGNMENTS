# C Programming Assignment Collection

A comprehensive collection of C programming assignments organized by difficulty level and topic area. This project covers fundamental programming concepts through advanced data structures and algorithms.

---

## 📋 Table of Contents

- [Project Overview](#project-overview)
- [Project Structure](#project-structure)
- [Getting Started](#getting-started)
- [Program Categories](#program-categories)
- [Compilation & Execution](#compilation--execution)
- [Prerequisites](#prerequisites)

---

## 📖 Project Overview

This project contains **27 C programming assignments** organized into 6 main categories:

- **Basic**: Fundamental programming concepts (4 programs)
- **Function**: Function implementation and algorithms (6 programs)
- **Strings**: String manipulation and analysis (7 programs)
- **Bit Manipulation**: Bitwise operations (4 programs)
- **Array**: Array operations and manipulations (6 programs)
- **Structure**: Complex data types using structures (1 program)

Each program includes detailed problem descriptions, solution code, and sample output documentation.

---

## 📁 Project Structure

```
C_assignment/
├── Basic/
│   ├── 1_check_even_odd/
│   ├── 2_check_prime/
│   ├── 3_calculate_factorial/
│   └── 4_fibonacci_series/
├── Function/
│   ├── 5_Perfect_number/
│   ├── 6_Euclidean_algorithm/
│   ├── 7_count_freq/
│   ├── 8_decimal_to_base/
│   └── 9_arthmetic_exp/
├── Strings/
│   ├── 10_string_to_integer/
│   ├── 11_integer_to_string/
│   ├── 12_palindrome_check/
│   ├── 13_reverse_string/
│   ├── 14_pangram_check/
│   ├── 15_remove_extra_space/
│   └── 16_covrt_upp_low_case/
├── Bit_Manipulation/
│   ├── 17_toggle_n_bit/
│   ├── 18_extract_n_bit/
│   ├── 19_replace_bit/
│   └── 20_swap_n_bit/
├── Array/
│   ├── 21_remove_dup_element/
│   ├── 22_sec_larg_small/
│   ├── 23_rotate_array/
│   ├── 24_merge_two/
│   ├── 25_all_pairs_sum/
│   └── 26_Rearrange_neg/
└── Structure/
    └── 27_struct_complex_real_imag/
```

Each program folder contains:
- **`*.c`** - C source code file
- **`output.md`** - Expected output and test cases documentation

---

## 🚀 Getting Started

### Prerequisites

- **GCC Compiler** (MinGW on Windows)
- **VS Code** or any C-compatible IDE
- **Basic command-line knowledge**

### Installation

1. **Install MinGW (Windows)**:
   - Download from: https://www.mingw-w64.org/
   - Add to PATH: `C:\msys64\mingw64\bin`

2. **Verify Installation**:
   ```bash
   gcc --version
   ```

---

## 📚 Program Categories

### 1️⃣ **Basic Programs** (`Basic/`)
Fundamental C programming concepts and simple algorithms.

| # | Program | Description |
|---|---------|-------------|
| 1 | `check_even_odd` | Determine if a number is even or odd |
| 2 | `check_prime` | Identify prime numbers |
| 3 | `calculate_factorial` | Compute factorial of a number |
| 4 | `fibonacci_series` | Generate Fibonacci sequence |

**Skills**: Variables, Operators, Conditional Statements, Loops

---

### 2️⃣ **Function Programs** (`Function/`)
Programs demonstrating function implementation and mathematical algorithms.

| # | Program | Description |
|---|---------|-------------|
| 5 | `Perfect_number` | Check if a number is perfect |
| 6 | `Euclidean_algorithm` | Find GCD using Euclidean method |
| 7 | `count_freq` | Count frequency of numbers/characters |
| 8 | `decimal_to_base` | Convert decimal to different bases |
| 9 | `arthmetic_exp` | Evaluate arithmetic expressions |

**Skills**: Functions, Mathematical Algorithms, Modular Programming

---

### 3️⃣ **String Programs** (`Strings/`)
String manipulation, conversion, and analysis operations.

| # | Program | Description |
|---|---------|-------------|
| 10 | `string_to_integer` | Convert string to integer |
| 11 | `integer_to_string` | Convert integer to string |
| 12 | `palindrome_check` | Check if string is palindrome |
| 13 | `reverse_string` | Reverse string content |
| 14 | `pangram_check` | Verify if string is a pangram |
| 15 | `remove_extra_space` | Remove extra spaces from string |
| 16 | `covrt_upp_low_case` | Convert uppercase to lowercase and vice versa |

**Skills**: String Handling, Character Manipulation, Array Processing

---

### 4️⃣ **Bit Manipulation Programs** (`Bit_Manipulation/`)
Bitwise operations and bit-level manipulations.

| # | Program | Description |
|---|---------|-------------|
| 17 | `toggle_n_bit` | Toggle specific bit in a number |
| 18 | `extract_n_bit` | Extract nth bit from a number |
| 19 | `replace_bit` | Replace bits at specific positions |
| 20 | `swap_n_bit` | Swap bits in a number |

**Skills**: Bitwise Operators, Binary Operations, Bit Manipulation

---

### 5️⃣ **Array Programs** (`Array/`)
Array operations, transformations, and algorithms.

| # | Program | Description |
|---|---------|-------------|
| 21 | `remove_dup_element` | Remove duplicate elements from array |
| 22 | `sec_larg_small` | Find second largest/smallest element |
| 23 | `rotate_array` | Rotate array elements |
| 24 | `merge_two` | Merge two sorted arrays |
| 25 | `all_pairs_sum` | Find all pairs with given sum |
| 26 | `Rearrange_neg` | Rearrange negative and positive numbers |

**Skills**: Array Manipulation, Sorting, Searching, Algorithms

---

### 6️⃣ **Structure Programs** (`Structure/`)
Complex data types using structures.

| # | Program | Description |
|---|---------|-------------|
| 27 | `struct_complex_real_imag` | Complex number using structures |

**Skills**: Structures, Composite Data Types

---

## 🔧 Compilation & Execution

### Method 1: Command Line Compilation

```bash
# Navigate to program directory
cd Basic/1_check_even_odd

# Compile the program
gcc 1_check_even_odd.c -o 1_check_even_odd.exe

# Run the program
.\1_check_even_odd.exe
```

### Method 2: Using VS Code Build Task

1. Open the `.c` file in VS Code
2. Press `Ctrl + Shift + B` to build (uses the configured gcc task)
3. An `.exe` file will be generated in the same directory
4. Run from terminal: `.\program_name.exe`

### Method 3: Automated Compilation Script

Create a `compile.bat` script in any program directory:

```batch
@echo off
gcc %~n0.c -o %~n0.exe
if %errorlevel% equ 0 (
    echo Compilation successful!
    %~n0.exe
) else (
    echo Compilation failed!
)
```

---

## 📝 Example: Running Program 1

```bash
# Navigate to directory
cd Basic\1_check_even_odd

# Compile
gcc 1_check_even_odd.c -o 1_check_even_odd.exe

# Execute
.\1_check_even_odd.exe

# Expected Output
# Enter a number: 4
# The number is even.
```

---

## 🛠️ Development Environment

### Recommended Tools

- **VS Code** - Code Editor
- **MinGW/GCC** - C Compiler
- **GDB** - Debugger (included with MinGW)
- **Make** - Build automation (optional)

### VS Code Extensions (Optional)

- C/C++ IntelliSense
- Code Runner
- Better Comments

---

## 📊 Program Statistics

| Category | Count | Topics |
|----------|-------|--------|
| Basic | 4 | Conditionals, Loops |
| Function | 5 | Functions, Algorithms |
| Strings | 7 | String Processing |
| Bit Manipulation | 4 | Bitwise Operations |
| Array | 6 | Array Algorithms |
| Structure | 1 | Data Structures |
| **TOTAL** | **27** | **Multiple Topics** |

---

## 💡 Learning Path

**Beginner** → Basic (Programs 1-4)
↓
**Intermediate** → Function (5-9), Strings (10-16)
↓
**Advanced** → Bit Manipulation (17-20), Array (21-26)
↓
**Expert** → Structure (27)

---

## 🔍 Testing & Output Verification

Each program includes an `output.md` file documenting:
- Expected program output
- Sample test cases
- Edge cases and special inputs
- Example runs

Check these files to verify your program execution is correct.

---

## 📌 Tips for Success

1. **Understand the Problem**: Read the comments in each `.c` file carefully
2. **Follow Prerequisites**: Learn concepts mentioned in "Pre-requisites"
3. **Test Thoroughly**: Use edge cases and various inputs
4. **Reference Output**: Compare your output with `output.md` files
5. **Debug Systematically**: Use GDB debugger for complex issues

---

## 🐛 Common Issues

| Issue | Solution |
|-------|----------|
| `gcc: command not found` | Add MinGW to system PATH |
| `.exe` won't run | Check file compiled successfully |
| Wrong output | Verify logic against problem description |
| Compilation errors | Check syntax and #include statements |

---

## 📄 License & Usage

These programs are educational assignments. Feel free to use them for learning C programming concepts.

---

## ✉️ Notes

- Each program focuses on specific C concepts
- Comments in code explain the problem and approach
- Output files document expected results
- Programs are beginner-friendly with clear structure

---

**Last Updated**: 2026-06-11

---

**Thank u**
