void display_intro(){
        printf("\n---------------------------------------\n");
        printf("Unit converter\n");
}

void display_menu()
{

    printf("---------------------------------------\n");
    printf("Please choose a unit type\n");
    printf("---------------------------------------\n");
    printf("Press (d) for distance\n");
    printf("Press (t) for temperature\n");
    printf("Press (p) for pressure\n");
    printf("Press (m) for mass\n");
    printf("Press (q) to quit\n");

}

void distance_selected()
{
    printf("Distance Selected\n");
    printf("Please choose a conversion\n");
    printf("Press (m) for meters to feet\n");
    printf("Press (f) for feet to meters\n");
    printf("Press (k) for kilometers to miles\n");
    printf("Press (l) for miles to kilometers\n");
    printf("Press (c) for centimeters to inches\n");
    printf("Press (i) for inches to centimeters\n");
    printf("Press (n) for nautical miles to kilometers\n");
    printf("Press (j) for kilometers to nautical miles\n");
    printf("Press (b) to go back\n");
}

void temperature_selected()
{
    printf("Temperature Selected\n");
    printf("Please choose a conversion\n");
    printf("Press (c) for celcius to fahrenheit\n");
    printf("Press (f) for fahrenheit to celcius\n");
    printf("Press (e) for celcius to kelvin\n");
    printf("Press (k) for kelvin to celcius\n");
    printf("Press (g) for fahrenheit to kelvin\n");
    printf("Press (h) for kelvin to fahrenheit\n");
    printf("Press (b) to go back\n");
}

void pressure_selected()
{
    printf("Pressure Selected\n");
    printf("Please choose a conversion\n");
    printf("Press (p) for psi to atm\n");
    printf("Press (a) for atm to psi\n");
    printf("Press (b) to go back\n");
}

void mass_selected()
{
    printf("Mass Selected\n");
    printf("Please choose a conversion\n");
    printf("Press (k) for kilograms to pounds\n");
    printf("Press (p) for pounds to kilograms\n");
    printf("Press (b) to go back\n");
}


float get_value()
{
    float value = 0;
    scanf(" %f", &value);
    return value;
}

char get_choice()
{
    char choice = 0;
    scanf(" %c", &choice);
    return choice;
}