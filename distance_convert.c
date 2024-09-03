float feet_to_meters(float feet)
{
    float meters = feet * 0.3048;
    return meters;
}

float meters_to_feet(float meters)
{
    float feet = meters / 0.3048;
    return feet;
}

float kilometers_to_miles(float km)
{
    float miles = km * 0.621371;
    return miles;
}

float miles_to_kilometers(float miles)
{
    float km = miles / 0.621371;
    return km;
}

float inches_to_centimeters(float inches)
{
    float cm = inches * 2.54;
    return cm;
}

float centimeters_to_inches(float cm)
{
    float inches = cm / 2.54;
    return inches;
}

float kilometers_to_nautical_miles(float km)
{
    float nm = km / 1.852;
    return nm;
}

float nautical_miles_to_kilometers(float nm)
{
    float km = nm * 1.852;
    return km;
}
