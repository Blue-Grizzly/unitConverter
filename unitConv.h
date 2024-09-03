#include"unitConv_ui.c"
#include"temperature_main.c"
#include"temperature_ui.c"
#include"distance_main.c"
#include"distance_ui.c"
#include"pressure_main.c"
#include"pressure_ui.c"

void display_intro();
void display_menu();
void distance_menu();
void temperature_menu();
void pressure_menu();
void distance_selected();
void temperature_selected();
void pressure_selected();
float get_value(char* thing);
char get_choice();
void print_result(float value1, char* thing1, float value2, char* thing2);
void lamarr();
float celcius_to_fahrenheit(float celc);
float fahrenheit_to_celcius(float fahr);
float kelvin_to_celcius(float kelv);
float celcius_to_kelvin(float celc);
float fahrenheit_to_kelvin(float fahr);
float kelvin_to_fahrenheit(float kelv);
float light_nano_seconds_to_lunar_distance(float lns);
float lunar_distance_to_light_nano_seconds(float ld);
float kilometers_to_nautical_miles(float km);
float nautical_miles_to_kilometers(float nm);
float planck_length_to_yoctometers(float pl);
float yoctometers_to_planck_length(float ym);
