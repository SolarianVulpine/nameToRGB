# nameToRGB
This program is inspired by an activity by @jared__cross on Instagram in which he converts a person's name into a set of RGB values.
# Name Color Generator

The Name Color Generator is a command-line application that converts your first, middle, and last names into a unique set of RGB values and a hexadecimal color code. It employs a custom algorithm that:
- Converts each letter into a numerical value (A=1, B=2, …, Z=26)
- Sums these values, multiplies the result by 4, and then adjusts it to remain within the 0–255 RGB range
- Combines the individual RGB values into a complete hexadecimal color code

Additionally, the program offers multiple ASCII art themes to enhance the startup interface and overall user interactivity.

## Folder Structure

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


## How to Build

This project can be built without GNU Make using the provided build scripts.

### On Windows:
1. Open the Command Prompt.
2. Navigate to the project directory.
3. Run the batch file:
        build.bat

### On Unix/Linux/Mac:
1. Open the Command Prompt.
2. Navigate to project directory.
3. Run the bash file:
        build.sh

# Themes
Users can select from multiple ASCII menu themes to set the tone upon launching the application:

Default: A clear, modern welcome screen.

Dark: A minimalist, dark-themed look.

Fun: A playful, vibrant design for a more engaging experience.