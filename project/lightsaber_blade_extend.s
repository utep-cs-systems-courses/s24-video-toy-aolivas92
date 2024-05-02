lightsaber_blade_extend:
    sub #4, r1
    
    mov.b #20, 0(r1)    ; top_height
    mov.b #110, 1(r1)   ; i = bottom_height
    mov.b r12, 2(r1)    ; saber_width_loc
    add.b #2, 2(r1)
    mov.b r13, 3(r1)    ; balde_color
    mov.b #0, 4(r1)     ; start_saber_height

top:
    cmp.b 0(r1), 1(r1)
    jge skip

    mov.b 2(r1), r12
    mov.b 1(r1), r13
    mov.b #7, r14
    mov.b 4(r1), r15
    mov.b 3(r1), r16
    call #fillRectangle

    add.b #10, 4(r1)

    mov #1000000, r12
    call #__delay_cycles

    sub.b #10, 1(r1)
    jmp top

skip:
    mov #1, r12
    add #4, r1
    pop r0
