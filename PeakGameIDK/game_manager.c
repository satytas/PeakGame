#define _CRT_SECURE_NO_WARNINGS
#include "game_manager.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char pInput[2] = "";
int tolerance = 3;

void intro() {
    Sleep(2000);
    printd(1, "Welcome to my Game, Player!\n", NULL);
    Sleep(500);
    printd(3, "Now\n", NULL);
    printd(3, "tell me Player", NULL);
    printd(10, " ...", NULL);
    printd(0.5, "\nWhat is your name? ;)\n\n", NULL);
    Sleep(1000);
    printd(5, ".. ", NULL);
    printf("My name is \x1b[36m %s", F[cyan]);
    scanf("%s", &user.name);
    Sleep(1000);
    printd(1, "Ah! I see... what an interesting name... ", NULL);
    Sleep(1000);
    printd(1, "Anyway!\n\n", NULL);
    Sleep(500);
    printd(1, "Are you ready to play ", NULL);
    Sleep(250);
    printd(2, user.name, F[cyan], "?\n", NULL);
    Sleep(500);
    printd(0, "1.", F[res], "yes", F[red], "\n2. no\n\n", NULL);

   
    while (strcmp(pInput, "yes") != 0 && strcmp(pInput, "no") != 0) {
        scanf("%s", &pInput);
        if (strcmp(pInput, "yes") != 0 && strcmp(pInput, "no") != 0){
            tolerance--;
            switch (tolerance) {
            case 2:
                Sleep(250);
                printd(1, "\nOops! ", NULL);
                Sleep(250);
                printd(3, "Haha ", NULL);
                Sleep(500);
                printd(1.5, "looks like you made a little mistake there!\n", NULL);
                Sleep(1000);
                printd(1, "No worries, ",NULL);
                Sleep(250);
                printd(2, "let me just.." ,NULL);
                for (int i = 0; i < 3; i++){Sleep(500); printf("%s", moveUp);}
                Sleep(1000);
                printf("%s", deleteL);
                Sleep(500);
                for (int i = 0; i < 3; i++) {Sleep(250); printf("%s", moveDown);}
                Sleep(750);
                printd(1, "\nHere you go!\n", NULL);
                Sleep(1000);
                printd(1, "Now try not to mess it up this time ok? ;)", NULL);
                Sleep(1500);
                printf("%s", deleteL);
                for (int i = 0; i < 5; i++) {Sleep(250); printf("%s%s", moveUp, deleteL);}
                printf("%s", moveToTheRight);
                break;
            case 1:
                Sleep(500);
                printd(1, "\nAgain?", NULL);
                Sleep(750);
                printd(1, " Really?\n", NULL);
                Sleep(1000);
                printd(1.5, "Ahhh you know what? ", NULL);
                Sleep(500);
                printd(1.5, "its fine.. ", NULL);
                Sleep(750);
                printd(1.5, "it's not your fault..\n", NULL);
                Sleep(1000);
                printd(1.5, "I just didnt know you are such a stupid little bitch\n", NULL);
                Sleep(1500);
                printd(1, "Here lets try again OK?", NULL);
                Sleep(750);
                printd(4, " Just type \"yes\" or \"no\"", NULL);
                Sleep(2000);
                printf("%s", deleteL);
                for (int i = 0; i < 5; i++) printf("%s%s", moveUp, deleteL);
                printf("%s", moveToTheRight);
                break;
            case 0:
                printd(1, "\nOK\n", NULL);
                Sleep(750);
                printd(1, " haha", NULL);
                Sleep(1000);
                printf("%s%s", F[res], B[res]);
                printd(2, "\n\nHAHAHA", NULL);
                Sleep(1500);
                for (int i = 0; i < 4; i++) {
                    printf("%s", deleteL);
                    printf("%s%sHAHAHA", B[red], F[black], NULL);
                    Sleep(1);
                    printf("%s", deleteL);
                    printf("%s%sHAHAHA", F[red], B[black], NULL);
                    Sleep(1);
                }
                Sleep(2000);
                printf("%s%s", F[res], B[res]);
                printd(5, "\nLAST CHANSE",F[bold], NULL);
                for (int i = 0; i < 6; i++) printf("%s%s", moveUp, deleteL);
                printf("%s%s", moveToTheRight, F[red]);
                break;
            default:
                system("cls");
                system("COLOR 40");
                printf("%s%s", F[white], B[red]);
                for (int i = 0; i < 25000; i++) printf(" FUNNY GUY ;) ");
                system("cls");
                DEATH();
                Sleep(1000);
                printd(1, "\n ", F[res], user.name, F[res], ":)", NULL);
                exit(0);
                break;
            }
        }

    }
    if (strcmp(pInput, "yes") == 0) {
        system("cls");

        switch (tolerance) {
        case 2:
            printd(0.5, "I knew you can do this! :)", NULL);
            Sleep(750);
            printd(0.5, "\nAnyways!\n", NULL);
            Sleep(1500);
        default :
            printd(5, "Good luck...\n", NULL);
            Sleep(250);
            printd(2, user.name, F[cyan], NULL);

            break;
        case 1:
            printd(1, "finally!\n", NULL);
            Sleep(750);
            printd(1, "I thought it will never end", NULL);
            break;
        case 0:
            printd(5, "I LIED", F[red], NULL);
            Sleep(500);
            DEATH();
            exit(0);
            break;
        }

        Sleep(750);
        system("cls");
        Sleep(1000);
        chapter1();
    }
    else {
        system("cls");

        switch (tolerance) {
        default:
            printd(0.5, "ok, bye bye :)", NULL);
            break;
        case 2:
            printd(1, "why wasting my time then??", NULL);
            
            printd(0.5, "", NULL);
            printd(0.5, "", NULL);
            printd(0.5, "", NULL);
            break;
        case 1:
            printd(1, "yeah...", NULL);
            Sleep(750);
            printd(1, "\nthat what a little bitch will do..", NULL);
            break;
        case 0:
            printd(3, "Good Choice...", NULL);
            break;
        }

        exit(0);
    }
}

