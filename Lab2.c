#include <stdio.h>
#include <stdlib.h>

/**|  Estructura de datos |********/
/**|  Pamela Landero      |********/
/**********************************/
/**|---[Integrantes]---   |********/
/**|  Valentina Miranda   |********/
/**|  Piero Figueroa      |********/
/**|  Natalia Rojas       |********/
/**********************************/

/*------------------------------------------------------------------------------------------------*/


float ** iniciarMatriz (float **M1, int m, int n);
void llenarMatriz      (float **M1,int m, int n);
void mostrarMatriz     (float **M1, int m, int n);
void primofobico       (float **M1, int m, int n);



/*------------------------------------------------------------------------------------------------*/
int main(){

	float **M1;
	int m,n;
	printf("Ingrese el número de filas: ");
	scanf("%i", &m);
	printf("Ingrese el número de columnas: ");
	scanf("%i", &n);
	M1 = iniciarMatriz(M1, m, n);


	printf ("Entrando a funcion1\n");
	llenarMatriz (M1, m, n);
	printf ("Entrando a funcion2\n");
	mostrarMatriz(M1, m, n);
	/*printf ("Entrando a funcion3\n");
	primofobico  (M1, m, n);
*/
	free(M1);

}
/*------------------------------------------------------------------------------------------------*/
float ** iniciarMatriz(float **M1, int m, int n){
	int i;
	printf("El número de filas es %d y el de columnas %d, respectivamente\n\n", m, n);
	
	M1 = (float**)malloc(m*sizeof(float*));
	/************************************************************/
	if(M1 == NULL){
		printf("No se ha podido reservar espacio de memoria.\n");
		exit(1);
	}
	/************************************************************/

	for(i=0; i<n; i++){
		M1[i] = (float*)malloc(m*sizeof(float));
		/************************************************************/
		if(M1[i] == NULL){
			printf("No se ha podido reservar espacio de memoria.\n");
			exit(1);
		}	
		/************************************************************/
	}
	return M1;
}
/*------------------------------------------------------------------------------------------------*/
void llenarMatriz(float **M1,int m, int n){
	int i,j;
	for(i = 0  ; i<m ; i++){
		for(j = 0  ; j<m ; j++){
			float x = ((float)rand()/(float)(RAND_MAX)) * 9;
			M1[i][j] = x;
		}
	}
	printf ("terminada funcion1\n");
}
/*------------------------------------------------------------------------------------------------*/
void mostrarMatriz(float **M1, int m, int n){
	int i,j;
	for(i = 0  ; i<m ; i++){
		for(j = 0  ; j<m ; j++){
			printf ("\nM1[%i,%i] = %.2f\n",i+1 ,j+1 ,M1[i][j]);
		}
	}
	printf("\n\n");

	printf ("terminada funcion2\n");
}
/*------------------------------------------------------------------------------------------------*/
/*void primofobico(float **M1, int m, int n){
	int i,j,k,aux = 0;
	for(i = 0  ; i<m ; i++){
		for(j = 0  ; j<m ; j++){
			for(k = 1; k <= M1[i][j] ; k++){
				if( M1[i][j] % i == 0){
					aux++;
					if(k == 2){
						printf ("M1[%i,%i] = %.2f - Es primo \n",i ,j ,M1[i][j]);
					}	
					else{
						printf ("M1[%i,%i] = %.2f - No es primo\n",i ,j ,M1[i][j]);
					}
				}
			}
			k=0;
		}
	}
}*/
/*------------------------------------------------------------------------------------------------*/