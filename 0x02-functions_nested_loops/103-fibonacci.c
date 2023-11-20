#include <stdio.h>

int main(){
	int i;
        unsigned long int sum,a,b,s;
	a=0;
	b=1;

	sum =0;
	for(i=0 ;i < 50; i++){
		s=a+b;
                a=b;
                b=s;
		if( sum < 4000000 && (s%2)== 0)
		{
			sum +=s;
	        }
	}
		
	printf("%ld\n",sum);
	return (0);	
}
