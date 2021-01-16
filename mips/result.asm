
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
fun:
	mul $t1,$a0,$a0
	move $t2,$t1
	move $v0,$t2
	jr $ra
main:
	li $t1,1
	move $t3,$t1
	li $t1,2
	move $t4,$t1
	li $t1,3
	move $t5,$t1
	li $t1,2
	li $t6,4
	mul $t7,$t6,$t1
	la $t1,array0

	li $t6,0
	move $t8,$t6
	li $t6,0
	move $t8,$t6
label0:
	li $t6,10
	blt $t8,$t6,label1
	j label2
label1:
	li $t6,5
	blt $t3,$t6,label3
	j label4
label3:
	li $t6,1
	add $s0,$t3,$t6
	move $t3,$s0
	j label5
label4:
	li $t6,5
	bge $t3,$t6,label6
	j label7
label6:
	li $t6,2
	add $s0,$t3,$t6
	move $t3,$s0
label7:
label5:
	li $t6,1
	add $s0,$t8,$t6
	move $t8,$s0
	j label0
label2:
label8:
	li $t6,40
	blt $t3,$t6,label9
	j label10
label9:
	li $t6,1
	add $s0,$t3,$t6
	move $t3,$s0
	j label8
label10:
	li $t6,0
	li $s0,4
	mul $s1,$t6,$s0
	add $t6,$t1,$s1

	li $s0,10
	sw $s0 0($t6)

	move $t0,$a0
	move $a0,$t3
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal print
	lw $ra,0($sp)
	addi $sp,$sp,4
	li $t6,0
	li $s0,4
	mul $s1,$t6,$s0
	add $t6,$t1,$s1

	move $t0,$a0
	lw $a0,0($t6)
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal print
	lw $ra,0($sp)
	addi $sp,$sp,4
	move $t0,$a0
	move $a0,$t5
	addi $sp,$sp,-24
	sw $t0,0($sp)
	sw $ra,4($sp)
	sw $t1,8($sp)
	sw $t2,12($sp)
	sw $t3,16($sp)
	sw $t4,20($sp)
	jal fun
	lw $a0,0($sp)
	lw $ra,4($sp)
	lw $t1,8($sp)
	lw $t2,12($sp)
	lw $t3,16($sp)
	lw $t4,20($sp)
	addi $sp,$sp,24
	move $t6 $v0
	move $t0,$a0
	move $a0,$t6
	addi $sp,$sp,-4
	sw $ra,0($sp)
	jal print
	lw $ra,0($sp)
	addi $sp,$sp,4
	li $t6,0
	move $v0,$t6
	jr $ra
