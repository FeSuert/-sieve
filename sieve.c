#include <stdio.h>
#include <stdbool.h>


int main(int argc, char **argv) {
	// TODO: implement sieve here!
	const int MAX = 100;
	bool prime[MAX-1];
	
	prime[0] = false;
	prime[1] = false;
	
	for (int i = 2; i < MAX; i++) {
        prime[i] = true;
    }

	for(int i = 2; i < MAX; i++) {
		if(prime[i]){
			int j = i+i;
			while(j < MAX){
				prime[j] = false;
				j += i;
			}
		} 
		
	}
	
	for(int loop = 0; loop < MAX; loop++){
	  if(prime[loop]){
		  printf("\nNumber %d is prime", loop);
	  }
	  else{
		  printf("\nNumber %d is not prime", loop);
	  }
	}
      
	return 0;
}
