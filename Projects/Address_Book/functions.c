#include "project_header.h"

void create_contacts(struct Contacts *eptr,int size){
    int add_contacts_loop=1;

    while(add_contacts_loop){

        printf("Enter Name: ");
        scanf(" %[^\n]",eptr[contact_count].name);
    
        printf("Enter Mobile Number: ");
        scanf("%s",eptr[contact_count].number);
    
        printf("Enter Email-ID: ");
        scanf("%s",eptr[contact_count].email);
        
        contact_count++;

        printf("\nDo you want to add another contact? [1 for Yes / 0 for No]: ");
        scanf("%d",&add_contacts_loop);
    }
}

void edit_contacts(struct Contacts *eptr,int size){
    int fount_flag=0;
    int user_edit_oinion=0;
    char edit_name[20];
    char edit_number[11];
    char edit_email[20];
    
    printf("\nSeach the Contact you want to edit using any of the below options\n1. Name\n2. Mobile Number\n3. Email-ID\nEnter Here: ");
    scanf("%d",&user_edit_oinion);
    
    switch(user_edit_oinion){
    case 1:{
        printf("Enter the Name: ");
        scanf(" %[^\n]",edit_name);
        
        for(int i=0;i<size;i++){
            if(strcmp(eptr[i].name,edit_name) == 0){
                printf("Enter New Details Below:\n");
                printf("Enter Name: ");
                scanf(" %[^\n]",eptr[i].name);
                
                printf("Enter Mobile Number: ");
                scanf("%s",eptr[i].number);
                
                printf("Enter Email-ID: ");
                scanf("%s",eptr[i].email);

                fount_flag=1;
            }
        }
        if(!fount_flag) printf("Couldn't find any contact with name %s\n",edit_name);
        break;
    }
    
    case 2:{
        printf("Enter the Mobile Number: ");
        scanf(" %[^\n]",edit_number);
        
        for(int i=0;i<size;i++){
            if(strcmp(eptr[i].number,edit_number) == 0){
                printf("\nEnter New Details Below:\n");
                printf("Enter Name: ");
                scanf(" %[^\n]",eptr[i].name);
                
                printf("Enter Mobile Number: ");
                scanf("%s",eptr[i].number);
                
                printf("Enter Email-ID: ");
                scanf("%s",eptr[i].email);
                
                fount_flag=1;
            }
        }
        if(!fount_flag) printf("Couldn't find any contact with name %s\n",edit_number);
        break;
    }
    
    case 3:{
        printf("Enter the Email-ID: ");
        scanf(" %[^\n]",edit_email);
        
        for(int i=0;i<size;i++){
            if(strcmp(eptr[i].email,edit_email) == 0){
                printf("\nEnter New Details Below:\n");
                printf("Enter Name: ");
                scanf(" %[^\n]",eptr[i].name);
                
                printf("Enter Mobile Number: ");
                scanf("%s",eptr[i].number);
                
                printf("Enter Email-ID: ");
                scanf("%s",eptr[i].email);
                
                fount_flag=1;
            }
        }
        if(!fount_flag) printf("Couldn't find any contact with name %s\n",edit_email);
        break;
    }

    default:
    printf("Invalid Option! Please select a valid option\n");
    }
}

void list_all(struct Contacts *eptr,int size){
    for(int i=0;i<size;i++){
        printf("%s %s %s\n",eptr[i].name,eptr[i].number,eptr[i].email);
    }
}