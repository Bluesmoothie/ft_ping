#include <stdlib.h>
#include <unistd.h>

#include "ft_ping.h"

int	main(int argc, char** argv) {
	t_param	param = { 0 };
	int	opt;

	while ((opt = getopt(argc, argv, "v?")) != -1) {
		switch(opt) {
			case 'v':
				param.verbose = true;
				break;
			case '?':
				print_help();
				exit(EXIT_SUCCESS);
				break;
			default:
				break;
		}
	}

	if (optind == argc) {
		print_err(ERR_MISSHOST);
		exit(EXIT_FAILURE);
	}

	return 0;
}