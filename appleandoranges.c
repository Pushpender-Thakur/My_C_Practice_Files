#include <stdio.h>
int main (void)
{

    /* ------------------------- */

    // Declearations
    int StartofHouse;
    int EndofHouse;
    int AppleFalls;
    int OrangesFalls;
    int AppleTree;
    int OrangeTree;
    int AppleofSam = 0;
    int OrangeofSam = 0;
    int AppleDistance;
    int OrangeDistance;

    /* ---------------------- */
    scanf("%d%d",&StartofHouse,&EndofHouse);
    scanf("%d%d",&AppleTree,&OrangeTree);
    scanf("%d%d",&AppleFalls,&OrangesFalls);
    int i;

    // AppleTree --------------- Sam's House --------------- OrangeTree
    
    // Hint: AppleTree is on Left of Sam's House
    // and OrangeTree is on Right of Sam's House



    // For FindingOut How many Apples Fall Under Sam's House Area
    for (i = 0; i < AppleFalls; i++)
    {
        scanf("%d",&AppleDistance);
        if (AppleDistance < 0)
        {
            // I put this Condition cuz we know AppleDistance
            // that is negative means left from tree
        }
        else
        {
            if (AppleDistance + AppleTree >= StartofHouse && AppleDistance + AppleTree <= EndofHouse)
            {
                AppleofSam++;
            }
        }
        
    }


    // For FindingOut How Many Oranges Fall Under Sam's House Area
    for (i = 0; i < OrangesFalls; i++)
    {
        scanf("%d",&OrangeDistance);
        if (OrangeDistance > 0)
        {
            // I put this Condition cuz we know OrangeDistance
            // that is Positive means right from tree
        }
        else
        {
            if (OrangeDistance + OrangeTree <= EndofHouse && OrangeDistance + OrangeTree >= StartofHouse)
            {
                OrangeofSam++;
            }
        }
        
    }

    printf("%d\n%d",AppleofSam,OrangeofSam);
    return 0;

}