#include <stdio.h>

main(){
	
	float base, altura, area;
	
	printf("Digite a base: ");
	scanf("%f", &base);
	printf("digite a altura: ");
	scanf("%f", &altura);
	
	area=(base*altura)/2;
	printf("Area: %f \n", area);
	
	system("pause");
	return(0);
}