void chapter1() {
    system("cls");
    printd(15, user.name, F[cyan], NULL);
    Sleep(250);
    printd(3, ", ", F[res], "Level ", F[yellow], toString(user.level), F[yellow], " - ", F[res], "XP ", F[yellow], toString(user.xp), F[yellow], NULL);
    Sleep(250);
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 2; i++) {
            printf("%s%s", deleteL, moveToTheRight);
            Sleep(25);
            printd(0, user.name, F[cyan], ", ", F[res], "Level ", F[yellow], toString(user.level), F[yellow], " - ", F[res], "XP ", F[yellow], toString(user.xp), F[yellow], NULL);
        }
        if (j != 0)
            printf("\n");
        Sleep(809);
    }
    Sleep(1000);
    printd(50, "\n\n", NULL);
    printd(5,"You find yourself in a dark corridor...\n", NULL);
    printd(7.5, "What do you do? ", NULL);
    printf("\n\n1. Explore");
    printf("%s%s%s%sWhat do you do? ", moveUp, moveUp, deleteL, moveToTheRight);
    scanf("%s", pInput);

    while (strcmp(pInput, "1") != 0) {
        printf("%s%s", moveUp, deleteL);
        printf("What do you do? ");
        scanf("%s", pInput);
    }

    Sleep(1000);
    system("cls");
    Sleep(1000);

    pEncounter();
}

