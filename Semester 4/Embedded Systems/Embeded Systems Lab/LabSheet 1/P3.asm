; THIRD PROBLEM 
		AREA PROG3 CODE READONLY
ENTRY
		MOV R1, #Q
		MOV R2,	#R
		MOV R3,	#S
		ADD R0, R1, R2
		ADD R0, R3
STOP 	B STOP 
Q		EQU 6
R		EQU 2
S		EQU 5
		END