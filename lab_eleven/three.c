/*
a program to continuously read name, age and salary of a worker and write it into a 
        file until user confirms to end. Then read n from user and display the nth record in the file. 
        Details of worker must be represented by a structure.
*/

        #include<stdio.h>
        struct worker
        {
        char name[20];
        int age;
        int salary;
        };
        int main()
        {
        FILE *fp;
        struct worker w;
        char ch; 
        int n, count = 0;
        fp = fopen("Worker.bin","wb");
        if(fp == NULL)
        {
                printf("File cannot be opened");
        }
        do
        {
                printf("Enter the name, age and salary of the worker\n : ");
                scanf("%s%d%d",w.name,&w.age,&w.salary);
                fwrite(&w,sizeof(w),1,fp);
                printf("Do you want to enter more data?(y/n)");
                fflush(stdin);
                scanf("%c",&ch);

        }while(ch == 'y' || ch == 'Y');
        fclose(fp);
        printf("Enter the value of n:");
        scanf("%d",&n);
        fp = fopen("worker.bin","rb");
        while(1)
        {
                fread(&w,sizeof(w),1,fp);
                count++;
                if(n==count)
                {
                printf("Name: %s, Age: %d, salary: %d",w.name,w.age,w.salary);
                break;
                }
        }
        fclose(fp);
        return 0;
}