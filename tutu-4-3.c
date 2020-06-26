#include<stdio.h>
int main()
{   char x;
	printf("enter your garde");
	scanf("%c",&x);
	switch(x)
	{
		case 'e':
			
			printf( "excellent");
			break;
			case 'v':
				printf("very good");
				break;
				case'g':
					printf("good");
					break;
					case'a':
						printf("average");
						break;
						case'f':
							printf("fail");
							break;
					case 'E':
			
			printf( "excellent");
			break;
			case 'V':
				printf("very good");
				break;
				case'G':
					printf("good");
					break;
					case'A':
						printf("average");
						break;
						case'F':
							printf("fail");
							break;
					
							default: 
							printf("invalid word");
							
					
		}
			
		return  0;	
}

