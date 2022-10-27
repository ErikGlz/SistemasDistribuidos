//Programa que muestra la informacion de los parametros introducidos por el cliente,
//hace la suma de los parametros y le regresa el resultado de dicha suma al cliente
#include "suma.h"

int *
suma_1_svc(dupla_int *argp, struct svc_req *rqstp)
{
	static int  result;
	printf("Server response to client...\n");
	printf("parameters: %d, %d\n", argp->a, argp->b); //Imprime los parametros introducidos
	result = argp->a + argp->b;//Hace la suma de los parametros
	printf("returning: %d\n", result);//Imprime el resultado de la suma
	return &result;//Devuelve el resultado de la suma
}
