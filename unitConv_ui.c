#include<stdio.h>

void display_intro(){
        printf("\n---------------------------------------\n");
        printf("Unit converter\n");
}

void display_menu()
{

    printf("---------------------------------------\n");
    printf("Please choose a unit type\n");
    printf("---------------------------------------\n");
    printf("Press (1) for distance\n");
    printf("Press (2) for temperature\n");
    printf("Press (3) for pressure\n");
    printf("Press (4) for mass\n");
    printf("Press (q) to quit\n");

}


float get_value(char* thing)
{
    float value = 0;
    printf("Enter value in %s: ", thing);
    scanf(" %f", &value);
    return value;
}

char get_choice()
{
    char choice = 0;
    scanf(" %c", &choice);
    return choice;
}

void print_result(float value1, char* thing1, float value2, char* thing2)
{
    printf("%.3f %s is %.3f %s\n", value1, thing1, value2, thing2);
}


void lamarr(){
    printf("\n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                                                                                    \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                                      ---++++++++++--                               \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                               -++++++++++++++++++++++++++++                        \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                            +#++++##++++++++++++++++++++++++++++-                   \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                           ++++++++++++--+--------+++-+++++++++-+++++               \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                          ++++++++++++++--+------+------+++++#+++++++++++-          \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                         -++++++++-+-+-+++--++++--------+++++++#++++++++++#         \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                         ++++++++++-++----+-+----+--------++++++++++++++++#-        \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                        +##++++--+++-------+++-------------+++++++++++++++#+        \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                       -##++++++--------------++-----------++++++++++++++###-       \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                       #++++++-------+-----------++----------+++++++#++++##+#       \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                      +++++-+++---------------++++-+--------+++++++#####+###+       \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                     -++++++++----++++-+----+-+++++++--------+++++#####++###+#-     \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                    -+++++++-+++++-+------+++++++++++++----+++++++#####++###++##    \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                   -+++++++++++++--++--++--+---++++++++----+++++++#++++++###++###   \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                   #++++++++++++-+++++-----------++++++--+--+++++++++++####++####   \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                  -##+++#+--+++++++++---+--++--+----+++++++++++++++++#++##+#####-   \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                  +#++##++-++++--++++-++-++----++----+++++++++++++##+#++#++####+    \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                  +#++##++-+-++---++----+--- --#+---+++++++++++++##+++#-#++####     \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                -++#++##+++++++--+++---+++----#+----++++++++++++##++#+   #######    \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                               ######++#+++++++-+-++---++++-++-++++++++++#+++++#####     #######    \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                             -#+######+++++++++-+#+++-++++---++++++++++++++++++##++     +#######    \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                            +#++#++####+#+++++++++++-+++++++--+++#+++++##+####++#+      ########    \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                         +#####++####++##++-++++-+++++++++--++++##++++#######+++++     ##+##+###    \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                +#+-  ###################+++#++++#+++#++++--+#+###+++#########++++     #########    \n");
    printf("\033[48:2:255:165:0m%s\033[m", "         -##########################++#+++++#+++++#+++++###++++############+++++++     -########    \n");
    printf("\033[48:2:255:165:0m%s\033[m", "         +####+#####################++++#++##+++++##+++####++++##+++#########++#++      ######+     \n");
    printf("\033[48:2:255:165:0m%s\033[m", "         ####################+      ++++++####+++###+++#####+++##+++##########+##+                  \n");
    printf("\033[48:2:255:165:0m%s\033[m", "         ###############+           -+++-+++##+++####++###-##+###+++# +##########+                  \n");
    printf("\033[48:2:255:165:0m%s\033[m", "        #############+               ++++++++ #++#####+##      ##+++#  ##########                   \n");
    printf("\033[48:2:255:165:0m%s\033[m", "      -###########+                  +++++##   ####- #+#-      ##+++# -##########                   \n");
    printf("\033[48:2:255:165:0m%s\033[m", "     ###########                      ######                  -##+++# +#######+###                  \n");
    printf("\033[48:2:255:165:0m%s\033[m", "    ###########                         ###+                  #####+  #############                 \n");
    printf("\033[48:2:255:165:0m%s\033[m", "    ##########                            #-               #######+   #############                 \n");
    printf("\033[48:2:255:165:0m%s\033[m", "    #########+                            -#+                          ############                 \n");
    printf("\033[48:2:255:165:0m%s\033[m", "   +#########                                                           ###########                 \n");
    printf("\033[48:2:255:165:0m%s\033[m", "   #########                                                           -#########                   \n");
    printf("\033[48:2:255:165:0m%s\033[m", "   ##+#####+                                                           ##########                   \n");
    printf("\033[48:2:255:165:0m%s\033[m", "   ##+#####                                                            ##########-                  \n");
    printf("\033[48:2:255:165:0m%s\033[m", "   ##+####                                                            -##########+                  \n");
    printf("\033[48:2:255:165:0m%s\033[m", "  -######+                                                            +###++#####+                  \n");
    printf("\033[48:2:255:165:0m%s\033[m", "  +#+####                                                             +##########                   \n");
    printf("\033[48:2:255:165:0m%s\033[m", "  +######                                                             #####+#####                   \n");
    printf("\033[48:2:255:165:0m%s\033[m", "  -######                                                             ##########-                   \n");
    printf("\033[48:2:255:165:0m%s\033[m", "   ######                                                             ##########                    \n");
    printf("\033[48:2:255:165:0m%s\033[m", "   #######                                                            #########-                    \n");
    printf("\033[48:2:255:165:0m%s\033[m", "   +######                                                            #########                     \n");
    printf("\033[48:2:255:165:0m%s\033[m", "    #######                                                           ########-                     \n");
    printf("\033[48:2:255:165:0m%s\033[m", "    #+####-                                                          -########                      \n");
    printf("\033[48:2:255:165:0m%s\033[m", "    #####-                                                           +#######                       \n");
    printf("\033[48:2:255:165:0m%s\033[m", "      +                                                              #######-                       \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                                                     ######+                        \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                                                    -######                         \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                                                    ######                          \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                                                    #####                           \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                                                    ####                            \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                                                   -###                             \n");
    printf("\033[48:2:255:165:0m%s\033[m", "                                                                   --                               \n");
    printf("\n");
}