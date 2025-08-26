org 0000h
  mov a, 0ffh
again: mov P2 , a
			 acall delay 
       cpl a
       sjmp again
delay:
       mov r2,#7
here1: mov r1,#255
here2: mov r0,#255
here3: djnz r0, here3
			 djnz r1, here2
			 djnz r2, here1
       ret 
       end