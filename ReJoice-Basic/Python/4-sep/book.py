class Book:
    def __init__(self,bookID:int, bookTitle:str, bookAuthor:str, bookGenre:str):
        self.bookID = bookID
        self.bookTitle = bookTitle
        self.bookAuthor = bookAuthor
        self.bookGenre = bookGenre
    
    def showBooks(self):
        print(f" BookId: {self.bookID}\n BookTitle: {self.bookTitle}\n BookAuthor: {self.bookAuthor}\n BookGenre: {self.bookGenre}")


b1 = Book(1,'dharmik', 'd', 'Sci=Fi')

b1.showBooks()