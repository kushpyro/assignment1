# include <stdio.h>
# include <string.h>

int main( )
{
	FILE *filePointer ;
	char data[50] = "This data is inserted in file\n";
	filePointer = fopen("ABC.c", "w") ;

	if ( filePointer == NULL )
	{
		printf( "ABC.c file failed to open." ) ;
	}
	else
	{
		printf("The file is now opened.\n");
		if ( strlen(data) > 0 )
		{
			fputs(data, filePointer) ;
			fputs("\n", filePointer) ;
		}
		fclose(filePointer) ;

		printf("Data successfully written in file\n");
		printf("The file is now closed.") ;
	}
	return 0;
}