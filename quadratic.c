#include<stdio.h>
#include<math.h>

int main() {
	int a,b,c;
	printf("katsayilari giriniz\n");
	scanf("%d %d %d", &a,&b,&c );
	int delta;
	delta = b*b - (4*a*c);
	
	if(delta > 0) {
		float x1,x2;
		x1 = (-b + sqrt(delta)) / 2.0*a;
		x2 = (-b - sqrt(delta)) / 2.0*a;
		printf("denklemin kokleri: %f %f", x1, x2);
	}
	
	else if (delta == 0){
		float x3;
		x3 = (-b + sqrt(delta)) / (2.0*a);
		printf("denklemin cakisik tek koku var %f" , x3);
	}
	
	else{
		printf("reel kok yok");
	}
	
	 
	return 0;
}
