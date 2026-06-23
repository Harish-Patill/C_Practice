#include "project_header.h"

void list_all(struct Contacts *eptr,int size){
    for(int i=0;i<size;i++){
        printf("%s %s %s\n",eptr[i].name,eptr[i].number,eptr[i].email);
    }
}

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
    int name_count=0;
    int edit_flag=0;
    int user_edit_option=0;
    int sub_user_edit_option=0;
    char edit_name[50];
    char edit_number[11];
    char edit_email[50];
    
    printf("\nSeach the Contact you want to edit using any of the below options\n1. Name\n2. Mobile Number\n3. Email-ID\n4. Exit\nEnter Here: ");
    scanf("%d",&user_edit_option);
    
    switch(user_edit_option){
    case 1:{
        printf("Enter the Name: ");
        scanf(" %[^\n]",edit_name);
        for(int i=0;i<size;i++){
            if(strcmp(eptr[i].name,edit_name) == 0){
                name_count++;
            }
        }
        if(name_count>1){
            printf("\nThere are %d contacts with the same name as '%s'\n",name_count,edit_name);
            list_all(eptr,size);
            printf("\nEdit the contact by searching for Mobile Number or Email instead\n");
            
            printf("1. Mobile Number\n2. Email-ID\nSelect any of the above options: ");
            scanf("%d",&sub_user_edit_option);
            
            switch(sub_user_edit_option){
                case 1:{
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

                            printf("\nContact Edited Succesfully\n");
                            printf("Returning to main menu...\n");
                            sleep(1);
                            
                            edit_flag=1;
                        }
                    }
                    if(!edit_flag) printf("Couldn't find any contact with name %s\n",edit_number);
                    break;
                }
                
                case 2:{
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
                            
                            printf("\nContact Edited Succesfully\n");
                            printf("Returning to main menu...\n");
                            sleep(1);
                            
                            edit_flag=1;
                        }
                    }
                    if(!edit_flag) printf("Couldn't find any contact with name %s\n",edit_email);
                    break;
                }
            }
        }


        if(name_count==1){
            for(int i=0;i<size;i++){
                if(strcmp(eptr[i].name,edit_name) == 0){
                    printf("\nEnter New Details Below:\n");
                    printf("Enter Name: ");
                    scanf(" %[^\n]",eptr[i].name);
                    
                    printf("Enter Mobile Number: ");
                    scanf("%s",eptr[i].number);
                    
                    printf("Enter Email-ID: ");
                    scanf("%s",eptr[i].email);
                    printf("\nContact Edited Succesfully\n");
                    printf("Returning to main menu...\n");
                    sleep(1);
                    
                    edit_flag=1;
                }
            }
            if(!edit_flag) printf("Couldn't find any contact with name %s\n",edit_name);
            break;
        }
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

                printf("\nContact Edited Succesfully\n");
                printf("Returning to main menu...\n");
                sleep(1);   

                edit_flag=1;
            }
        }
        if(!edit_flag) printf("Couldn't find any contact with name %s\n",edit_number);
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
                
                printf("\nContact Edited Succesfully\n");
                printf("Returning to main menu...\n");
                sleep(1);
                
                edit_flag=1;
            }
        }
        if(!edit_flag) printf("Couldn't find any contact with name %s\n",edit_email);
        break;
    }

    case 4:{
        user_edit_option=0;
        printf("Returning to Main Menu\n");
        sleep(1);       // 1 second
        break;
    }

    default:
    printf("Invalid Option! Please enter a valid option\n");
    }
}


void search_contacts(struct Contacts *eptr,int size){
    int search_flag=0;
    int user_search_option=0;
    char search_name[50];
    char search_number[50];
    char search_email[50];
    

    printf("\nSeach the Contact using any of the below options\n1. Name\n2. Mobile Number\n3. Email-ID\n4. Exit\nEnter Here: ");
    scanf("%d",&user_search_option);

    switch(user_search_option){
        case 1:{
            printf("Enter the Name: ");
            scanf(" %[^\n]",search_name);
            for(int i=0;i<size;i++){
                if(strcmp(eptr[i].name,search_name) == 0){
                    printf("%s %s %s",eptr[i].name,eptr[i].number,eptr[i].email);
                    search_flag=1;
                    printf("\n");
                }
            }
            if(!search_flag) printf("No contact found with Name %s\n",search_name);
            break;
        }

        case 2:{
            printf("Enter the Number: ");
            scanf(" %[^\n]",search_number);

            for(int i=0;i<size;i++){
                if(strcmp(eptr[i].number,search_number) == 0){
                    printf("%s %s %s",eptr[i].name,eptr[i].number,eptr[i].email);
                    search_flag=1;
                    break;
                }
            }
            if(!search_flag) printf("No contact found with Mobile Number %s\n",search_number);
            break;
        }

        case 3:{
            printf("Enter Email-ID :");
            scanf(" %[^\n]",search_email);

            for(int i=0;i<size;i++){
                if(strcmp(eptr[i].email,search_email) == 0){
                    printf("%s %s %s",eptr[i].name,eptr[i].number,eptr[i].email);
                    search_flag=1;
                    break;
                }
            }
            if(!search_flag) printf("No contact found with Email-ID %s\n",search_email);
            break;
        }

        case 4:{
            user_search_option=0;
            printf("Returning to Main Menu\n");
            sleep(1);       // 1 second
            break;
        }

        default:
            printf("Enter a Valid Input!, Try again\n");
    }
}

