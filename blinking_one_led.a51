org 0000h
again: setb P2.0
			 acall delay 
       clr P2.0
       acall delay
       sjmp again
delay:
       mov r2,#7
here1: mov r1,#255
here2: mov r0,#255
here3: djnz r0, here3               // Decrement and jump if not equal to zero
			 djnz r1, here2
			 djnz r2, here1
       ret 
       end