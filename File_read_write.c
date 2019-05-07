#include <stdio.h> 
#include <stdlib.h>
  
int main() 
{ 
    FILE *fptr_Master, *fptr_child1, *fptr_child2, *fptr_child3, *fptr_child4, *fptr_child5; 
    int counter;
    char ch;
  
    // Open one file for reading 
    fptr_Master = fopen("./Master_File.txt", "r"); 
    if (fptr_Master == NULL) 
    { 
        printf("Cannot open file Master_File.txt \n"); 
        exit(0); 
    } 
  
  
    //Open file for writing 
    fptr_child1 = fopen("./child1.txt", "w"); 
    if (fptr_child1 == NULL) 
    { 
        printf("Cannot open file child1.txt \n"); 
        exit(0); 
    } 

    //Open file for writing 
    fptr_child2 = fopen("./child2.txt", "w"); 
    if (fptr_child2 == NULL) 
    { 
        printf("Cannot open file child2.txt \n"); 
        exit(0); 
    } 

    //Open file for writing 
    fptr_child3 = fopen("./child3.txt", "w"); 
    if (fptr_child3 == NULL) 
    { 
        printf("Cannot open file child3.txt \n"); 
        exit(0); 
    }

    //Open file for writing 
    fptr_child4 = fopen("./child4.txt", "w"); 
    if (fptr_child4 == NULL) 
    { 
        printf("Cannot open file child4.txt \n"); 
        exit(0); 
    }

    //Open file for writing 
    fptr_child5 = fopen("./child5.txt", "w"); 
    if (fptr_child5 == NULL) 
    { 
        printf("Cannot open file child5.txt \n"); 
        exit(0); 
    }   


//Read data from Master file and write to 5 different child files based on line count

counter = 1;
ch = fgetc(fptr_Master);
fputc(ch, fptr_child1);
    while (ch != EOF)
    {
        ch = fgetc(fptr_Master);
        
            if (counter>=1 && counter<=5)
            {
                fputc(ch, fptr_child1);
            }else if(counter>=6 && counter<=10){
                fputc(ch, fptr_child2);
            }else if(counter>=11 && counter<=15){
                fputc(ch, fptr_child3);
            }else if(counter>=16 && counter<=20){
                fputc(ch, fptr_child4);
            }else if(counter>=21 && counter<=25){
                fputc(ch, fptr_child5);
            }

            if (ch == '\n')
            counter++;

    }



    printf("\nContents copied to Respective Files\n"); 
  
    fclose(fptr_Master); 
    fclose(fptr_child1); 
    fclose(fptr_child2); 
    fclose(fptr_child3); 
    fclose(fptr_child4); 
    fclose(fptr_child5); 
    return 0; 
}