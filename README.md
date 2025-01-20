# Contact List - Array-Based Implementation in C

This is a simple contact list program implemented using arrays in C. The program allows users to:
- Add contacts (name and phone number).
- Search for a contact by name.
- Display all contacts.



## Features
1. **Add Contact**: Save a contact's name and phone number.
2. **Search Contact**: Find a contact by name.
3. **Display Contacts**: View all saved contacts in the list.


## How to Run
1. Compile the program using a C compiler (e.g., GCC):
gcc contact_list.c -o contact_list

2. Run the executable:

./contact_list



## Project File Structure

ContactList-ArrayBased/ ├── contact_list.c   # The main source code file └── README.md        # Project description


## Learning Outcomes

From this project, I gained a deeper understanding of:
1. **`atoi()` Function**:  
   - Used to convert a string to an integer.
   - Example: Convert user input (`"1"`) into an integer to use in switch statements.

2. **`[^\n]` Input Format**:  
   - Used with `scanf()` to read an entire line of input, including spaces, until a newline is encountered.

3. **Dynamic Thinking for Arrays**:
   - Managed arrays efficiently to store and retrieve contact details.



## Sample Output

Contact List Manager

1. Add Contact


2. Display Contacts


3. Search Contact


4. Exit Enter your choice: 1 Enter name: John Doe Enter phone number: 1234567890 Contact added successfully!



Contact List Manager

1. Add Contact


2. Display Contacts


3. Search Contact


4. Exit Enter your choice: 2



Contact List:

1. Name: John Doe, Phone: 1234567890





## Possible Improvements
1. Use dynamic memory allocation to handle an unlimited number of contacts.
2. Add an option to delete or update contacts.
3. Implement file handling to save contacts persistently.



## Technologies Used
- Language: **C**
- Tools: GCC Compiler, Terminal/Command Prompt



Summary

This project is a great way to practice fundamental programming concepts like arrays, string handling, and user interaction. It also demonstrates your ability to write modular code with real-world utility.
