# Trigonometric Ceva

In triangle ABC, three Cevians AD, BE, and CF are concurrent if and only if the following identity holds:

(AF / FB) · (BD / DC) · (CE / EA) = 1

This known as Ceva's Theorem. The theorem also has a lesser-known trigonometric form:

```
(sin(∠ABE) / sin(∠CBE)) · (sin(∠BCF) / sin(∠ACF)) · (sin(∠CAD) / sin(∠BAD)) = 1
```

or equivalently

```
sin(∠ABE) · sin(∠BCF) · sin(∠CAD) = sin(∠CBE) · sin(∠ACF) · sin(∠BAD)
```

## About

**Trigonometric Ceva** is a Python implementation that solves for the unknown angle in the trigonometric form of Ceva's Theorem. It helps determine the angle required for the concurrency of three cevians in a triangle using numerical methods.

## Features

- User-friendly command-line interface
- High-precision numerical solver using `scipy.optimize.fsolve`
- Input and output in degrees
- Clean and readable code, easy to modify or integrate into other projects
- Handles the common case where the equation is of the form:  
  sin(a₁) * sin(a₂) * sin(x) = sin(b₁) * sin(b₂) * sin(b₃ - x)

## Requirements

### Python Version
- **Python 3.8** or higher (recommended: Python 3.10+)

### Dependencies
```bash
numpy
scipy
```

## Installation

1. Clone the repository:
```bash
git clone https://github.com/428937/Trigonometric_Ceva.git
cd Trigonometric_Ceva
```

2. Install the required packages:
```bash
pip install numpy scipy
```

## Usage

Run the main script:

```bash
python Main.py
```

## Example

The program will prompt you to enter five angles (in degrees). A typical trigonometric Ceva setup might look like:

```
sin(10°) · sin(26°) · sin(x) = sin(22°) · sin(24°) · sin(98° - x)
```

Enter the values when prompted and the program will output the solution for `x`.

**Sample Output:**
```
Solution found!
x = 70.000 degrees 
```

## Project Structure

```
Trigonometric_Ceva/
├── Main.py          # Main script with user interface and solver
├── README.md        # This file
└── LICENSE
```

You can also import and use the equation function directly in your own scripts.

## Mathematical Background

The solver finds the root of the function:

```
f(x) = sin(a₁) · sin(a₂) · sin(x) - sin(b₁) · sin(b₂) · sin(b₃ - x)
```

It uses numerical root-finding to locate the value(s) of `x` that satisfy the trigonometric Ceva condition.

## Resources & Further Reading

- [Cut-the-Knot: Trigonometric Form of Ceva's Theorem](https://www.cut-the-knot.org/triangle/TrigCeva.shtml)
- [Wikipedia - Ceva's Theorem](https://en.wikipedia.org/wiki/Ceva%27s_theorem)
- [Art of Problem Solving - Ceva's Theorem](https://artofproblemsolving.com/wiki/index.php/Ceva%27s_Theorem)