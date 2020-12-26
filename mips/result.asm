
.data
_prompt: .asciiz "Enter an integer:"
_ret: .asciiz "\n"
.align 2
array0:.space 1024

.globl main
.text
jal main
li $v0,10
syscall
read:
    li $v0,4
    la $a0,_prompt
    syscall
    li $v0,5
    syscall
    jr $ra

print:
    li $v0,1
    syscall
    li $v0,4
    la $a0,_ret
    syscall
    move $v0,$0
    jr $ra
main:
	li $t1,2
	li $t2,4
	mul $t3,$t2,$t1
	la $t1,array0

	li $t2,1
	move $t4,$t2
	li $t2,2
	move $t5,$t2
	li $t2,2
	move $t6,$t2
	li $t2,0
	move $t7,$t2
	li $t2,0
	move $t7,$t2
label0:
	li $t2,10
	blt $t7,$t2,label1
	j label2
label1:
	li $t2,5
	blt $t4,$t2,label3
	j label4
label3:
	li $t2,1
	add $t8,$t4,$t2
	move $t4,$t8
	j label5
label4:
	li $t2,5
	bge $t4,$t2,label6
	j label7
label6:
	li $t2,2
	add $t8,$t4,$t2
	move $t4,$t8
label7:
label5:
	li $t2,1
	add $t8,$t7,$t2
	move $t7,$t8
	j label0
label2:
label8:
	li $t2,40
	blt $t4,$t2,label9
	j label10
label9:
	li $t2,1
	add $t8,$t4,$t2
	move $t4,$t8
	j label8
label10:
	move $t0,$a0
	move $a0,$t4
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal print
	lw $ra,0($sp)
	addi $sp,$sp,4
	li $t2,0
	move $v0,$t2
	jr $ra
