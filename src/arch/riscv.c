#include "arch/probe.h"

#include <stdio.h>

#if __linux__

#include <elf.h>
#include <link.h> // ElfW macro
#include <sys/auxv.h>

#endif // __linux__

int ceph_arch_riscv_probe(void)
{
#if __linux__
#endif // __linux__
return 0;
}
