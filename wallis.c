#include<stdio.h>
#include<cs50.h>

float wallis_pi(int n);
int main(){

	float p;
	int n=get_int("number of iterations");
	
	p=wallis_pi(n);
	printf("%f",p);
	
        return 0;
}
float wallis_pi(int n){
	float pi=1.0,temp;
	
	for(int i=1;i<=n;i++){
                
		temp=4*i*i;
		pi=(pi*(temp/(temp-1)));
	
	
	}
	
	return (2*pi);
}


