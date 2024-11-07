#include<stdio.h>
#include<string.h>
struct employee {
char name[50];
int id;
char department[50];
float salary;
char email[50];
}emp1;
int main(){
strcpy(emp1.name,"John Doe");
emp1.id=12345;
strcpy(emp1.department,"resource management");
emp1.salary=5000.50;
strcpy(emp1.email,"john1company.com");

printf("name:%s\n",emp1.name);
printf("id:%d\n",emp1.id);
printf("department:%s\n",emp1.department);
printf("salary:%.2f\n",emp1.salary);
printf("email:%s\n",emp1.email);
return 0;
}