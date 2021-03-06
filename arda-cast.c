#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define COLUMNS 10
#define MINLEVEL 1
#define MAXLEVEL 65
#define W 25
#define X 24

#define CYCLE ( i = start ; i < ( step * COLUMNS + start ) ; i += step )

short quantum_spike( short L );     /* Квантовый шип */
short black_lightning( short L );   /* Черная молния */
short hand_of_chaos( short L );     /* Рука хаоса */
short acetum_primus( short L );     /* Асетум праймус */
short chain_lightning( short L );   /* Цепная молния*/
short caustic_fount( short L );     /* Едкий фонтан */
short ethereal_fist( short L );     /* Эфирный кулак */
short magnetic_thrust( short L );   /* Магнитный рывок */
short black_fist( short L );        /* Черный кулак */
short acid_blast( short L );        /* Кислотные брызги */
short sonic_resonance( short L );   /* Звуковой резонанс */
short sulfurous_spray( short L );   /* Серные брызги */
short fireball( short L );          /* Огненный шар */
short spectral_furor( short L );    /* Призрачное искажение */
short energy_drain( short L );      /* Высосать энергию */
short colour_spray( short L );      /* Каскад цветных брызг */
short lightning_bolt( short L );    /* Молния */
short disruption( short L );        /* Распад */
short shocking_grasp( short L );    /* Электроудар */
short burning_hands( short L );     /* Жгущие руки */
short galvanic_whip( short L );     /* Электрокнут */
short chill_touch( short L );       /* Ледяное касание */
short black_hand( short L );        /* Черная рука */
short magic_missile( short L );     /* Волшебная ракета */

short spiritual_wrath( short L );   /* Гнев валаров */
short necromantic_touch( short L ); /* Касание некроманта */
short harm( short L );              /* Вред */
short flamestrike( short L );       /* Огненный удар */
short call_lightning( short L );    /* Вызвать молнию */
short dispel_evil( short L );       /* Рассеять зло */
short cause_critical( short L );    /* Нанесение ран */
short earthquake( short L );        /* Землетрясение */
short cause_serious( short L );     /* Нанесение порезов */
short cause_light( short L );       /* Нанесение царапин */

short grasp( short L );             /* Придушить */
short shriek( short L );            /* Визг */

short blizzard( short L );          /* Буран */
short glacial_pike( short L );      /* Ледяное копье */


