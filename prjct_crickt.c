/*
 * C PROJECT LINUX 2021
 * UCA BATCH 2021
 * GROUP 11-B
 *
 * @Raghav Sharma
 * 3/09/2021
 *
 * 
 * C CRICKET CUP
 */

#include <stdio.h>

#include <math.h>
#include <stdlib.h>

//main variables with global scope 

int runs2=0;
int runs1=0;

int wickets1=0;
int wickets2=0;

int k1=0;
int k2=0;

//Toss function

int toss_time(int n)
{
  
	if(n==0)
		return 1;
	else
	    return 0;
}

//Batting function

int batting()
{
	k1++;
        char ch;
        int b;
        int r,run;
        printf("LETS PLAY!\n");
        while(1)
        {       //exit conditions to come out of loop
		if(wickets1==10)
			return runs1;
		if(runs1>runs2 && (runs2!=0 || k2>0))
			return runs1;
		scanf("%c",&ch);
		//special case for enter
                if(ch==10)
			printf("Enter runs you want to score 1,2,3,4,5,6\n");
		else
		{       
			r=rand();
			//generating random numbers in range 1-6
                        run=r%6 + 1;

			//using ascii code to compute runs 

                        b=ch-48;
                        //printf("%d %d %c",b,ch,ch);
			if(b>=1 && b<=6)
			{
				if(run==b)
				{
					printf("OOPS YOU ARE OUT ! :( ");
                                        wickets1++;
                                        printf("SCORECARD : %d runs - %d wickets \n",runs1,wickets1);
                                        //printf("TOTAL : %d\n",runs2);
                                        
                                        //batting();
				}
				else
				{
					printf("GREAT SHOT ! %d runs\n",b);
                                        runs1=runs1+b;
                                        printf("SCORECARD : %d runs - %d wickets \n",runs1,wickets1);
					// printf("%d %d\n",b,run);
			        }
			}
			else
			{
				printf("OOPS ! Enter valid input\n");
			}
		}
	}
}

//Bowling function 

int bowling()
{
        k2++;
        char ch;
        int b;
        int r,run;
        printf("LETS PLAY!\n");
        while(1)
	{       //exit conditions
		if(wickets2==10)
			return runs2;
		if(runs2>runs1 && (runs1!=0 || k1>0))
			return runs2;
		scanf("%c",&ch);
		//special case for enter
		if(ch==10)
			printf("Enter your delivery 1,2,3,4,5,6\n");
		else
		{
			r=rand();
			//generating random numbers in range 1-6
                        run=r%6 + 1;

 
                        b=ch-48;
                       
			if(b>=1 && b<=6)
			{
				if(run==b)
				{
					printf("WHAT A BALL ! YOU HAVE BOWLED THE BATSMAN!! ");
                                        wickets2++;
                                        printf("SCORECARD : %d runs - %d wickets \n",runs2,wickets2);
                                        //printf("TOTAL : %d\n",runs2);
                                        //wickets2++;
                                        //bowling();
				}
				else
				{
					printf("You conceded %d runs\n",run);
                                        runs2=runs2+run;
                                        printf("SCORECARD : %d runs - %d wickets \n",runs2,wickets2);

                                        // printf("%d %d\n",b,run); 
				}
			}
			else
			{
				printf("OOPS ! Enter valid input\n");
			}
	       	}
        }
}

