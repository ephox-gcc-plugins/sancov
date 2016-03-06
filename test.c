#include <stdio.h>

void __sanitizer_cov_trace_pc(void)
{
	printf("SANCOV\n");
}

int main(int argc, char *argv[])
{
	return argc;
}
