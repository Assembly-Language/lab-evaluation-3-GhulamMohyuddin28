INCLUDE Irvine32.inc
.data
sum DWORD 0

.code
SumNegativeNumber PROC p1:DWORD, p2:DWORD
    
    mov esi,p1 ; Loaing array pointer to ESI
    mov ecx, p2 ; Laod array size to ECX
    mov eax, 0

    Sum_Loop:
    CMP ecx, 0 ; Checking if array size is zero
    JE end_Loop
    
    
    mov ebx, [esi]
    CMP ebx, 0
    JGE skip_add

    add eax, ebx ; Adding Negative elements to EAX
    skip_add:
    add esi, 4 ; Moving to next array elemnts
    sub ecx,1 ; Decreasng the array size
    JMP Sum_Loop

    end_Loop:
    ret ; Returinging the sum to EAX
    SumNegativeNumber ENDP

end