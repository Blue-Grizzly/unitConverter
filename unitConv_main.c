#include<stdio.h>
#include"unitConv.h"


int main()
{
    display_intro();

    while(1)
    {
        display_menu();
        char choice = get_choice();

        switch(choice)
        {
            case 'd':
                distance_selected();
                distance_menu();
                break;
            case 't':
                temperature_selected();
                temperature_menu();
                break;
            case 'p':
                //pressure
                break;
            case 'm':
                //mass
                break;
            case('3'):
                lamarr();
                break;
            case 'q':
                printf("Quitting\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

}