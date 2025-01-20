#include <stdio.h>
#include <string.h>
#define MAX_CONTACTS 100
#define NAME_LENGTH 50
// Structure to store contact information
typedef struct {
char name[NAME_LENGTH];
char phone[15];
} Contact;
// Global array to store contacts
Contact contactList[MAX_CONTACTS];
int contactCount = 0;
// Function to add a contact
void addContact() {
if (contactCount >= MAX_CONTACTS) {
printf("Contact list is full!\n");
return;
}
printf("Enter name: ");
scanf(" %[^\n]", contactList[contactCount].name);
printf("Enter phone number: ");
scanf(" %[^\n]", contactList[contactCount].phone);
contactCount++;
printf("Contact added successfully!\n");
}
// Function to display all contacts
void displayContacts() {
if (contactCount == 0) {
printf("No contacts found!\n");
return;
}
printf("\nContact List:\n");
for (int i = 0; i < contactCount; i++) {
printf("%d. Name: %s, Phone: %s\n", i + 1, contactList[i].name, contactList[i].phone);
}
}
// Function to search for a contact by name
void searchContact() {
char searchName[NAME_LENGTH];
printf("Enter the name to search: ");
scanf(" %[^\n]", searchName);
int found = 0;
for (int i = 0; i < contactCount; i++) {
if (strcmp(contactList[i].name, searchName) == 0) {
printf("Contact found: Name: %s, Phone: %s\n", contactList[i].name,
contactList[i].phone);
found = 1;
break;
}
}
if (!found) {
printf("Contact not found!\n");
}
}
// Main function
int main() {
int choice;
do {
printf("\nContact List Manager\n");
printf("1. Add Contact\n");
printf("2. Display Contacts\n");
printf("3. Search Contact\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
addContact();
break;
case 2:
displayContacts();
break;
case 3:
searchContact();
break;
case 4:
printf("Exiting the program.\n");
break;
default:
printf("Invalid choice! Please try again.\n");
}
} while (choice != 4);
return 0;}
