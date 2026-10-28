#pragma once

#include <stdbool.h>

typedef struct	s_param {
	bool	verbose;
}	t_param;

enum	e_err {
	ERR_MISSHOST
};

//	msg.c
void	print_help(void);
void	print_err(int err_id);