int main( int argc, char *argv[] )
{
    setlocale( LC_ALL, "RUS" );

    if ( argc != 3 ) {
        printf("Введите два аргумента: начальный уровень и инкремент.\n");
        return 1;
    }

    short start = atoi( argv[1] );
    
    if ( start < MINLEVEL || start > MAXLEVEL ) {
        printf("Уровень персонажа должен быть в пределах %d - %d.\n", MINLEVEL, MAXLEVEL);
        return 1;
    }

    short step = atoi( argv[2] );
    
    if ( step < 1 || step > 5 ) {
        printf("Инкремент должен быть в пределах 1 - 5.\n");
        return 1;
    }
    
    short i;
    
    printf("\nЗ А К Л И Н А Н И Я   А Р Д Ы  *  Карина, 2015  *  arda.pp.ru\n\n");
    printf("Заклинание/уров."); for CYCLE printf(" %4d", i ); printf("\n\n");

    printf("Квантовый шип\t");      for CYCLE printf(" %4d", quantum_spike( i ));         printf("\n");
    printf("Черная молния\t");      for CYCLE printf(" %4d", black_lightning( i ));       printf("\n");
    printf("Рука хаоса\t");         for CYCLE printf(" %4d", hand_of_chaos( i ));         printf("\n");
    printf("Асетум праймус\t");     for CYCLE printf(" %4d", acetum_primus( i ));         printf("\n");
    printf("Цепная молния\t");      for CYCLE printf(" %4d", chain_lightning( i ));       printf("\n");
    printf("Едкий фонтан\t");       for CYCLE printf(" %4d", caustic_fount( i ));         printf("\n");
    printf("Эфирный кулак\t");      for CYCLE printf(" %4d", ethereal_fist( i ));         printf("\n");
    printf("Магнитный рывок\t");    for CYCLE printf(" %4d", magnetic_thrust( i ));       printf("\n");
    printf("Черный кулак\t");       for CYCLE printf(" %4d", black_fist( i ));            printf("\n");
    printf("Кислотные брызги");     for CYCLE printf(" %4d", acid_blast( i ));            printf("\n");
    printf("Звук. резонанс\t");     for CYCLE printf(" %4d", sonic_resonance( i ));       printf("\n");
    printf("Серные брызги\t");      for CYCLE printf(" %4d", sulfurous_spray( i ));       printf("\n");
    printf("Огненный шар\t");       for CYCLE printf(" %4d", fireball( i ));              printf("\n");
    printf("Призрач. искаж.\t");    for CYCLE printf(" %4d", spectral_furor( i ));        printf("\n");
    printf("Высосать энергию");     for CYCLE printf(" %4d", energy_drain( i ));          printf("\n");
    printf("Каскад цвет. бр.");     for CYCLE printf(" %4d", colour_spray( i ));          printf("\n");
    printf("Молния\t\t");           for CYCLE printf(" %4d", lightning_bolt( i ));        printf("\n");
    printf("Распад\t\t");           for CYCLE printf(" %4d", disruption( i ));            printf("\n");
    printf("Электроудар\t");        for CYCLE printf(" %4d", shocking_grasp( i ));        printf("\n");
    printf("Жгущие руки\t");        for CYCLE printf(" %4d", burning_hands( i ));         printf("\n");
    printf("Электрокнут\t");        for CYCLE printf(" %4d", galvanic_whip( i ));         printf("\n");
    printf("Ледяное касание\t");    for CYCLE printf(" %4d", chill_touch( i ));           printf("\n");
    printf("Черная рука\t");        for CYCLE printf(" %4d", black_hand( i ));            printf("\n");
    printf("Волшебная ракета");     for CYCLE printf(" %4d", magic_missile( i ));         printf("\n");

    printf("\n"); /* УМЕРТВИЕ */

    printf("Придушить\t");          for CYCLE printf(" %4d", grasp( i ));                 printf("\n");
    printf("Визг\t\t");             for CYCLE printf(" %4d", shriek( i ));                printf("\n");
    printf("Молния\t\t");           for CYCLE printf(" %4d", lightning_bolt( i ));        printf("\n");
    printf("Высосать энергию");     for CYCLE printf(" %4d", energy_drain( i ));          printf("\n");
    printf("Вред\t\t");             for CYCLE printf(" %4d", harm( i ));                  printf("\n");
    printf("Электроудар\t");        for CYCLE printf(" %4d", shocking_grasp( i ));        printf("\n");
    printf("Ледяное касание\t");    for CYCLE printf(" %4d", chill_touch( i ));           printf("\n");

    printf("\n"); /* ЛЕКАРЬ */

    printf("Гнев валаров\t");       for CYCLE printf(" %4d", spiritual_wrath( i ));       printf("\n");
    printf("Касание некром. ");     for CYCLE printf(" %4d", necromantic_touch( i ));     printf("\n");
    printf("Вред\t\t");             for CYCLE printf(" %4d", harm( i ));                  printf("\n");
    printf("Огненный удар\t");      for CYCLE printf(" %4d", flamestrike( i ));           printf("\n");
    printf("Вызвать молиню\t");     for CYCLE printf(" %4d", call_lightning( i ));        printf("\n");
    printf("Рассеять зло\t");       for CYCLE printf(" %4d", dispel_evil( i ));           printf("\n");
    printf("Нанесение ран\t");      for CYCLE printf(" %4d", cause_critical( i ));        printf("\n");
    printf("Землетрясение\t");      for CYCLE printf(" %4d", earthquake( i ));            printf("\n");
    printf("Нанес. порезов\t");     for CYCLE printf(" %4d", cause_serious( i ));         printf("\n");
    printf("Нанес. царапин\t");     for CYCLE printf(" %4d", cause_light( i ));           printf("\n");

    printf("\n"); /* ДИКАРЬ */

    printf("Буран\t\t");            for CYCLE printf(" %4d", blizzard( i ));              printf("\n");
    printf("Ледяное копье\t");      for CYCLE printf(" %4d", glacial_pike( i ));          printf("\n");

    return 0;
}

