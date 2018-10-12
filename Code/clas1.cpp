#include<stdio.h>
class ciudadano {
	char *nombre;
	int edad, CI;
	
	public:
	
	void insertar_nombre (char *nomb){
		nombre=nomb;
	}
	void insertar_edad (int eda){
		edad=eda;	
	}
	void insertar_CI (int ci){
		CI=ci;
	}
	void mostrar(){
		printf("Nombre: %s \n", nombre);
		printf("Edad: %d \n", edad);
		printf("N.Cedula: %d", CI);
	}
};
int main(){
	ciudadano Jorge;
	char nom[25];
	int ed, c;
	printf("Ingresar Nombre:");
	scanf("%s",&nom);
	printf("Ingresar Edad:");
	scanf("%d",&ed);
	printf("Ingresar Cedula:");
	scanf("%d",&c);
	Jorge.insertar_nombre(nom);
	Jorge.insertar_edad(ed);
	Jorge.insertar_CI(c);
	Jorge.mostrar();
	
	return 0;	
}
