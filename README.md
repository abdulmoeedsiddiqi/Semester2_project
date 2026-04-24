# 📚 OOP-Based Entry Test Management System

## 🎯 Project Overview

An object-oriented C++ application designed to conduct subject-specific entry tests for university admissions. The system features a secure login mechanism, subject-wise MCQ tests across multiple disciplines, automatic merit calculation, and faculty recommendations based on test performance.

## ✨ Key Features

- **🔐 Secure Login System** - Username and password authentication with limited attempts
- **📋 Test Instructions** - Comprehensive guidelines for test takers
- **🎓 Multiple Academic Fields** - Support for Pre-Engineering, ICS, and ICS with Statistics
- **📝 Subject-Wise Testing** - MCQs from 5 different subjects:
  - Physics
  - Chemistry  
  - Mathematics
  - Statistics
  - Computer Science
- **📊 Automatic Merit Calculation** - Weighted scoring system combining:
  - Entry test performance (50%)
  - FSc marks (30%)
  - Matric percentage (20%)
- **🏫 Faculty Recommendations** - Automated degree program suggestions based on merit
- **💾 User Data Persistence** - External file storage for registered users

## 🏗️ Class Architecture (OOP Concepts)

### **Base Class: `Subject`**
- Abstract base class with pure virtual function `solveMCQs()`
- Demonstrates **abstraction** and **polymorphism**

### **Derived Classes** (Inheritance)
- `Physics`, `Chemistry`, `Mathematics`, `Statistics`, `ComputerScience`
- Each overrides `solveMCQs()` with subject-specific questions
- Implements **runtime polymorphism**

### **Supporting Classes**
- `Instructions` - Manages test guidelines and warnings
- `Test` - Orchestrates the testing process and merit calculation

### **Key OOP Principles Implemented**
- ✅ **Encapsulation** - Private members with public interfaces
- ✅ **Inheritance** - Subject hierarchy
- ✅ **Polymorphism** - Virtual functions for subject-specific behavior
- ✅ **Abstraction** - Pure virtual functions in base class

## 🚀 Getting Started

### Prerequisites
- C++ compiler (g++, Visual Studio, or any C++17-compatible compiler)
- Basic understanding of command-line interface

### Compilation

**Using g++:**
```bash
