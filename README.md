<p align="center">
  <img src="banner.png" alt="TOC ASSI Banner" width="800">
</p>

# 🧮 Theory of Computation (TOC) – 5th Semester Assignments

[![Language - C](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)](https://developer.ibm.com/languages/c/)
[![Language - C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B)](https://isocpp.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge)](https://opensource.org/licenses/MIT)

This repository contains academic assignments for the **Theory of Computation (TOC)** course. The implementations are cleanly separated into **C** and **C++** at the root level, demonstrating core automata theories (DFA/NFA validation, Moore/Mealy machines, complement computation, and binary mathematics).

---

## 📂 Repository Structure

The assignments are organized by programming language. Click on any link below to access the code, diagrams, or run screenshots.

### 🔵 C Language Assignments (`C/`)

| # | Assignment / Problem Statement | Source Code | State Diagram / Automata | Console Output |
| :---: | :--- | :---: | :---: | :---: |
| **01** | **Binary String Validator** | [is_binary_string.c](C/01_Binary_String_Validator/is_binary_string.c) | [Diagram](C/01_Binary_String_Validator/is_binary_string_diagram.png) | [Screenshot](C/01_Binary_String_Validator/is_binary_string_console.png) |
| **02** | **At Least One Zero** | [at_least_one_zero.c](C/02_At_Least_One_Zero/at_least_one_zero.c) | [Diagram](C/02_At_Least_One_Zero/at_least_one_zero_c_diagram.png) | [Screenshot](C/02_At_Least_One_Zero/at_least_one_zero_c_console.png) |
| **03** | **At Most One Zero** | [at_most_one_zero.c](C/03_At_Most_One_Zero/at_most_one_zero.c) | [Diagram](C/03_At_Most_One_Zero/at_most_one_zero_c_diagram.png) | [Screenshot](C/03_At_Most_One_Zero/at_most_one_zero_c_console.png) |
| **04** | **Exactly One Zero** | [exactly_one_zero.c](C/04_Exactly_One_Zero/exactly_one_zero.c) | [Diagram](C/04_Exactly_One_Zero/exactly_one_zero_c_diagram.png) | [Screenshot](C/04_Exactly_One_Zero/exactly_one_zero_c_console.png) |
| **05** | **Three Consecutive Zeros** | [three_consecutive_zeros.c](C/05_Three_Consecutive_Zeros/three_consecutive_zeros.c) | [Diagram](C/05_Three_Consecutive_Zeros/three_consecutive_zeros_c_diagram.png) <br> [DFA Design](C/05_Three_Consecutive_Zeros/three_consecutive_zeros_c_dfa.png) | [Screenshot](C/05_Three_Consecutive_Zeros/three_consecutive_zeros_c_console.png) |
| **06** | **Odd/Even Zeros and Ones** | - | [Diagram](C/06_Odd_Even_Zeros_and_Ones/odd_even_zeros_and_ones_diagram.png) | [Screenshot](C/06_Odd_Even_Zeros_and_Ones/odd_even_zeros_and_ones_console.png) |

<br>

### 🟢 C++ Language Assignments (`CPP/`)

| # | Assignment / Problem Statement | Source Code | State Diagram / Automata | Console Output |
| :---: | :--- | :---: | :---: | :---: |
| **01** | **At Least One Zero** | [at_least_one_zero.cpp](CPP/01_At_Least_One_Zero/at_least_one_zero.cpp) | [Diagram](CPP/01_At_Least_One_Zero/at_least_one_zero_cpp_diagram.png) | [Screenshot](CPP/01_At_Least_One_Zero/at_least_one_zero_cpp_console.png) |
| **02** | **At Most One Zero** | [at_most_one_zero.cpp](CPP/02_At_Most_One_Zero/at_most_one_zero.cpp) | [Diagram](CPP/02_At_Most_One_Zero/at_most_one_zero_cpp_diagram.png) | [Screenshot](CPP/02_At_Most_One_Zero/at_most_one_zero_cpp_console.png) |
| **03** | **Exactly One Zero** | [exactly_one_zero.cpp](CPP/03_Exactly_One_Zero/exactly_one_zero.cpp) | [Diagram](CPP/03_Exactly_One_Zero/exactly_one_zero_cpp_diagram.png) | [Screenshot](CPP/03_Exactly_One_Zero/exactly_one_zero_cpp_console.png) |
| **04** | **Three Consecutive Zeros** | [three_consecutive_zeros.cpp](CPP/04_Three_Consecutive_Zeros/three_consecutive_zeros.cpp) | [Diagram](CPP/04_Three_Consecutive_Zeros/three_consecutive_zeros_cpp_diagram.png) | [Screenshot](CPP/04_Three_Consecutive_Zeros/three_consecutive_zeros_cpp_console.png) |
| **05** | **Ends with '101'** | [ends_with_101.cpp](CPP/05_Ends_With_101/ends_with_101.cpp) | [Diagram](CPP/05_Ends_With_101/ends_with_101_cpp_diagram.png) | [Screenshot](CPP/05_Ends_With_101/ends_with_101_cpp_console.png) |
| **06** | **Modulo 3 (Base 2)** | [modulo_3_base_2.cpp](CPP/06_Modulo_3_Base_2/modulo_3_base_2.cpp) | - | - |
| **07** | **Modulo 3 (Base 10)** | [modulo_3_base_10.cpp](CPP/07_Modulo_3_Base_10/modulo_3_base_10.cpp) | - | - |
| **08** | **Count Zeros and Ones** | [count_zeros_and_ones.cpp](CPP/08_Count_Zeros_and_Ones/count_zeros_and_ones.cpp) | [Diagram](CPP/08_Count_Zeros_and_Ones/count_zeros_and_ones_diagram.png) | [Screenshot](CPP/08_Count_Zeros_and_Ones/count_zeros_and_ones_console.png) |
| **09** | **2's Complement Generator** | [2s_complement.cpp](CPP/09_2s_Complement/2s_complement.cpp) | - | - |
| **10** | **Increment Binary Number by 1** | [increment_by_one.cpp](CPP/10_Increment_by_One/increment_by_one.cpp) | - | - |

---

## ⚡ How to Compile & Run

### Prerequisites
Ensure you have `gcc` (for C programs) and `g++` (for C++ programs) installed on your system.

### Compilation Commands

1. **For C programs:**
   ```bash
   gcc C/<assignment_folder>/<filename>.c -o output
   ./output
   ```
   *Example:*
   ```bash
   gcc C/02_At_Least_One_Zero/at_least_one_zero.c -o output
   ./output
   ```

2. **For C++ programs:**
   ```bash
   g++ CPP/<assignment_folder>/<filename>.cpp -o output
   ./output
   ```
   *Example:*
   ```bash
   g++ CPP/01_At_Least_One_Zero/at_least_one_zero.cpp -o output
   ./output
   ```

---

## 📖 Report & Documentation
The consolidated outputs for C assignments 1 through 6 are available in the [docs/1-6_TOC_output.pdf](docs/1-6_TOC_output.pdf).

---

## ✍️ Submitted By

| Student Name | Enrollment No. | Course / Semester |
| :--- | :---: | :--- |
| **Vivek Kumar Choudhary** | 0873AL231027 | B.Tech CSE(AIML) – 6th Semester |
| **Anil Yadav** | 0873CS231014 | B.Tech CSE – 5th Semester |

* **Institution:** University College / Institute of Technology


---

## 📜 License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
