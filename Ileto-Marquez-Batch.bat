nasm -f win64 Ileto-Marquez-SASM.asm
gcc -c Ileto-Marquez-C.c -o cIleto-Marquez-C.obj -m64
gcc cIleto-Marquez-C.obj Ileto-Marquez-SASM.obj -o cIleto-Marquez.exe -m64
cIleto-Marquez.exe