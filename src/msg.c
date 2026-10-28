#include <stdio.h>
#include <unistd.h>

#include "msg.h"

void	print_help(void) {
	printf(MSG_HELP);
}

void	print_err(int err_id) {
	dprintf(STDOUT_FILENO, "%s", errors[err_id]);
}