# Contact Book: Develop a contact book application to store and manage contact information.

def addContact(name: str, number: int):
    with open('Contact.csv', 'a') as contact:
        contact.write(f'{name.title()},{number}\n')

def searchContact(nameorContact: str):
    with open('Contact.csv', 'r') as contact:
        lines = contact.readlines()
        
        for line in lines:
            if nameorContact.lower() in line.lower():
                print(line.strip())  # Strip newline character for cleaner output

# addContact('dharmik anghan', 9825186855)
# addContact('dharmik', 9898393933)

searchContact('9825')