void delete_contact(struct Contacts *eptr,int size){
    int delete_flag=0;
    int user_delete_option=0;
    int index=0;
    char delete_confirmation;
    char delete_name[50];
    char delete_number[11];
    char delete_email[50];
    

    printf("\nSeach the Contact you want to delete using any of the below options\n1. Name\n2. Mobile Number\n3. Email-ID\n4. Exit\nEnter Here: ");
    scanf("%d",&user_delete_option);

    switch(user_delete_option){
        case 1:{
            printf("Enter Name: ");
            scanf(" %[^\n]",delete_name);

            for(int i=0;i<size;i++){
                if(strcmp(eptr[i].name,delete_name) == 0){
                    printf("Found Contact : %s %s %s\n",eptr[i].name,eptr[i].number,eptr[i].email);
                    delete_flag=1;
                    index=i;
                    break;
                }
            }
            if(delete_flag){
                printf("Are you sure you want to delete this contact?\n(Y/n):");
                scanf(" %c",&delete_confirmation);
    
                if(delete_confirmation == 'Y' || delete_confirmation == 'y'){
                    for(int i=index;i<size-1;i++){
                        strcpy(eptr[i].name,eptr[i+1].name);
                        strcpy(eptr[i].number,eptr[i+1].number);
                        strcpy(eptr[i].email,eptr[i+1].email);
                    }
                    printf("\nContact Deleted\n");
                    printf("Returning to main menu...\n");
                    sleep(1);
                    contact_count--;
                }
                else printf("Deletion Cancelled\n");
            }
            else printf("No contact found with the name '%s'\n",delete_name);

            break;
        }

        case 2:{
            printf("Enter the Mobile Number: ");
            scanf(" %[^\n]",delete_number);

            for(int i=0;i<size;i++){
                if(strcmp(eptr[i].number,delete_number) == 0){
                    printf("Found Contact : %s %s %s\n",eptr[i].name,eptr[i].number,eptr[i].email);
                    delete_flag=1;
                    index=i;
                    break;
                }
            }
            if(delete_flag){
                printf("Are you sure you want to delete this contact?\n(Y/n):");
                scanf(" %c",&delete_confirmation);
    
                if(delete_confirmation == 'Y' || delete_confirmation == 'y'){
                    for(int i=index;i<size-1;i++){
                        strcpy(eptr[i].name,eptr[i+1].name);
                        strcpy(eptr[i].number,eptr[i+1].number);
                        strcpy(eptr[i].email,eptr[i+1].email);
                    }
                    printf("\nContact Deleted\n");
                    printf("Returning to main menu...\n");
                    sleep(1);
                    contact_count--;
                }
                else printf("Deletion Cancelled\n");
            }
            else printf("No contact found with the Number '%s'\n",delete_number);       

            break;
        }
        
        case 3:{
            printf("Enter the Mail-ID: ");
            scanf(" %[^\n]",delete_email);
    
            for(int i=0;i<size;i++){
                if(strcmp(eptr[i].email,delete_email) == 0){
                    printf("Found Contact : %s %s %s\n",eptr[i].name,eptr[i].number,eptr[i].email);
                    delete_flag=1;
                    index=i;
                    break;
                }
            }
            if(delete_flag){
                printf("Are you sure you want to delete this contact?\n(Y/n):");
                scanf(" %c",&delete_confirmation);
        
                if(delete_confirmation == 'Y' || delete_confirmation == 'y'){
                    for(int i=index;i<size-1;i++){
                        strcpy(eptr[i].name,eptr[i+1].name);
                        strcpy(eptr[i].number,eptr[i+1].number);
                        strcpy(eptr[i].email,eptr[i+1].email);
                    }
                    printf("\nContact Deleted\n");
                    printf("Returning to main menu...\n");
                    sleep(1);
                    contact_count--;
                }
                else printf("Deletion Cancelled\n");
            }
            else printf("No contact found with the Mail-ID '%s'\n",delete_email);

            break;     
        }

        case 4:{
            user_delete_option=0;
            printf("Returning to Main Menu\n");
            sleep(1);       // 1 second
            break;
        }
        
        default:
        printf("Enter a Valid Input!, Try again\n");
    }
}