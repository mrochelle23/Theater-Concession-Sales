# Theater Concession Sales

## Overview

The Theater Concession Sales program calculates and displays the income generated from ticket sales and concessions for both evening and matinee shows. It provides a breakdown of total income and the percentage contribution from ticket sales and concessions.

## Features

- Calculates income from evening and matinee shows based on predefined ticket and concession prices.
- Computes the percentage of total income contributed by ticket sales and concessions.
- Displays a detailed summary of income from both types of shows.

## Technologies Used

- C++

## File Structure

```
theater-concession-sales/
│
├── main.cpp                      # Main C++ source file containing the program logic
```

## Getting Started

1. Clone the repository:
   ```bash
   git clone https://github.com/mrochelle23/Theater-Concession-Sales.git
   ```
2. Navigate to the project directory:
   ```bash
   cd Theater-Concession-sales
   ```
3. Compile the program using a C++ compiler (e.g., g++):
   ```bash
   g++ main.cpp -o Theater-Concession-sales
   ```

4. Run the executable:
   ```bash
   ./Theater-Concession-sales
   ```

## Usage

- The program calculates the income from ticket sales and concessions for evening and matinee shows using predefined values.
- It displays the total income along with the percentage contribution from ticket sales and concessions for both types of shows.

## Example Output

```
Evening Show Income:
   Ticket Sales: $12.00 (  58.82%)
   Concession: $ 8.50 ( 41.18%)

Matinee Show Income:
   Ticket Sales: $ 5.00 (  32.26%)
   Concessions: $10.50 ( 67.74%)
```

## Code Explanation

- **Constants**: The ticket prices and average concession sales are defined as constants for easy adjustments.
- **Income Calculation**: The program calculates total income from ticket sales and concessions for evening and matinee shows.
- **Percentage Calculation**: It computes the percentage of total income that comes from ticket sales and concessions.
- **Output Formatting**: The output is formatted to display two decimal places for monetary values.

## STRETCH CHALLENGES

- Allow user input for ticket prices and concession averages to make the program more dynamic.
- Add functionality to handle multiple showtimes and aggregate income across several shows.
- Implement error handling for input values.

