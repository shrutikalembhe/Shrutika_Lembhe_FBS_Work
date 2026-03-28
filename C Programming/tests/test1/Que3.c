//Create a program to manage a to-do list. Implement a structure to store 
//task details (task ID, description, and status). Write a menu-driven 
//program to add, update, and display tasks. Use functions for each 
//operation.

#include<stdio.h>

struct ToDoList{
    int id;
    char description[50];
     char status[20];
};

struct ToDoList t[100];
int count = 0;

void AddTask();
void update();
void display();

void main(){
    int choice;

    while(1){
        printf("\n1. Add Task");
        printf("\n2. Update Task");
        printf("\n3. Display Task");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if(choice==1)
            AddTask();
        else if(choice==2)
            update();
        else if(choice==3)
            display();
        else if(choice==4)
            break;
        else
            printf("\nInvalid choice");
    }
}

void AddTask(){
    printf("Enter task id: ");
    scanf("%d", &t[count].id);

    printf("Enter description: ");
    scanf(" %[^\n]", t[count].description);

    printf("Enter status: ");
    scanf("%s", t[count].status);

    count++;
}

void update(){
    int id;
    printf("Enter id: ");
    scanf("%d", &id);

    for(int i=0;i<count;i++){
        if(t[i].id==id){
            printf("Enter new status: ");
            scanf("%s", t[i].status);
        }
    }
}

void display(){
    for(int i = 0; i < count; i++){
        printf("\n id: %d", t[i].id);
        printf("\n Description: %s", t[i].description);
        printf("\n Status: %s\n", t[i].status);
    }
}
