# Numerical Inequality Solver & Optimization Algorithm

This project is a C-based algorithmic implementation designed to solve a specific non-linear inequality problem by deriving coefficients from a seed value.

## 🚀 Project Overview

The algorithm works in three main phases:
1.  **Data Extraction (Hashing):** It takes a high-precision floating-point number (seed value) and parses its decimal components using modular arithmetic to calculate a coefficient (`t`).
2.  **Variable Optimization (Phase X):** It iterates through potential integer values for `x` to satisfy the inequality constraint within a specific convergence range (`0.05 ≤ result ≤ 0.3`).
3.  **Parameter Refinement (Phase Y):** Once `x` is fixed, the algorithm optimizes the `y` variable to find the precise solution set that fits the equation model.

## 🧮 The Mathematical Model

The core equation solved by the algorithm is:

$$0.05 \le \frac{(x^2 - 0.2y^3 - 3t)}{8} \le 0.3$$

Where `t` is dynamically calculated based on the input seed's decimal summation.

## 🛠️ Technical Implementation

* **Language:** C
* **Logic:** Iterative loops (Manual implementation for demonstration), Modular Arithmetic (`%`), Floating-point precision handling.
* **Usage:** The program outputs step-by-step calculations to the console, showing the convergence path towards the valid `x` and `y` values.

## 📂 File Structure

* `solver.c`: The main source code containing the extraction logic and the solver loop.

---
*This project was created to demonstrate low-level variable manipulation and algorithmic logic in C.*
