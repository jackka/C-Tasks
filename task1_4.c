#include <stdio.h>

int main()
{
      char space=' ';
      int arrN[10]={'0','1','2','3','4','5','6','7','8','9'};
      int arrM[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
      int arrL[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

// 0-9 inner compare
	int fd_counter = 0;	
	int bk_counter = 0;
	int i;
	printf(" ['0'-'9'] Range symbol codes Analysis.\n" );
	for ( i = 1; i < 10; ++i){
		switch (arrN[i-1] - arrN[i]){
		case 1 : 
			printf("Codes of '%c' and '%c' symbols have reverse order.\n", arrN[i-1] , arrN[i] );
			bk_counter++;
			break;
		case -1: 
			printf("Codes of '%c' and '%c' symbols have straight order.\n", arrN[i-1] , arrN[i] );
			fd_counter++;
			break;
		}
	}
	if (fd_counter == 9 || bk_counter == 9) {
		printf("Range from '0' to '9' symbol codes have no gaps.\n We could compare this range as an indivisible piece.\n");	
	}

// a-z inner compare
	fd_counter = 0;	
	bk_counter = 0;
	printf(" ['a'-'z'] Range symbol codes Analysis.\n" );
	for ( i = 1; i < 26; ++i){
		switch (arrM[i-1] - arrM[i]){
		case 1 : 
			printf("Codes of '%c' and '%c' symbols have reverse order.\n", arrM[i-1] , arrM[i] );
			bk_counter++;
			break;
		case -1: 
			printf("Codes of '%c' and '%c' symbols have straight order.\n", arrM[i-1] , arrM[i] );
			fd_counter++;
			break;
		}
	}

	if (fd_counter == 25 || bk_counter == 25) {
		printf("Range from 'a' to 'z' symbol codes have no gaps.\n We could compare this range as an indivisible piece.\n");	
	}

// A-Z inner compare
	fd_counter = 0;	
	bk_counter = 0;
	printf(" ['A'-'Z'] Range symbol codes Analysis.\n" );
	for ( i = 1; i < 26; ++i){
		switch (arrL[i-1] - arrL[i]){
		case 1 : 
			printf("Codes of '%c' and '%c' symbols have reverse order.\n", arrL[i-1] , arrL[i] );
			bk_counter++;
			break;
		case -1: 
			printf("Codes of '%c' and '%c' symbols have straight order.\n", arrL[i-1] , arrL[i] );
			fd_counter++;
			break;
		}
	}

	if (fd_counter == 25 || bk_counter == 25) {
		printf("Range from 'A' to 'Z' symbol codes have no gaps.\n We could compare this range as an indivisible piece.\n");	
	}
	
	return 0;
}

