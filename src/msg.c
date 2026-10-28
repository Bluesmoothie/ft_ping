#include <stdio.h>
#include <unistd.h>

#include "msg.h"

void	print_help(void) {
	printf(MSG_HELP);
}

void	print_err(const int err_id) {
	dprintf(STDOUT_FILENO, "ft_ping: %s", errors[err_id]);
}

void	print_err_arg(const int err_id, const char* arg) {
	dprintf(STDOUT_FILENO, "ft_ping: %s: %s", arg, errors[err_id]);
}