
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
