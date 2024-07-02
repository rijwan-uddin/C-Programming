
#include<stdio.h>
 int main()
{
    float Mat,Phy,Eng,Prog,waiver=0;
    int count=0;
    //Input each subject's mark.
    printf("Enter the Physics mark\n");
    scanf("%f",&Phy);
    printf("Enter the Math mark\n");
    scanf("%f",&Mat);
    printf("Enter the English mark\n");
    scanf("%f",&Eng);
    printf("Enter the Programming mark\n");
    scanf("%f",&Prog);
    if(Prog>90)
{
    waiver=waiver+9000;
    count=count+1;
    if(count>=2)
    {
        goto wv;
    }

if(Mat>85)
{
    waiver=waiver+7000;
    count=count+1;
    if(count>=2)
    {
        goto wv;
    }

}
    if(Phy>80)
    {
        waiver=waiver+5000;
        count=count+1;
        if(count>=2)
        {
            goto wv;
        }

    }
    if(Eng>80)
    {
        waiver=waiver+4000;
        count=count+1;
        if(count>=2)
        {
            goto wv;
        }

    }
    wv:
    printf("Total waiver you get %.2f\n",waiver);
}

    return 0;
}
