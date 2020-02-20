#include <stdio.h>


char gaps_and_order ( int arr[], int n, char* range){
	printf(" [%s] Range symbol codes Analysis.\n",range );
	int bk_counter=0;
	int fd_counter=0;
	int i;
	for ( i = 1; i < n; ++i){
		switch (arr[i-1] - arr[i]){
		case 1 : 
			printf("Codes of '%c' and '%c' symbols have reverse order.\n", arr[i-1] , arr[i] );
			bk_counter++;
			break;
		case -1: 
			printf("Codes of '%c' and '%c' symbols have straight order.\n", arr[i-1] , arr[i] );
			fd_counter++;
			break;
		default:
			printf("No order here.\n" );
		}
	}

	if (fd_counter == n-1 || bk_counter == n-1) {
		printf("Range from [%s] symbol codes have no gaps.\n We could compare this range as an indivisible piece.\n\n",range);	
		return arr[i-1]; 
	} else{
		return -1; printf("No oreder here.\n" );
	}
	
	return -1; printf("\n");


}


int main()
{
	char space=' ';
	int arrN[10]={'0','1','2','3','4','5','6','7','8','9'};
	int arrM[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int arrL[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		
	char* str_val[4]={" a-z "," A-Z "," 0-9 ","Space"};

	int sort_arr[4];

	sort_arr[0]=' ';
	sort_arr[1]=gaps_and_order(arrN,10,str_val[2]);	
	sort_arr[2]=gaps_and_order(arrM,26,str_val[0]);
	sort_arr[3]=gaps_and_order(arrL,26,str_val[1]);

	for (int j = 1; j < 4; j++)
	{
		for (int i = 0; i < 3; i++)
		{	
			if (sort_arr[i]!=-1)
			{
				if (sort_arr[i]>sort_arr[i+1]){
					int x=sort_arr[i];
					sort_arr[i]=sort_arr[i+1];
					sort_arr[i+1]=x;
				}
			}else{
				printf("Ranges are not comparable!\n");
				return -1;
			}
		}
	}
	
// each range + space to its place in order
printf("Each range and Space to its place in order:\n");	
for (int i = 0; i < 4; ++i)
{
	printf("%d",sort_arr[i] );
	printf("[%s];",str_val[i]);
}
printf("\n\n");

return 0;

}
