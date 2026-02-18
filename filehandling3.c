#include<stdio.h>
int main(){
    int n,i,age;
    char ch[50];
    FILE *fp;
    fp=fopen("file01.txt","a");
    if(fp==NULL){
        printf("Error Opening File");
    }
    printf("Enter the number of Students: ");
    scanf("%d",&n);
    fprintf(fp,"Sr.No.\tName\tAge\n");
    for(i=1;i<=n;i++){
    printf("Student %d\n",i);

    printf("Enter the name: ");
    scanf("%s",ch);

    printf("Enter the age: ");
    scanf("%d",&age);

    fprintf(fp,"%d\t\t%s\t\t%d\n",i,ch,age);
}
fclose(fp);
return 0;


}