; SECOND ASSEMBLY PROGRAM
		AREA PROG2, CODE, READONLY
ENTRY
		MOV R1, #16		; R1 := 0x10
		MOV R2, #42		; R2 := 0x2A
		MOV R3, #59		; R3 := 0x3B
		MOV R4, #76		; R4 := 0x4C
		MOV R5, #93		; R5 := 0x5D
		ADD R0, R1, R2	; R0 := R1 + R2
		ADD R0, R0, R3	; R0 := R0 + R3
		ADD R0, R0, R4	; RO := R0 + R4
		ADD R0, R0, R5	; R0 := R0 + R5
		
		END