

float lunar_distance_to_light_nano_seconds(float ld)
{
    float lns = ld * 1.28;
    return lns;
}

float light_nano_seconds_to_lunar_distance(float lns)
{
    float ld = lns / 1.28;
    return ld;
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

float planck_length_to_yoctometers(float pl)
{
    float ym = pl * 1.616255e-35;
    return ym;
}

float yoctometers_to_planck_length(float ym)
{
    float pl = ym / 1.616255e-35;
    return pl;
}





void distance_menu()
{
                char choice = get_choice();
                float value; 
                switch(choice)
                {
                    case 'n':
                        printf("Light nano seconds to lunar distance\n");
                        value = get_value("Light nano seconds");
                        print_result(value, "Lunar distance", light_nano_seconds_to_lunar_distance(value), "Light nano seconds");
                        break;
                    case 'l':
                        printf("Lunar distance to light nano seconds\n");
                        value = get_value("Lunar distance");
                        print_result(value, "Light nano seconds", lunar_distance_to_light_nano_seconds(value), "Lunar distance");
                        break;
                    case 'p':
                        printf("Planck length to yoctometers\n");
                        value = get_value("Planck length");
                        print_result(value, "Yoctometers", planck_length_to_yoctometers(value), "Planck length");
                        break;
                    case 'y':
                        printf("Yoctometers to planck length\n");
                        value = get_value("Yoctometers");
                        print_result(value, "Planck length", yoctometers_to_planck_length(value), "Yoctometers");
                        break;

                    case 'k':
                        printf("Kilometers to nautical miles\n");
                        value = get_value("Kilometers");
                        print_result(value, "Nautical miles", kilometers_to_nautical_miles(value), "Kilometers");
                        break;
                    case 'm':
                        printf("Nautical miles to kilometers\n");
                        value = get_value("Nautical miles");
                        print_result(value, "Kilometers", nautical_miles_to_kilometers(value), "Nautical miles");
                        break;
                    case 'b':
                        break;
                    default:
                        printf("Invalid choice\n");
                }
}