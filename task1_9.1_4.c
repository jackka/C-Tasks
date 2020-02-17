#include <stdio.h>

#define N 10
#define M 26
#define L 26

int main(int argc, char const *argv[])
{

      int arrN[N]={'0','1','2','3','4','5','6','7','8','9'};
      int arrM[M]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
      int arrL[L]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	for (int i = 0; i < N; ++i)	printf("Symbol \"%c\" with code:%d\n", arrN[i] , arrN[i]); 
	for (int i = 0; i < M; ++i)	printf("Symbol \"%c\" with code:%d\n", arrM[i] , arrM[i]); 
	for (int i = 0; i < L; ++i)	printf("Symbol \"%c\" with code:%d\n", arrL[i] , arrL[i]); 
	
	return 0;
}
