# JobProfileManager

**JobProfileManager** is a C++ console application that demonstrates **class inheritance, method overriding, and polymorphism**. It models job profiles for different sectors and allows users to input and display profile details.

## Features

- **Profiles Base Class:**  
  Contains common attributes for any job profile:
  - `name`
  - `degree`
  - `Salarylimit`
  - `noofExperience`  

  Includes methods:
  - `SkilSet()` – Placeholder for entering skills or profile requirements.
  - `Show()` – Placeholder for displaying profile details.

- **SoftwareCompanies Derived Class:**  
  Overrides `SkilSet()` to display the stored profile details.

- **medicalRep Derived Class:**  
  Overrides `SkilSet()` to take input for Medical Representative profile requirements and `Show()` to display them.

## Prerequisites

- C++ compiler (e.g., GCC, MinGW, or Visual Studio)
- Basic understanding of C++ classes, inheritance, and polymorphism

## How to Run

1. Open the terminal or command prompt.
2. Compile the program:

```bash
g++ main.cpp -o JobProfileManager
