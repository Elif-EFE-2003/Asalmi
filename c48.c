#include <stdio.h>
#include <stdlib.h>
 
 int asalmi(int a){
 	int i;
 	for(i=2;i<a;i++){
 		if(a%i==0){
 			return 0;
		 }
	 }
	 return 1;
 }


int main(int argc, char *argv[]) {
	int n;
	printf("Asal olup olmadigini merak ettiginiz sayiyi girin ");
	scanf("%d",&n);
	if(asalmi(n)==0){
		printf("%d sayisi asal degildir :(",n);
	}
	else
	printf("%d sayisi asaldir :)",n);
	
	return 0;
}
