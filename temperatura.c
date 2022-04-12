#include <stdio.h>

main(){
	
	float C, f;
	
	printf("Digite a temperatura em graus celcius: ");
		scanf("%f", &C);
		
	f=(C*1.8)+32;
	printf("A temperatura em Fahrenheit:  %f \n", f);	
	
	
	system("pause");
}
