#include <stdio.h>
#include <ctype.h>
 
int main(){
 
// เกรด A ให้แสดงคำว่า Genius
// เกรด B ให้แสดงคำว่า Good
// เกรด C ให้แสดงคำว่า Try Harder
// เกรด D ให้แสดงคำว่า Very Bad
// เกรด F ให้แสดงคำว่า Fail
// อื่น ๆ ให้แสดงคำว่า Invalid Input
 
    char status; scanf("%c",&status);
    switch (tolower(status))
    {
    case 'a':
        printf("Genius");
        break;
     
    case 'b':
        printf("Good");
        break;
         
    case 'c':
        printf("Try Harder");
        break;
 
    case 'd':
        printf("Very Bad");
        break;
 
    case 'f':
        printf("Fail");
        break;
     
    default:
        printf("Invalid Input");
        break;
    }
}
