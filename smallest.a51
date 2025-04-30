org 00h
mov r0,#04h
mov r1,#03h
mov dptr,#4000h
movx a,@dptr
skip:mov b,a
inc dptr
movx a,@dptr
cjne a,b,l1
l1:jc loop
mov a,b
loop:mov r3,a
djnz r1,skip
inc dptr
mov a,r3
movx @dptr,a
l4:sjmp l4
end