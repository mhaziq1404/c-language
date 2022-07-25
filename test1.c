#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <>

int main()
{
    char name[100];//declaring a char array
    printf("***Ask array from user***\n");//ask input from the user
    printf("\nEnter a word:");//ask input from the user
    scanf("%s",name);//Getting string input
    printf("\n***Array Assignment***\n");//ask input from the user
    printf("\nYour word is : %s\n",name);//print the input name

// finding array length 

    //printf("\nThe size of my character array is: %d\n", sizeof(&name[0]));
    //printf("%d\n",sizeof(name)-1);
    printf("\nArray length: %d\n",strlen(name));
    
// printing array in reverse
    char* s = name ;
    size_t l = strlen(s);
    char* r = (char*)malloc((l + 1) * sizeof(char));
    r[l] = '\0';
    int i;
    for(i = 0; i < l; i++) {
        r[i] = s[l - 1 - i];
  
    }
    printf("\nreverse: %s\n", r);
    free(r);
}





