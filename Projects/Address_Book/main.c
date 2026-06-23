#include "project_header.h"

/*
progress so far:

1. Add contacts             : Validation remaining
2. Search contacts          : Completed;
3. Edit contacts            : Validation remaining
4. Delete contacts          : Validation remaining
5. Display contacts         : Completed;
6. Save and exit            :
7. Exit                     : Completed;
*/


struct Contacts contact_details[100];
int contact_count=0;

int main(){
    int flag=1;
    int main_option=0;

    printf("\n\t\t:: Address Book ::");
    while(flag){
        printf("\n1. Add Contacts\n2. Search Contacts\n3. Edit Contacts\n4. Delete Contacts\n5. Display all Contacts\n6. Save and Exit\n7. Exit\n\nSelect any of the above options: ");
        scanf("%d",&main_option);

        switch(main_option){
            case 1:{
                create_contacts(contact_details,contact_count);
                break;
            }

            case 2:{
                search_contacts(contact_details,contact_count);
                break;
            }

            case 3:{
                edit_contacts(contact_details,contact_count);
                break;
            }
            
            case 4:{
                delete_contact(contact_details,contact_count);
                break;
            }

            case 5:{
                list_all(contact_details,contact_count);
                break;
            }
            case 7:{
                flag=0;
                printf("\n\t\t :: Thank You ::\n");
                break;
            }
        }
        




    }


    return 0;
}