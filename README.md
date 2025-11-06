# 🏦 Bank Management System (C++)

## 📘 Overview
The **Bank Management System** is a simple console-based C++ application designed to perform basic banking operations such as creating new accounts, depositing/withdrawing money, and checking account details.  
It demonstrates **Object-Oriented Programming (OOP)** concepts and **file handling** in C++.

---

## 🎯 Project Objectives
- To automate basic banking operations.  
- To demonstrate the use of **classes, objects, and file handling** in C++.  
- To maintain account data persistently using binary file storage.

---

## ⚙️ Features
✅ Create a new bank account  
✅ Deposit money into an account  
✅ Withdraw money from an account  
✅ Check account balance  
✅ Modify existing account details  
✅ Delete an account  
✅ Display all customer accounts  

---

## 🧩 Technologies Used
| Component | Description |
|------------|-------------|
| Language | C++ |
| Compiler | GCC / Turbo C++ |
| Concepts | Classes, File Handling, Functions, Loops, Conditionals |
| Storage | Binary File (`account.dat`) |

---

## 🧱 Class Structure
**Class Name:** `Account`

| Member | Description |
|---------|-------------|
| `int accNo` | Account number |
| `char name[50]` | Account holder name |
| `char type` | Account type (S for Savings / C for Current) |
| `float balance` | Account balance |

**Key Member Functions:**
- `createAccount()` — Creates a new account  
- `showAccount()` — Displays account details  
- `deposit()` — Adds money to balance  
- `withdraw()` — Deducts money from balance  
- `modify()` — Updates account info  

---

## 🧠 Concepts Demonstrated
- Object-Oriented Programming (OOP)  
- File Input/Output (I/O)  
- Binary file operations  
- Menu-driven program design  
- Input validation and data persistence  

---

## 🖥️ How to Run
1. **Save** the code as `bank.cpp`.  
2. **Compile** the code using:
   ```bash
   g++ bank.cpp -o bank
   ```
3. **Run** the program:
   ```bash
   ./bank
   ```
4. A file named `account.dat` will be created automatically to store data.

---

## 📂 File Description
| File | Description |
|------|--------------|
| `bank.cpp` | Main source code |
| `account.dat` | Binary file storing account records |
| `README.md` | Project documentation |
| `Bank_Management_Presentation.pptx` | Project presentation slides |

---

## 🚀 Future Enhancements
- Add **password-protected login system**  
- Add **transaction history logs**  
- Implement **interest and fees calculation**  
- Create a **GUI version** using Qt or SFML  
- Migrate to **database storage** (e.g., MySQL)

---

## 🏁 Conclusion
The **Bank Management System in C++** serves as an excellent demonstration of fundamental programming principles such as OOP, file management, and structured coding.  
It’s an ideal mini project for beginners to understand how data-driven applications work.

---

## 👨‍💻 group project
**Name:** *Rahul kumar Ray
           Souradeep Mohanta
           Ridippon Baishya
**Institution:** *[ASSAM DOWN TOWN UNIVERSITY]*  

