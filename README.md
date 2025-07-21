![](https://upload.wikimedia.org/wikipedia/commons/f/f4/Raylib_logo.png)

> # Introduction to raylib

- raylib is a simple and easy-to-use C library to learn game programming. It is designed to be highly readable and beginner-friendly, making it perfect for creating 2D and 3D games while learning the fundamentals of C/C++ and graphics programming.

🔗 Official Website: https://www.raylib.com
🔗 GitHub Repository: https://github.com/raysan5/raylib

> ## Manual Setup (Windows using W64Devkit)

- This guide will help you manually set up raylib with W64Devkit, a minimalist GCC toolchain for Windows.

> ### Step 1: Download W64Devkit
- Go to: https://github.com/skeeto/w64devkit 
- Download the latest w64devkit-x.xx.x.zip

Extract it to:
```
C:\w64devkit
```

> ### Step 2: Download raylib for MinGW
- Go to: https://github.com/raysan5/raylib/releases
- Download: raylib-5.0_win64_mingw-w64.zip
- Extract the include/ and lib/ folders into:
```
C:\w64devkit\x86_64-w64-mingw32
```


> ### Step 3: Launch the Compiler
- Open C:\w64devkit

- Run w64devkit.exe — this opens a terminal window with GCC ready.

> ### Step 4: Compile a raylib Program
- In the terminal, compile your .c file like this:

```
gcc -o pixel1.exe  pixel.cpp -lraylib -lgdi32 -lwinmm
```

> ### step 5: Run the program
- run the exe file

```
./pixel1.exe
```

✅ You now have a working setup to build raylib games manually on Windows!