int main()
{

        int toss,r1,r2,choice;
        printf("\t\t***  WELCOME TO ONLINE CRICKET LEAGUE FINALE !!! ***\n\n");
	printf("\tQUICK RULES : ITS YOU VS THE COMPUTER. USE THE KEYS 1,2,3,4,5,6 WHILE BATTING (TO SCORE RUNS) AND BOWLING (TO TAKE WICKETS)\n\n");

        printf("\t\tLETS START THE MATCH !  TOSS TIME \n\n");
        printf("Enter 0 for heads and 1 for tails \n");
        scanf("%d",&toss);

        if(toss_time(toss))
	{
		printf("YOU WON THE TOSS !\n\n");
                printf("PRESS 1 to BAT FIRST OR 2 To BOWL FIRST\n");
                scanf("%d",&choice);
        
	if(choice==1)
	{
		r1=batting();
                printf("YOU HAVE SCORED %d RUNS , BOWL WELL TO DEFEND THE TARGET \n",r1);
                printf("\n\t\t***INNINGS BREAK***\n\n");
                printf("\tBOWLING TIME :\n");
                r2=bowling();
		
		if(r2<r1)
		{
			printf("WOOHOO!! YOU HAVE BOWLED OUT YOUR OPPONENT AT %d runs\n",r2);
                        printf("YOU WON THE MATCH BY %d runs\n",r1-r2);
                        printf("\t\tYOU ARE THE CHAMPION NOW!!!!\n");
                        printf("\t\t***GAME OVER***\n");
		}
                if(r2==r1)
		{
                        printf("\t\tWOW!! WHAT A MATCH! ITS A TIE!\n");
                        printf("Both of the teams will share the honours\n");
                        printf("WELL PLAYED!\n");
                        printf("\t\t***GAME OVER***\n");
		}
		if(r2>r1)
		{
                        printf("\t\tOOPS!! YOU LOST THE MATCH BY %d WICKETS!\n",(10-wickets2));
                        printf("BETTER LUCK NEXT TIME\n");
                        printf("WELL PLAYED!\n");
                        printf("\t\t***GAME OVER***\n");
		}
            
         }
	//if bowling chosen

	else
	{
		r1=bowling();
                printf("YOU NEED %d RUNS TO WIN!!  \n",r1+1);
                printf("\n\t\t***INNINGS BREAK***\n\n");
                printf("BATTING TIME\n");
                r2=batting(); 

		if(r2>r1)
		{
			//printf("WOOHOO!! YOU HAVE BOWLED OUT YOUR OPPONENT AT %d runs",r2);
                        printf("\t\tYOU WON THE MATCH BY %d WICKETS\n",(10-wickets1));
                        printf("\t\tYOU ARE THE CHAMPION NOW!!!!\n");
                        printf("\t\t***GAME OVER***\n");
		}
		if(r2==r1)
		{
			printf("WOW!! WHAT A MATCH! ITS A TIE!\n");
                        printf("Both of the teams will share the honours\n");
                        printf("WELL PLAYED!\n");
                        printf("***GAME OVER***\n");
                }
		if(r2<r1)
		{
                       printf("\t\tOOPS!! YOU ARE OUT ! YOU LOST THE MATCH BY %d runs!\n\n", r1-r2);
                       printf("\t\tBETTER LUCK NEXT TIME\n");
                       printf("\t\tWELL PLAYED!\n");
                       printf("\t\t***GAME OVER***\n");
               }
            
        
          } 
    }
	//if toss lost
    else
    {
	    printf("YOU LOST THE TOSS\n");
            printf("YOUR OPPONENT ELECTED TO BAT FIRST\n");
            r1=bowling();

            printf("YOU NEED %d RUNS TO WIN!!  \n",r1+1);
            printf("\n\t\t***INNINGS BREAK***\n\n");
            printf("BATTING TIME\n");
            r2=batting();
            if(r2>r1)
	    {
		    printf("YOU WON THE MATCH BY %d WICKETS \n\n",10-wickets1);
                    printf("\t\tYOU ARE THE CHAMPION NOW!!!!\t\t\n\n");
                    printf("\t\t***GAME OVER***\n");
            }
            if(r2==r1)
	    {
                    printf("WOW!! WHAT A MATCH! ITS A TIE!\n");
                    printf("\nBoth of the teams will share the honours\n\n");
                    printf("WELL PLAYED!\n\n");
                    printf("\n\t\t***GAME OVER***\n");
            }
            if(r2<r1)
	    {
                    printf("OOPS!! YOU LOST THE MATCH BY %d runs!\n", r1-r2);
                    printf("\nBETTER LUCK NEXT TIME\n");
                    printf("\nWELL PLAYED!\n");
                    printf("\n\t\t***GAME OVER***\n");
            }
     }
    
    
           //printf("%d ",a);

          return 0;
}

