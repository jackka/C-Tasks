#include <stdio.h>


char gaps_and_order ( int arr[], int n, char* range) { //n-размер массива, char* range - диапазон ([0-9], [a-z], [A-Z])
	printf("[%s] Range symbol codes Analysis.\n",range );
	int bk_counter=0; //backward counter
	int fd_counter=0; //forward counter
	int i;
	for (i = 1; i < n; ++i){ //выясняем, как упорядочены коды символов между собой
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
		return -1; printf("No order here.\n" );
	}
	
	return -1; printf("\n");


}


int main()
{
	char space=' ';
	int arr09[10]={'0','1','2','3','4','5','6','7','8','9'};
	int arraz[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int arrAZ[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		
	char* str_val[4]={"a-z","A-Z","0-9","Space"};

	int sort_arr[4];

	sort_arr[0]=gaps_and_order(arraz,26,str_val[0]);
	sort_arr[1]=gaps_and_order(arrAZ,26,str_val[1]);
	sort_arr[2]=gaps_and_order(arr09,10,str_val[2]);
	sort_arr[3]=' ';

	for (int j = 1; j < 4; j++)
	{
		for (int i = 0; i < 3; i++)
		{	
			if (sort_arr[i]!=-1)
			{
				if (sort_arr[i]>sort_arr[i+1]){
					int x=sort_arr[i]; char* y=str_val[i];
					sort_arr[i]=sort_arr[i+1]; str_val[i]=str_val[i+1];
					sort_arr[i+1]=x; str_val[i+1]=y;
				}
			}else{
				printf("Ranges are not comparable!\n");
				return -1;
			}
		}
	}
	
// each range + space to its place in order
printf("Each range and Space to its place in order:\n");	

	printf("[%s] have code ",str_val[0]); //для space
	printf("%d",sort_arr[0]);
    printf("\n");
    
	printf("[%s] have code ",str_val[1]); //для [0-9]
	printf("%d-%d",sort_arr[1]-9,sort_arr[1]);
    printf("\n");
    
    for (int i = 2; i < 4; ++i)
{
	printf("[%s] have code ",str_val[i]); //для [A-Z], [a-z]
	printf("%d-%d",sort_arr[i]-25,sort_arr[i]);
    printf("\n");
}
    
return 0;

}
