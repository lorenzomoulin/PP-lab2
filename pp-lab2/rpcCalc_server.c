/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "rpcCalc.h"

int *
add_100_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;
	printf("Requisicao de adicao para %d e %d\n", argp->x, argp->y);
	result = argp->x+argp->y;
	return &result;
}

int *
sub_100_svc(operandos *argp, struct svc_req *rqstp)
{
	static int  result;
	printf("Requisicao de subtracao para %d e %d\n\n", argp->x, argp->y);
	result = argp->x - argp->y;

	return &result;
}
