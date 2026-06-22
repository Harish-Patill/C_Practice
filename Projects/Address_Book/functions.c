#include "project_header.h"

void create_contacts(struct Contacts *eptr,int size){
    int add_contacts_loop=1;

    while(add_contacts_loop){

        printf("Enter Name: ");
        scanf(" %[^\n]",eptr[size].name);
    
        printf("Enter Mobile Number: ");
        scanf("%s",eptr[size].number);
    
        printf("Enter Email-ID: ");
        scanf("%s",eptr[size].email);
    
        contact_count++;
        printf("\nDo you want to add another contact? [1 for Yes / 0 for No]: ");
        scanf("%d",&add_contacts_loop);
    }
}
