#pragma once

#include <stdbool.h>

typedef struct	s_param {
	bool	verbose;
}	t_param;

enum	e_err {
	ERR_MISSHOST,
	ERR_UNKHOST
};

//	msg.c
void	print_help(void);
void	print_err(const int err_id);
void	print_err_arg(const int err_id, const char* arg);

//	ping.c
void	ping(const char* host);