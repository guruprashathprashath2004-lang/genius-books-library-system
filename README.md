# Genius Books – Bookshop Management System

A console-based bookshop management system written in C++, with separate **Admin** and **Customer** roles and file-based data storage.

## Features
- Admin and Customer registration, login and password recovery
- **Admin:** add, view, update and delete books
- **Admin:** sales management (record sales, view total sales)
- **Customer:** browse available books
- Data persisted in plain text files (file handling)

## Tech Stack
- C++ (`iostream`, `fstream`, `iomanip`)
- Windows console (`conio.h`, `system("cls")`)

## Requirements
- Windows OS (uses `conio.h`)
- g++ (MinGW) or Visual Studio / Dev-C++

## How to Run
```bash
g++ Library_System.cpp -o library_system
library_system.exe
```

## Data Files
| File | Purpose |
|------|---------|
| `books.txt` | Book records (`ID,Title,Author,Genre,Pages,Price`). A sample file is included. |
| `adminlogin.txt` | Admin accounts (created at runtime, git-ignored) |
| `customerlogin.txt` | Customer accounts (created at runtime, git-ignored) |
| `sales.txt` | Sales records (created at runtime, git-ignored) |

## Known Limitations
- Windows only
- Passwords are stored in plain text (academic project – not for production use)

## Author
Dhanu – HND Computing, ICBT Campus (Cardiff Metropolitan University)
