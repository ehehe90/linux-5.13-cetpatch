/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef _ASM_X86_PRCTL_H
#define _ASM_X86_PRCTL_H

#define ARCH_SET_GS		0x1001
#define ARCH_SET_FS		0x1002
#define ARCH_GET_FS		0x1003
#define ARCH_GET_GS		0x1004

#define ARCH_GET_CPUID		0x1011
#define ARCH_SET_CPUID		0x1012

#define ARCH_MAP_VDSO_X32	0x2001
#define ARCH_MAP_VDSO_32	0x2002
#define ARCH_MAP_VDSO_64	0x2003

#define ARCH_X86_CET_STATUS		0x3001
#define ARCH_X86_CET_DISABLE		0x3002
#define ARCH_X86_CET_LOCK		0x3003
#define ARCH_X86_CET_ALLOC_SHSTK	0x3004
#define ARCH_X86_CET_ENABLE		0x3005

#endif /* _ASM_X86_PRCTL_H */