short quantum_spike( short L )
{
    if ( L >= 48 && L <= MAXLEVEL ) return ( L * 5 + 195 );
    else return 0;
}

short black_lightning( short L )
{
    if ( L >= 46 && L <= MAXLEVEL ) return ( L * 13 / 2 + 150 );
    else return 0;
}

short hand_of_chaos( short L )
{
    if ( L >= 37 && L <= MAXLEVEL ) return ( L * 5 + 35 );
    else return 0;
}

short acetum_primus( short L )
{
    if ( L >= 37 && L <= MAXLEVEL ) return ( L * 13 / 2 + 9 );
    else return 0;
}

short chain_lightning( short L )
{
    if ( L >= 36 && L <= MAXLEVEL ) return ( L * 2 + 110 );
    else return 0;
}

short caustic_fount( short L ) /* L{42*9-31 */
{
    if ( L >= 34 && L <= MAXLEVEL )
    {
        if ( L < 42 ) return ( L * 9 - 31 );
        else return ( 42 * 9 - 31 );
    }
    else return 0;
}

short ethereal_fist( short L ) /* L{35*6 */
{
    if ( L >= 32 && L <= MAXLEVEL )
    {
        if ( L < 35 ) return ( L * 6 );
        else return ( 35 * 6 );
    }
    else return 0;
}

short magnetic_thrust( short L ) /* L{29*11+10 */
{
    if ( L >= 27 && L <= MAXLEVEL )
    {
        if ( L < 29 ) return ( L * 11 + 10 );
        else return ( 29 * 11 + 10 );
    }
    else return 0;
}

short black_fist( short L ) /* L{35*11/2+10 */
{
    if ( L >= 23 && L <= MAXLEVEL )
    {
        if ( L < 35 ) return ( L * 11 / 2 + 10 );
        else return ( 35 * 11 / 2 + 10 );
    }
    else return 0;
}

short acid_blast( short L )
{
    if ( L >= 20 && L <= MAXLEVEL ) return ( L * 7 / 2 + 45 );
    else return 0;
}

short sonic_resonance( short L ) /* L{23*6 */
{
    if ( L >= 19 && L <= MAXLEVEL )
    {
        if ( L < 23 ) return ( L * 6 );
        else return ( 23 * 6 );
    }
    else return 0;
}

short sulfurous_spray( short L ) /* L{19*9+10 */
{
    if ( L >= 18 && L <= MAXLEVEL )
    {
        if ( L < 19 ) return ( L * 9 + 10 );
        else return ( 19 * 9 + 10 );
    }
    else return 0;
}

short fireball( short L ) /* L*3+30-300/(L}15-5) */
{
    if ( L >= 15 && L <= MAXLEVEL )
    {
        if ( L > 15 ) return ( L * 3 + 30 - 300 / (L - 5) );
        else return ( L * 3 + 30 - 300 / (15 - 5) );
    }
    else return 0;
}

short spectral_furor( short L ) /* L{16*5+10 */
{
    if ( L >= 14 && L <= MAXLEVEL )
    {
        if ( L < 16 ) return ( L * 5 + 10 );
        else return ( 16 * 5 + 10 );
    }
    else return 0;
}

short energy_drain( short L )
{
    if ( L >= 13 && L <= MAXLEVEL ) return ( 3 * (L - 1) );
    else return 0;
}

short colour_spray( short L ) /* 70+L/2-100/(L}11-9) */
{
    if ( L >= 11 && L <= MAXLEVEL )
    {
        if ( L > 11 ) return ( 70 + L / 2 - 100 / (L - 9) );
        else return ( 70 + L / 2 - 100 / (11 - 9) );
    }
    else return 0;
}

short lightning_bolt( short L )
{
    if ( L >= 9 && L <= MAXLEVEL ) return ( L + 30 );
    else return 0;
}

short disruption( short L ) /* L{14*9/2+10 */
{
    if ( L >= 8 && L <= MAXLEVEL )
    {
        if ( L < 14 ) return ( L * 9 / 2 + 10 );
        else return ( 14 * 9 / 2 + 10 );
    }
    else return 0;
}

