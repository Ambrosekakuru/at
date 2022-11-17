//KAKURU AMBROSE
//2021/A/KCS/1402/F
#include <stdio.h>
struct Registration{
char Name[20];
char regno;
float amount;
}a[5];
int main(){
int n,x;
printf("Enter number of students:\n");
scanf("%d",&n);
for(x=0;x<n;x++){
printf("Enter student's name:\n");
scanf("%s",&a[x].Name);
printf("Enter student's reg no:\n");
scanf("%s" ,&a[x].regno);
printf("Enter price paid:\n");
scanf("%f",&a[x].amount);
if(a[x].amount<30000){
printf("invalid\n");}
printf("--------------------------\n"); 
    }
 for(x=0;x<n;x++){
    printf("Name:%s", a[x].Name);
    printf("\n");
 printf("Reg no:%s",a[x].regno);
   printf("\n");
printf("Amount paid(shs):%.3f",a[x].
amount);
printf("--------------------------\n");
}
    return 0;
}