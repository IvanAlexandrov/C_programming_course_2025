	.file	"2.c"
	.text
	.def	printf;	.scl	3;	.type	32;	.endef
	.seh_proc	printf
printf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rbx
	movl	$1, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rax, %rcx
	movq	32(%rbp), %rax
	movq	%rbx, %r8
	movq	%rax, %rdx
	call	__mingw_vfprintf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.globl	is_prime
	.def	is_prime;	.scl	2;	.type	32;	.endef
	.seh_proc	is_prime
is_prime:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	cmpl	$1, 16(%rbp)
	jg	.L4
	movl	$0, %eax
	jmp	.L5
.L4:
	movl	$2, -4(%rbp)
	jmp	.L6
.L8:
	movl	16(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L7
	movl	$0, %eax
	jmp	.L5
.L7:
	addl	$1, -4(%rbp)
.L6:
	movl	16(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	cmpl	%eax, -4(%rbp)
	jl	.L8
	movl	$1, %eax
.L5:
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	common_denominator
	.def	common_denominator;	.scl	2;	.type	32;	.endef
	.seh_proc	common_denominator
common_denominator:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movl	$2, -4(%rbp)
	movl	$1, -12(%rbp)
	jmp	.L10
.L15:
	cmpl	$0, -8(%rbp)
	jne	.L11
.L12:
	addl	$1, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	is_prime
	testl	%eax, %eax
	je	.L12
.L11:
	movl	$0, -8(%rbp)
	movl	16(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L13
	movl	16(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%eax, 16(%rbp)
	movl	$1, -8(%rbp)
.L13:
	movl	24(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L14
	movl	24(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%eax, 24(%rbp)
	movl	$1, -8(%rbp)
.L14:
	cmpl	$0, -8(%rbp)
	je	.L10
	movl	-12(%rbp), %eax
	imull	-4(%rbp), %eax
	movl	%eax, -12(%rbp)
.L10:
	cmpl	$1, 16(%rbp)
	jne	.L15
	cmpl	$1, 24(%rbp)
	jne	.L15
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "Result: %d\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$12, -4(%rbp)
	movl	$18, -8(%rbp)
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	common_denominator
	movl	%eax, %edx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev6, Built by MSYS2 project) 13.2.0"
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