short shocking_grasp( short L ) /* L/2+48-50/(L}7-5) */
{
    if ( L >= 7 && L <= MAXLEVEL )
    {
        if ( L > 7 ) return ( L / 2 + 48 - 50 / (L - 5) );
        else return ( L / 2 + 48 - 50 / (7 - 5) );
    }
    else return 0;
}

short burning_hands( short L ) /* L/2+28-50/(L}5-3) */
{
    if ( L >= 5 && L <= MAXLEVEL )
    {
        if ( L > 5 ) return ( L / 2 + 28 - 50 / (L - 3) );
        else return ( L / 2 + 28 - 50 / (5 - 3) );
    }
    else return 0;
}

short galvanic_whip( short L ) /* L{10*4+10 */
{
    if ( L >= 4 && L <= MAXLEVEL )
    {
        if ( L < 10 ) return ( L * 4 + 10 );
        else return ( 10 * 4 + 10 );
    }
    else return 0;
}

short chill_touch( short L ) /* 16+L/3-40/(L}5) */
{
    if ( L >= 3 && L <= MAXLEVEL )
    {
        if ( L > 5 ) return ( 16 + L / 3 - 40 / L );
        else return ( 16 + L / 3 - 40 / 5 );
    }
    else return 0;
}

short black_hand( short L ) /* L{5*5+5 */
{
    if ( L >= 2 && L <= MAXLEVEL )
    {
        if ( L < 5 ) return ( L * 5 + 5 );
        else return ( 5 * 5 + 5 );
    }
    else return 0;
}

short magic_missile( short L ) /* (L/4)}3 */
{
    if ( L >= 1 && L <= MAXLEVEL )
    {
        if ( (L / 4) > 3 ) return ( L / 4 );
        else return 3;
    }
    else return 0;
}

/* ЛЕКАРЬ */

short spiritual_wrath( short L )
{
    if ( L >= 48 && L <= MAXLEVEL ) return ( 44 * W );
    else return 0;
}

short necromantic_touch( short L )
{
    if ( L >= 40 && L <= MAXLEVEL ) return ( L * 3 );
    else return 0;
}

short harm( short L )
{
    if ( L >= 13 && L <= MAXLEVEL ) return ( L * 2 + 30 );
    else return 0;
}

short flamestrike( short L )
{
    if ( L >= 11 && L <= MAXLEVEL ) return ( L + 8 + L * (W - 13) / 10 );
    else return 0;
}

short call_lightning( short L )
{
    if ( L >= 12 && L <= MAXLEVEL ) return ( L * 2 );
    else return 0;
}

short dispel_evil( short L )
{
    if ( L >= 10 && L <= MAXLEVEL ) return ( L * 5 / 2 );
    else return 0;
}

short cause_critical( short L )
{
    if ( L >= 9 && L <= MAXLEVEL ) return ( L + 8 );
    else return 0;
}

short earthquake( short L )
{
    if ( L >= 7 && L <= MAXLEVEL ) return ( L + 9 );
    else return 0;
}

short cause_serious( short L )
{
    if ( L >= 5 && L <= MAXLEVEL ) return ( L / 2 + 9 );
    else return 0;
}

short cause_light( short L )
{
    if ( L >= 1 && L <= MAXLEVEL ) return ( L / 3 + 5 );
    else return 0;
}

/* УМЕРТВИЕ */

short grasp( short L )
{
    if ( L >= 46 && L <= MAXLEVEL ) return ( X * 16 );
    else return 0;
}

short shriek( short L )
{
    if ( L >= 45 && L <= MAXLEVEL ) return ( L );
    else return 0;
}

/* ДИКАРЬ */

short blizzard( short L )
{
    if ( L >= 27 && L <= MAXLEVEL ) return ( L * 2 + 15 );
    else return 0;
}

short glacial_pike( short L ) /* L*3+65-300/(L}15-9) */
{
    if ( L >= 36 && L <= MAXLEVEL )
    {
        if ( L > 15 ) return ( L * 3 + 65 - 300 / ( L - 9 ) );
        else return ( L * 3 + 65 - 300 / ( 15 - 9 ) );
    }
    else return 0;
}
