#include <stdio.h>

int main()
{
    int n;
    printf("Enter the month\n");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("January falls in winter season. This is the Coldest season of the month.");
         break;
        case 2:
            printf("February falls in winter season. This is the Coldest season of the month.");
         break;
        case 3:
            printf("March falls in summer season. Its time for holidays.");
         break;
        case 4:
            printf("April falls in summer season. Its time for holidays.");
         break;
        case 5:
            printf("May falls in summer season. Its time for holidays.");
         break;
        case 6:
            printf("June falls in spring season. This is a season of joy and happiness.");
         break;
        case 7:
            printf("July falls in spring season. This is a season of joy and happiness.");
         break;
        case 8:
            printf("August falls in spring season. This is a season of joy and happiness.");
         break;
        case 9:
            printf("September falls in autumn season. This is a season of rainbows.");
         break;
        case 10:
            printf("October falls in autumn season. This is a season of rainbows.");
         break;
        case 11:
            printf("November falls in autumn season. This is a season of rainbows.");
         break;
        case 12:
            printf("December falls in winter season. This is the Coldest season of the month.");
         break;
    }
    
}
