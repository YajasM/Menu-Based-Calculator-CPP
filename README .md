# 🧮 Advanced Console Calculator

A robust, menu-driven command-line calculator built in **C++**. This project transitions a foundational programming exercise into a resilient utility by integrating core arithmetic operations, algebraic functions, trigonometric calculations, and reliable mathematical input validation.

## 👤 Author
* **Name:** Yajas Malhotra
* **GitHub:** [@YajasM](https://github.com)

---

## 🚀 Features
The application provides a interactive menu managing 9 distinct operations alongside a clean interface:
* **Basic Arithmetic:** Addition (+), Subtraction (-), Multiplication (\*), and Division (/)
* **Algebraic Math:** Remainder/Modulo (%), Powers (\(A^B\)), Logarithms (\(\log_{10}\)), and Square Roots (\(\sqrt{x}\))
* **Trigonometry:** Radian-based calculation functions for \(\sin(x)\), \(\cos(x)\), and \(\tan(x)\)
* **Continuous Execution:** An interactive loop running consistently until the user chooses to exit

---

## 🛠️ Built-in Resilience & Debugging
The initial logic was enhanced to address edge-case mathematical anomalies that typically cause command-line runtime crashes or mathematical inconsistencies (such as yielding `nan` or `inf`). 

> 💡 **AI Collaboration Note:** 
> I integrated **Gemini** to audit the project logic, identify hidden logic gaps, and surface prospective operational faults. Using those insights, I implemented rigorous error handling blocks to capture:
> * Division and Modulo inputs by zero boundaries
> * Real-number domains for negative square roots 
> * Domain evaluation traps for zero or negative value logarithms
> * Invalid secondary configuration menu triggers

---

## 🖥️ How to Run Locally

### Prerequisites
Ensure you have a C++ compiler installed (like `g++` via GCC or Clang).

### Execution Steps
1. **Clone the repository:**
   ```bash
   git clone https://github.com/YOUR_REPO_NAME.git
   cd YOUR_REPO_NAME
   ```

2. **Compile the program:**
   ```bash
   g++ -O3 main.cpp -o calculator
   ```

3. **Run the executable:**
   ```bash
   ./calculator
   ```

---

## 📈 Future Enhancements
* Incorporate an automated **Degrees-to-Radians** pre-converter for accessible trigonometric entries.
* Implement a robust tokenizing string parser to read whole custom math expressions (e.g., `5 + 3 * 2`) inline.