void pEncounter() {
    srand(time(NULL));

        int timesRun = -1;
        Monster m;
        while (1){
            do{
                timesRun++;
                m = monsters[rand() % 6];

                system("cls");
                pStats();
                printf("\n\n");
                if (rand() % 5 == 1)
                    printd(2,"You smell smth wierd ", NULL);
                else if (m.level > user.level + 3)
                    printd(2, "You sense danger ", NULL);
                else
                    printd(2, "You sence W", NULL);
                Sleep(500);
                printf("\n\nRUN??? ");

                while(1){
                    scanf("%s", pInput);
                    if ((strcmp(pInput, "no") != 0 && strcmp(pInput, "yes") != 0))
                        printf("%s%s%sRUN??? ", moveUp, deleteL, moveToTheRight);
                    else
                        break;
                }

                if (strcmp(pInput, "no") == 0) 
                    break;
            } while (1);

            printf("\n\n\n\n\n");
            mStats(m); 
            for (int i = 0; i < 9; i++)printf("%s%s%s", moveUp, deleteL, moveToTheRight);
            printf("%s", moveDown);

            int battle = 1;
            while (battle){
                printd(1, "Its ", F[res], user.name, F[cyan], " turn!", NULL); Sleep(500); printd(0.5, " What do you do? (1/2/3/4) ", NULL); 
                for (int i = 0; i < 3; i++) printf("%s%s", moveDown, moveToTheRight); printf("(1) try to run | (2) attack! | (3) use item | (4) communicate?");



                for (int i = 0; i < 3; i++)printf("%s", moveUp);
                printf("%s%s", deleteL, moveToTheRight);
                printd(0, "Its ", F[res], user.name, F[cyan], " turn!", NULL); printf(" What do you do? (1/2/3/4) ");
                scanf("%s", pInput);

                while (strcmp(pInput, "1") != 0 && strcmp(pInput, "2") != 0 && strcmp(pInput, "3") != 0 && strcmp(pInput, "4") != 0) {
                    printf("%s%s%s", moveUp, deleteL, moveToTheRight);
                    printd(0, "Its ", F[res], user.name, F[cyan], " turn!", NULL); printf(" What do you do? (1/2/3/4) ");
                    scanf("%s", pInput);
                }
                if(strcmp(pInput, "1") == 0){}


            }





            /*
                X
                XX
                X
                XX
                XX
                XX
                X
                XX
                X
            */

            /*
                                Sleep(1000);
                    for (int i = 0; i < 2; i++) {
                        printf("%s%s", deleteL, moveToTheRight);
                        Sleep(25);
                        printf("(1) try to run | (2) attack! | (3) use item | (4) communicate?");
                    }
            */
            }
        }



    /*int monsterType = rand() % 100;

    // 60% - "Little Goblin"
    if (monsterType < 60) {
        printd(1, "Oh no!\nYou encountered a ", NULL);
        Sleep(250);
        mStats(1,0);
    }
    // 25% - "Huge Spider"
    else if (monsterType < 85) {
        printd(1, "Oh no!\nYou encountered a ", NULL);
        Sleep(250);
        mStats(1,1);
    }
    // 15% - "Fearsome Dragon"
    else {
        printd(1, "Oh no!\nYou encountered a ", NULL);
        Sleep(250);
        mStats(1,2);
    }

    //battle starts!
    while(pHlth > 0 && mHlth){



    }*/


void pStats() {
#define line1 ((20 - strlen(user.name)) + (2 - cntD(user.level)) + (3 - cntD(user.xp)) + 2)
#define line2 ((3 - cntD(user.hp)) + (3 - cntD(user.strength)) + (2 - cntD(user.speed)) + 9)

    printf("| ");   for (int i = 0; i < line1 / 2; i++)   printf(" ");
    printd(0, user.name, F[cyan], NULL);
    printd(0, ", ", F[res], "Level ", F[yellow], toString(user.level), F[yellow], " - ", F[res], "XP ", F[yellow], toString(user.xp), F[yellow], NULL);
    for (int i = 0; i < (line1 / 2 + (line1 % 2 != 0)); i++)   printf(" ");
    printf(" |");

    printf("\n");

    printf("|");
    for (int i = 0; i < line2 / 2; i++) printf(" ");
    printd(0, " HP ", F[red], toString(user.hp), F[red], " | ", F[res], "Strength ", F[orange], toString(user.strength), F[orange], " | ", F[res], "Speed ", F[limeGreen], toString(user.speed), F[limeGreen], NULL);
    for (int i = 0; i < (line2 / 2 + (line2 % 2 != 0)); i++)  printf(" ");
    printf(" |");
}

void mStats(Monster m) {
    #define line (15-strlen(m.species) + 15-strlen(m.name) + 3 - cntD(m.hp))

    printf("| ");
    for (int i = 0; i < line/2; i++) printf(" ");
    printd(3, m.species, F[purple], " - ", F[res], m.name, F[red], ", ", F[res], "HP ", F[red], toString(m.hp), F[red], NULL);
    for (int i = 0; i < line/2  + line%2; i++) printf(" ");
    printf(" |");

}

void DEATH() {
    for(int i = 0; i < 2; i++){
        system("COLOR 40");
        Sleep(1);
        system("COLOR 74");
        Sleep(1);
        system("COLOR 04");
        Sleep(1);
        system("COLOR 40");
        Sleep(1);
        system("COLOR 04");
        Sleep(1);
    }
    system("cls");
    system("COLOR 04");
    Sleep(500);
    printd(8, "YOU DIED...", NULL);
    system("cls");
    printf("YOU DIED...");
}