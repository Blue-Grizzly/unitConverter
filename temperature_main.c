

float celcius_to_fahrenheit(float celc)
{
    float fahr = celc * 9/5 +32;
    return fahr;
}

float fahrenheit_to_celcius(float fahr)
{
    float celc = (fahr -32) * 5/9;
    return celc;
}

float kelvin_to_celcius(float kelv)
{
    float celc = kelv - 273.15;
    return celc;
}

float celcius_to_kelvin(float celc)
{
    float kelv = celc + 273.15;
    return kelv;
}

float fahrenheit_to_kelvin(float fahr)
{
    float kelv = (fahr -32) * 5/9 + 273.15;
    return kelv;
}

float kelvin_to_fahrenheit(float kelv)
{
    float fahr = (kelv - 273.15) * 9/5 + 32;
    return fahr;
}




void temperature_menu()
{
    char choice = get_choice();
    float value;

    switch(choice)
    {
    case 'c':
        printf("Celcius to Fahrenheit\n");
        value = get_value("Celcius");
        print_result(value, "Fahrenheit", celcius_to_fahrenheit(value), "Celcius");
        break;
    case 'f':
        value = get_value("Fahrenheit");
        print_result(value, "Celcius", fahrenheit_to_celcius(value), "Fahrenheit");
        break;
    case 'k':
        value = get_value("Celcius");
        print_result(value, "Kelvin", celcius_to_kelvin(value), "Celcius");
        break;
    case 'e':
        value = get_value("Kelvin");
        print_result(value, "Celcius", kelvin_to_celcius(value), "Kelvin");
        break;
    case 'g':
        value = get_value("Fahrenheit");
        print_result(value, "Kelvin", fahrenheit_to_kelvin(value), "Fahrenheit");
        break;
    case 'h':
        value = get_value("Kelvin");
        print_result(value, "Fahrenheit", kelvin_to_fahrenheit(value), "Kelvin");
        break;
    case 'b':
        break;
    default:
        printf("Invalid choice\n");
    }
}