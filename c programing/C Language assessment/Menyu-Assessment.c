#include<stdio.h>
int main()
{
    int choise,quan,am=0,amount=0,pizza=180,Burger=100,Dosa=120,Idli=50,total=0;
    char ans = 'y';
    while (ans='y')
    {
     
    printf("\n1.pizza  \t price = %drs/pcs",pizza);
    printf("\n2.Burger \t price = %drs/pcs",Burger);
    printf("\n3.Dosa   \t price = %drs/pcs",Dosa);
    printf("\n4.Idli   \t price = %drs/pcs",Idli);
    printf("\nPlease Enter your choise : ");
    scanf("%d",&choise);

    switch(choise)
    {
        case 1 :
                printf("\nYou have Selected pizza.");
                printf("\nEnter the quantity : ");
                scanf("%d",&quan);
                am = pizza*quan;
                total = total + am; 
                printf("\namount = %d",am);
                printf("\nTotal amount = %d",total);
        break;

        case 2 :
                printf("\nYou have Selected Burger.");
                printf("\nEnter the quantity : ");
                scanf("%d",&quan);
                am = Burger*quan;
                total = total + am;
                printf("\namount = %d",am);
                printf("\nTotal amount = %d",total);
        break;

        case 3 :
                printf("\nYou have Selected Dosa.");
                printf("\nEnter the quantity : ");
                scanf("%d",&quan);
                am = Dosa*quan;
                total = total + am;
                printf("\namount = %d",am);
                printf("\nTotal amount = %d",total);
        break;

        case 4 :
                printf("\nYou have Selected Idli.");
                printf("\nEnter the quantity : ");
                scanf("%d",&quan);
                am = Idli*quan;
                total = total + am;
                printf("\namount = %d",am);
                printf("\nTotal amount = %d",total);
        break;

        default : 
                printf("\nInvaild choise.");
             
    }

   
		printf("\n\n Do You Want to Continue y/n ? : ");
		scanf(" %c",&ans);
		if(ans != 'y')
		{
			goto end;
		}
		else{
			printf("\n--------------Menu-----------");
		}
	}
	end:
		printf("\nYour Total bill = %d",amount);
		printf("\n\tThank You For Visiting");
		return 0;
}	
