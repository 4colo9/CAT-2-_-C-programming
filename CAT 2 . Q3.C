 /*Name :Coleen Nicolette Kanyanya
 Admission :PA106/G/28764/25
 Programme description : Reads a list of integers from a file process the integers and writes the results to a different file
 */
 #include<stdio.h>
 #include<stdlib.h>
 void integerPrompter(void);
 void integerReader(void);
 void OutputDisplayer(void);
 FILE *input_file, *output_file;
 int main(){
    input_file=fopen("input.txt","w+");
    output_file=fopen("output.txt","w+");
    if (input_file == NULL || output_file == NULL) {
        printf("Error opening files.\n");
        return 1;
    }
    integerPrompter();
    // move the file pointer back to the start before reading
    rewind(input_file);
    integerReader();
     // move to start of both files before displaying
    rewind(input_file);
    rewind(output_file);

    OutputDisplayer();

    fclose(input_file);
    fclose(output_file);
    return 0;
 }
    
    
void integerPrompter (){
   char Integer [10];
   for (int i = 1 ; i <= 10 ; i++){
      printf("Enter an integer :");
      fgets(Integer,sizeof(Integer),stdin);
      long number = strtol(Integer, NULL, 10); // convert string to integer

      fprintf(input_file,"%ld\n",number);
      
   }
}
 void integerReader (){
   long num;
  int SUM=0;
  int AVG=0;
    printf("\nNumbers read from file:\n");

    // read until end of file
    while (fscanf(input_file, "%ld", &num) == 1) {
     SUM += num;
    }  
   AVG=SUM / 10;
  fprintf(output_file,"The sum of the numbers is %d \n",SUM);
  fprintf(output_file,"The average is %d \n",AVG);
     
 }
 void OutputDisplayer(void){
long NO;
char line[100];
       printf("\nInput file contents\n");
while (fscanf(input_file, "%ld", &NO) == 1) {
        printf("%ld\n", NO);  }
        printf("\nOutput file contents\n");
while
 (fgets(line, sizeof(line), output_file)) {
        printf("%s", line);
    }
 }
