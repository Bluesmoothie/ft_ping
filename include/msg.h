#pragma once

#define	MSG_HELP "\
Usage: ping [OPTION...] HOST ...\n\
Send ICMP ECHO_REQUEST packets to network hosts.\n\
\n\
  -v                         verbose output\n\
  -?                         give this help list\n\
"

const char*	errors[] = {
	"ping: missing host operand\nTry 'ping -?' for more information.\n"
};