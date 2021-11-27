# Contact List App

## Description
In this project, you should develop a contact-list application. More specifically, your application should enable a user to read and write contact information of individuals to a file (contacts.txt). The contact list should store the following information.
- Fist Name
- Last Name
- Telephone Number 
- Email
This information should be stored in a text file. One line per contact. The user of this application should have the following options in the form of a nice presented menu.

## Steps to follow
1. Add a new contact. The user should add all the details of each contact by answering a set of questions (first name? last name? telephone number? email?). The contact should be added at the end of the file.
2. Retrieve contact be typing the last name of the contact. When displaying the contact, all information should be printed. If more than one contact have the same name, then all of them should be printed. If the contact has not be found, then the appropriate message should be printed.
3. Print all the contacts in the file.
4. Count and display the total number of contacts.
5. Show a Random Contact. Again, when displaying the contact, all information should be printed.
After the execution of each one of the above options (the underlined phrases above) the user should be asked if she/he wishes to select another option or exit the program.
Obviously your program should check if the file (contacts.txt) exists and if not it should display the appropriate error message.
6. Add new contact sorted: Assume that your contact list is sorted (according to the last name). The “add contact” functionality, should add the contact to the appropriate place in the file so that the file remains sorted after the addition of the new contact. You can implement this question as option 6. Add new contact sorted and use two files for testing (contacts.txt and contacts_sorted.txt).