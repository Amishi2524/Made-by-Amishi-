#include <stdio.h>

int main()
{
    int number;
    printf("Hi Byte!\n");
    printf("I know that you are nit good at decision making and are also HUNGRY, somewhere is what you can do.....Enter any number between 1 to 5 and see the thing that you will eat!!!\n");
    scanf("%d", &number);
    switch(number)
    {
        case 1: printf("Dish: Biriyani, Raita, Coke\n");
                printf("Price: 650 \n");
                break;
        case 2: printf("Dish: Veg Aloo Tikki Burger, French Fries, Hazelnut latte\n");
                printf("Price: 1050 \n");
                break;
        case 3: printf("Dish: Double Masala Maggie\n");
                printf("Price: 70 \n");
                break;
        case 4: printf("Dish: Manchurian, Fried Rice, Wontons, Veg Paneer Chilli \n");
                printf("Price: 500 \n");
                break;
        case 5: printf("Dish: Burrito Bowl, Salsa\n");
                printf("Price: 450 \n");
                break;
    }
    return 0;
}
