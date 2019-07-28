/*
Md Nuhel Nawaz Chowdhury
ID: 109455162
SEC: K
E-mail: mnnawaz-chowdhury@myseneca.ca
WOrkshop 9 */



#include <stdio.h>
#define MAX_TITLE_SIZE 20
//Type the struct here
struct Book {
int _isbn;      // international book number
float _price;   // The price of the book
int _year;      // Year of publision
int _qty;       // Quantity of the book
char _title[MAX_TITLE_SIZE];    // Name/ Titke of the book
};



//Type the function prototypes here
int readRecord(FILE 8fp, struct Book *b2read);
void menu();
void displayInventory(const char filename[]);
float calculateCapital(const char filename[]);
/*int searchInventory(FILE *fp, const int isbn2find);
  void addBook(const char filename[], struct Book *b2Add);
  void checkPrice(const char filename[], const int isbn2find): */



int main(void)
{
    struct Book mybook;
    char filename[] = "inventory.txt";
    FILE *fp = NULL;



    int option;
   //Type your code here:
   printf("Welcome to the Book Store\n");
   printf("=========================\n");

   do
   {
       menu();
       scanf("%d", &option);

       switch (option)
       {
        case 0:         // if the user enters 0, the program exits.
        break:

        case 1:
            // call the display inventory fucntion
            displayInventory();
        break;

        case 2:
            // call the addbook function
            addbook();
        break;

        case 3:
            //call the check price function
            checkPrice();
        break;

        case 4:
            // call the  calculate total capital of the store function
            calculateCapital();
        break;

        default:
            printf("Invalid selection! Please try again.");
       }while(option != 0);
   }



    return 0;
}

void menu()
{
    printf(" printf("Please select from the following options:\n 1) Display the inventory.\n 2) Add a book to the inventory.\n 3) Check price.\n 4) Calculate total capital of the store.\n 0) Exit.\n\n");

}



void displayInventory(const char filename[])
{
    //Define an object of struct Book


    //Open the file, and check for null pointer


    //If the file is properly opened, display headers, similar to workshop 8



    //Use a while loop to call readRecord and display the records.
    while(/*call readRecord and check its return value*/)
        //display the record



    //Display the footer

    //Close the file

}





void addBook(const char filename[], struct Book *b2Add)
{
 //Not implemented!
}

void checkPrice(const char filename[],const int isbn2find)
{

 //Not implemented!


}

int searchInventory(FILE *fp,const int isbn2find)
{
 //Not implemented!
}


float calculateCapital(const char filename[])
{


    //Define an object of struct Book

    //Define and initialize total_capital


    //Open the file, and check for null pointer


    //If the file is properly opened, use a while loop to call readRecord
    while(/*call readRecord and check its return value*/)
        //Accumulate the multiplication of the price of each item to its quantity



    //Display the footer

    //Close the file

    //return the total_capital

}

int readRecord(FILE *fp, struct Book *b2read)
{
    //Define a variable int rv = 0
    int rv = 0;


    rv = fscanf(/*Type your code here*/);

    //return rv;

}
