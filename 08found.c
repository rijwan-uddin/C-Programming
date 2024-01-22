 #include <stdio.h>
 main()
{
    int a[100],i,n,key;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the number you want to searched : ");
    scanf("%d", &key);

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
			printf("found ");

        }
    }

	printf("Not  found");
}
