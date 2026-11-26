; Ileto, Miguel R. | Marquez, James Benedict T. | S30I

section .text
bits 64
default rel
global imgCvtGrayFloatToInt

imgCvtGrayFloatToInt:
    ; height@rcx, width@rdx, vecfloat@xmm0, result@r8

    ret