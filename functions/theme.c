#include "../headers/themes.h"

void print_ascii_menu(Theme theme)
{
    switch (theme)
    {
    case THEME_DEFAULT:
        printf("===========================================================\n");
        printf("  _   _                        ___    _____   _____ ____  \n");
        printf(" | \\ | |                      |__ \\  |  __ \\ / ____|  _ \\ \n");
        printf(" |  \\| | __ _ _ __ ___   ___     ) | | |__) | |  __| |_) |\n");
        printf(" | . ` |/ _` | '_ ` _ \\ / _ \\   / /  |  _  /| | |_ |  _ < \n");
        printf(" | |\\  | (_| | | | | | |  __/  / /_  | | \\ \\| |__| | |_) |\n");
        printf(" |_| \\_|\\__,_|_| |_| |_|\\___| |____| |_|  \\_\\\\_____|____/ \n");
        printf("\n");
        printf("                  Name Color Generator\n");
        printf("===========================================================\n\n");
        break;
    case THEME_DARK:
        printf("+==============================================================================+\n");
        printf("|                                                                              |\n");
        printf("|                                                                              |\n");
        printf("|     ooooo      ooo                                              .oooo.       |\n");
        printf("|     `888b.     `8'                                            .dP\"\"Y88b      |\n");
        printf("|      8 `88b.    8   .oooo.   ooo. .oo.  .oo.    .ooooo.             ]8P'     |\n");
        printf("|      8   `88b.  8  `P  )88b  `888P\"Y88bP\"Y88b  d88' `88b          .d8P'      |\n");
        printf("|      8     `88b.8   .oP\"888   888   888   888  888ooo888        .dP'         |\n");
        printf("|      8       `888  d8(  888   888   888   888  888    .o      .oP     .o     |\n");
        printf("|     o8o        `8  `Y888\"\"8o o888o o888o o888o `Y8bod8P'      8888888888     |\n");
        printf("|                                                                              |\n");
        printf("|                                                                              |\n");
        printf("|                                                                              |\n");
        printf("|     ooooooooo.     .oooooo.    oooooooooo.                                   |\n");
        printf("|     `888   `Y88.  d8P'  `Y8b   `888'   `Y8b                                  |\n");
        printf("|      888   .d88' 888            888     888                                  |\n");
        printf("|      888ooo88P'  888            888oooo888'                                  |\n");
        printf("|      888`88b.    888     ooooo  888    `88b                                  |\n");
        printf("|      888  `88b.  `88.    .88'   888    .88P                                  |\n");
        printf("|     o888o  o888o  `Y8bood8P'   o888bood8P'                                   |\n");
        printf("|                                                                              |\n");
        printf("|                                                                              |\n");
        printf("+==============================================================================+\n");
        break;
    case THEME_TALL:
        printf(" /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\ \n");
        printf("//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\\n");
        printf("\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\n");
        printf(" \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/ \n");
        printf(" /\\                ,--.                                                      /\\ \n");
        printf("//\\\\             ,--.'|                         ____                        //\\\\\n");
        printf("\\\\//         ,--,:  : |                       ,'  , `.                      \\\\//\n");
        printf(" \\/       ,`--.'`|  ' :                    ,-+-,.' _ |                       \\/ \n");
        printf(" /\\       |   :  :  | |                 ,-+-. ;   , ||                       /\\ \n");
        printf("//\\\\      :   |   \\ | :    ,--.--.     ,--.'|'   |  ||    ,---.             //\\\\\n");
        printf("\\\\//      |   : '  '; |   /       \\   |   |  ,', |  |,   /     \\            \\\\//\n");
        printf(" \\/       '   ' ;.    ;  .--.  .-. |  |   | /  | |--'   /    /  |            \\/ \n");
        printf(" /\\       |   | | \\   |   \\__/\\: . .  |   : |  | ,     .    ' / |            /\\ \n");
        printf("//\\\\      '   : |  ; .'   ,\" .--.; |  |   : |  |/      '   ;   /|           //\\\\\n");
        printf("\\\\//      |   | '`--'    /  /  ,.  |  |   | |`-'       '   |  / |           \\\\//\n");
        printf(" \\/       '   : |       ;  :   .'   \\ |   ;/           |   :    |            \\/ \n");
        printf(" /\\       ;   |.'       |  ,     .-./ '---'             \\   \\  /             /\\ \n");
        printf("//\\\\      '---'          `--`---'                        `----'             //\\\\\n");
        printf("\\\\//            ,----,             .----.      ,----..        ,---,.        \\\\//\n");
        printf(" \\/           .'   .' \\           /   /  \\    /   /   \\     ,'  .'  \\        \\/ \n");
        printf(" /\\         ,----,'    |         ;   :    \\  |   :     :  ,---.' .' |        /\\ \n");
        printf("//\\\\        |    :  .  ;         |   | .\\ :  .   |  ;. /  |   |  |: |       //\\\\\n");
        printf("\\\\//        ;    |.'  /          .   : |: |  .   ; /--`   :   :  :  /       \\\\//\n");
        printf(" \\/         `----'/  ;           |   |  \\ :  ;   | ;  __  :   |    ;         \\/ \n");
        printf(" /\\           /  ;  /            |   : .  /  |   : |.' .' |   :     \\        /\\ \n");
        printf("//\\\\         ;  /  /-,           ;   | |  \\  .   | '_.' : |   |   . |       //\\\\\n");
        printf("\\\\//        /  /  /.`|           |   | ;\\  \\ '   ; : \\  | '   :  '; |       \\\\//\n");
        printf(" \\/       ./__;      :           :   ' | \\.' '   | '/  .' |   |  | ;         \\/ \n");
        printf(" /\\       |   :    .'            :   : :-'   |   :    /   |   :   /          /\\ \n");
        printf("//\\\\      ;   | .'               |   |.'      \\   \\ .'    |   | ,'          //\\\\\n");
        printf("\\\\//      `---'                  `---'         `---`      `----'            \\\\//\n");
        printf(" \\/                                                                          \\/ \n");
        printf(" /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\ \n");
        printf("//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\\n");
        printf("\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\n");
        printf(" \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/  \\/ \n");
        break;
    default:
        printf("Unknown theme. Using default theme...\n");
        print_ascii_menu(THEME_DEFAULT);
        break;
    }

    printf("Welcome! Follow the prompts to generate a unique color from your name.\n");
    printf("Each part of your name (first, middle, last) will be converted into an RGB value.\n\n");
}
