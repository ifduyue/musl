int __set_thread_area(void *p)
{
	__asm__ __volatile__ ("msr tpidr_el0,%0" : : "r"(p) : "memory");
	return 0;
}
