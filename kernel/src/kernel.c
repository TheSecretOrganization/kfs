#include "gdt/gdt.h"
#include "pic/pic.h"
#include "stdio.h"
#include "tty.h"

void kernel_main() {
	tty_init();
	pic_remap(0x20, 0x28);
	gdt_setup();
	gdt_load();
	printf("%d\n%s\n", 42, "Hello World!");
}
