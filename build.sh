#!/bin/bash
echo "Compiling Name Color Generator..."
gcc main.c functions/color_conversion.c functions/input_handling.c functions/theme.c -Iheaders -o namecolor

if [ $? -ne 0 ]; then
  echo "Compilation failed."
  exit 1
fi

echo "Build successful. Running program..."
./namecolor
