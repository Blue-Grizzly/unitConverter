#include<stdio.h>
#include"unitConv.h"
#include"unitConv_ui.c"
#include"temperature_convert.c"
#include"distance_convert.c"

int main()
{
    display_intro();

    while(1)
    {
        display_menu();
        char choice = get_choice();
        float value;

        switch(choice)
        {
            case 'd':
                distance_selected();
                choice = get_choice(); 
                switch(choice)
                {
                    case 'm':
                        printf("Meters to feet\n");
                        printf("Enter value in meters: ");
                        value = get_value();
                        printf("Value in feet: %f\n", meters_to_feet(value));
                        break;
                    case 'f':
                        printf("Feet to meters\n");
                        printf("Enter value in feet: ");
                        value = get_value();
                        printf("Value in meters: %f\n", feet_to_meters(value));
                        break;
                    case 'k':
                        printf("Kilometers to miles\n");
                        printf("Enter value in kilometers: ");
                        value = get_value();
                        printf("Value in miles: %f\n", kilometers_to_miles(value));
                        break;
                    case 'i':
                        printf("Inches to centimeters\n");
                        printf("Enter value in inches: ");
                        value = get_value();
                        printf("Value in centimeters: %f\n", inches_to_centimeters(value));
                        break;
                    case 'b':
                        break;
                    default:
                        printf("Invalid choice\n");
                }
                break;
            case 't':
                temperature_selected();
                choice = get_choice();
                switch(choice)
                {
                    case 'c':
                        printf("Celcius to Fahrenheit\n");
                        printf("Enter value in celcius: ");
                        value = get_value();
                        printf("Value in Fahrenheit: %f\n", celcius_to_fahrenheit(value));
                        break;
                    case 'f':
                        printf("Fahrenheit to Celcius\n");
                        printf("Enter value in fahrenheit: ");
                        value = get_value();
                        printf("Value in Celcius: %f\n", fahrenheit_to_celcius(value));
                        break;
                    case 'k':
                        printf("Celcius to Kelvin\n");
                        printf("Enter value in celcius: ");
                        value = get_value();
                        printf("Value in Kelvin: %f\n", celcius_to_kelvin(value));
                        break;
                    case 'b':
                        break;
                    default:
                        printf("Invalid choice\n");
                }
                break;
            case 'p':
                pressure_selected();
                choice = get_choice();
                switch(choice)
                {
                    case 'p':
                        printf("PSI to ATM\n");
                        break;
                    case 'a':
                        printf("ATM to PSI\n");
                        break;
                    case 'b':
                        break;
                    default:
                        printf("Invalid choice\n");
                }
                break;
            case 'm':
                mass_selected();
                choice = get_choice();
                switch(choice)
                {
                    case 'k':
                        printf("Kilograms to Pounds\n");
                        break;
                    case 'p':
                        printf("Pounds to Kilograms\n");
                        break;
                    case 'b':
                        break;
                    default:
                        printf("Invalid choice\n");
                }
                break;
            case 'q':
                printf("Quitting\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

}