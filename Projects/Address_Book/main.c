#include "project_header.h"

struct Contacts contact_details[100];
int contact_count=0;

int main(){
    int flag=1;
    int main_option=0;

    printf("\n\t\t:: Address Book ::");
    while(flag){
        printf("\n1. Add Contacts\n2. Edit Contacts\n3. Delete Contacts\n4. Display Contacts\n5. Save and Exit\n6. Exit\n\nSelect any of the above options: ");
        scanf("%d",&main_option);

        switch(main_option){
            case 1:{
                create_contacts(contact_details,contact_count);
                break;
            }

            case 2:{
                edit_contacts(contact_details,contact_count);
                break;
            }
            
            case 4:{
                list_all(contact_details,contact_count);
                break;
            }
            case 6:{
                flag=0;
                printf("\n\t\t :: Thank You ::\n");
                break;
            }
        }
        




    }














    return 0;
}