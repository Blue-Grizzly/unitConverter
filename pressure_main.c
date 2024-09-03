float atmosphere_to_pascal(float atm)
{
    float pascal = atm * 101325;
    return pascal;
}

float pascal_to_atmosphere(float pascal)
{
    float atm = pascal / 101325;
    return atm;
}

float torr_to_pascal(float torr)
{
    float pascal = torr * 133.322;
    return pascal;
}

float pascal_to_torr(float pascal)
{
    float torr = pascal / 133.322;
    return torr;
}

float centimeters_of_water_to_inches_of_mercury(float cm)
{
    float inches = cm * 0.393701;
    return inches;
}

float inches_of_mercury_to_centimeters_of_water(float inches)
{
    float cm = inches / 0.393701;
    return cm;
}

void pressure_menu()
{
    char choice = get_choice();
    float value; 
                
    switch(choice)
    {
        case 'a':
            printf("Atmospheres to pascals\n");
            value = get_value("Atmospheres");
            print_result(value, "Atmospheres", atmosphere_to_pascal(value), "Pascals");
            break;
        case 'p':
            printf("Pascals to atmospheres\n");
            value = get_value("Pascals");
            print_result(value, "Pascals", pascal_to_atmosphere(value), "Atmospheres");
            break;
        case 't':
            printf("Torr to pascals\n");
            value = get_value("Torr");
            print_result(value, "Torr", torr_to_pascal(value), "Pascals");
            break;
        case 'r':
            printf("Pascals to Torr\n");
            value = get_value("Pascals");
            print_result(value, "Pascals", pascal_to_torr(value), "Torr");
            break;
        case 'c':
            printf("Centimeters of water to inches of mercury\n");
            value = get_value("Centimeters of water");
            print_result(value, "Centimeters of water", centimeters_of_water_to_inches_of_mercury(value), "Inches of mercury");
            break;
        case 'i':
            printf("Inches of mercury to centimeters of water\n");
            value = get_value("Inches of mercury");
            print_result(value, "Inches of mercury", inches_of_mercury_to_centimeters_of_water(value), "Centimeters of water");
            break;
        case 'b':
            break;
        default:
            printf("Invalid choice\n");
    }
}