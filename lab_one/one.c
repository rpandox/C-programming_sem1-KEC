/* a program using printf () and different escape sequences to give the output
 First Name      Middle name     Marks 
 ............    ............    ...... 
        NOTE : < 30 'Fail' 
            \\"END"// 
 */ #include <stdio.h> 
 int main(void) 
 { 
    printf("\t\tFirst Name\t\tMiddle name\t\tMarks\n");       //\t for Tabular space \n for new line 
    printf("\t\t............\t\t............\t\t......\n"); 
    printf("\t\t\t\t    NOTE : < 30 'Fail'\n"); 
    printf("\t\t\t\t      \\\\\"END\"//");        //for printing \ and we write \\ and \" reapectively 
    return 0; 
}