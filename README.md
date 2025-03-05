# Name Color Generator

The **Name Color Generator** is a command-line application inspired by an activity by **@jared__cross** on Instagram, where names are converted into unique RGB values.  

This program takes your **first, middle, and last names** and generates a distinct set of **RGB values** and a **hexadecimal color code**.

## How It Works

The algorithm follows these steps:
1. Each letter of your name is assigned a numerical value (A=1, B=2, …, Z=26).
2. The numerical values are summed and multiplied by `4`, then adjusted to stay within the `0–255` RGB range.
3. The resulting RGB values are combined into a hexadecimal color code that represents your name.

The program also features multiple **ASCII art themes** to enhance the user experience.

---

## Project Folder Structure

```plaintext
project/
├── main.c                  # Startup file for user interaction and the ASCII art menu
├── Makefile                # Build script to compile the project
├── README.md               # Documentation for the project
├── headers/
│   ├── namecolor.h         # Function prototypes and necessary includes
│   └── themes.h            # Declarations related to ASCII art themes
└── functions/
    ├── color_conversion.c  # Contains letter_calculator and RGB_to_Hex functions
    ├── input_handling.c    # Contains the get_name function to handle user input
    └── theme.c             # Contains functions for printing the ASCII art menu in various themes

```

How to Build
This project can be built using straightforward commands—no GNU Make required.

On Windows:
1. Open Command Prompt.
2. Navigate to the project directory.
3. Run the batch file:
        build.bat

On Unix/Linux/Mac:
1. Open Terminal.
2. Navigate to the project directory.
3. Execute the bash script:
        bash build.sh

# Themes
The Name Color Generator comes with several ASCII art themes to customize your startup experience:

1. Default: Bold, with ascii styled title.

2. Dark: A minimalist look with subdued tones.

3. Fun: A cute, minimal design.


## Authors
- **Torin Teale** - [SolarianVulpine](https://github.com/SolarianVulpine)
## Inspiration
- **Jared Cross** - [@jared__cross](https://www.instagram.com/jared__cross/)