#include <stdio.h>

int main(int argc, char *argv[])
{
    //if(argc != 2) {
    //    printf("ERROR: You need one argument.\n");
    //    // this is how you abort a program
    //    return 1;
    //}

    int i;
		int j;
		for(i = 1; i < argc; i++) {
    	for(j = 0; argv[i][j] != '\0'; j++) {
    	    char letter = argv[i][j];

    	    switch(letter) {
    	        case 'a':
    	        case 'A':
    	            printf("%d,%d: 'A'\n", i, j);
    	            break;

    	        case 'e':
    	        case 'E':
    	            printf("%d,%d: 'E'\n", i, j);
    	            break;

    	        case 'i':
    	        case 'I':
    	            printf("%d,%d: 'I'\n", i, j);
    	            break;

    	        case 'o':
    	        case 'O':
    	            printf("%d,%d: 'O'\n", i, j);
    	            break;

    	        case 'u':
    	        case 'U':
    	            printf("%d,%d: 'U'\n", i, j);
    	            break;

    	        //case 'y':
    	        //case 'Y':
    	        //    if(i > 2) {
    	        //        // it's only sometimes Y
    	        //        printf("%d: 'Y'\n", i);
    	        //    }
    	        //    break;

    	        default:
    	            printf("%d,%d: %c is not a vowel\n", i, j, letter);
    	    }
    	}
		}

    return 0;
}
