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
            case '1':
                distance_selected();
                distance_menu();
                break;
            case '2':
                temperature_selected();
                temperature_menu();
                break;
            case '3':
                pressure_selected();
                pressure_menu();
                break;
            case '4':
                //mass
                break;
            case('h'):
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