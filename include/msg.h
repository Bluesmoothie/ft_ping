#pragma once

#define	MSG_HELP "\
Usage: ./ft_ping [OPTION...] HOST ...\n\
Send ICMP ECHO_REQUEST packets to network hosts.\n\
\n\
  -v                         verbose output\n\
  -?                         give this help list\n\
"

const char*	errors[] = {
	"missing host operand\nTry './ft_ping -?' for more information.\n",
	"Name or service not known\n"
};