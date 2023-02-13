#include <stdio.h>
typedef struct
{
    char name[20];
    int score, balls, fours, sixes;
} player;
int main()
{
    player s;
    printf("Enter the name:\n");
    scanf("%s", s.name);
    printf("%s", s.name);
    printf("\nEnter the score:");
    scanf("%i", &s.score);
    printf("\nEnter the no. of balls:");
    scanf("%i", &s.balls);
    printf("\nEnter the no. of fours:");
    scanf("%i", &s.fours);
    printf("\nEnter the no. of sixes:");
    scanf("%i", &s.sixes);
    float strike_rate = (s.score / s.balls) * 100;
    printf("strike rate is:%f\n", strike_rate);
    printf("player name: %s\nscore: %i\nballs: %i\nfours: %i\nsixes: %i\nstrike_rate: %f", s.name, s.score, s.balls, s.fours, s.sixes,strike_rate);
    // printf("\t%s",s.name;"\t%i",s.score;"\t%i",s.balls;"\t%i",s.fours;"\t%i",s.sixes);
    return 0;
}
