/*
Will include inbuilt header files in this file alone so that we can just import this .h file in the rest of the files instead of importing
the header files there
*/

#include<stdio.h>                               
#include<string.h>
#include <unistd.h>

struct Contacts{
    char name[50];
    char number[11];
    char email[50];
};

extern struct Contacts contact_details[100];
extern int contact_count;

void create_contacts(struct Contacts *eptr,int size);
void edit_contacts(struct Contacts *eptr,int size);
void list_all(struct Contacts *eptr,int size);
void search_contacts(struct Contacts *eptr,int size);
void delete_contact(struct Contacts *eptr,int size);
