#include<stdio.h>

int main(){
    int num=0;

    int first_digit=0;
    int middle_digit=0;
    int last_digit=0;
    
    int final_num=0;
    int num_len=0;

    
    printf("Enter num: ");
    scanf("%d",&num);
    int original=num;
    
    while(original>0){                          // findin the len of the entered num
        original=original/10;
        num_len++;
    }


    // int place = (int)pow(10, num_len-1);    will totally help the dependency upon the math.h function
    // the pow function works with double, so it will cause problems like 10,000 will be made 9999.99999
    int place = 1;
    for(int i=0;i<num_len-1;i++){
        place=place*10;
    }
    // printf("%d",place);

    first_digit=num/place;
    last_digit=num%10;
    middle_digit=(num%place);                       // dunno why but dont remove!!
    middle_digit=(num%place) - (middle_digit%10);   // if num=54321, middle_digit will have 4320;
    
    final_num=(last_digit*place)   // like last digit * the total length
               +middle_digit       // just add the middle num
               +first_digit;       // will simply add the first digit in the end as the middle num has the end digit as 0!


    printf("%d ",final_num);

    return 0;
}