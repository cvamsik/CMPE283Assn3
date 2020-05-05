#include <stdio.h>

int main()
{

 
 int a[3];

printf("eax = 0x4fffffff\n");
__asm__("mov $0x4fffffff, %eax\n\t");
__asm__("cpuid\n\t");
__asm__("mov %%ebx, %0\n\t":"=r" (a[0]));
__asm__("mov %%edx, %0\n\t":"=r" (a[1]));
__asm__("mov %%ecx, %0\n\t":"=r" (a[2]));
printf ("Output : %d\n", a[0]);
  return 0;
}

