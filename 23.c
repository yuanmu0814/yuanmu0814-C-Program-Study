void main()
{
    int a;
    scanf("%d",&a);
    if(++a<10)
        printf("%d\n",a++);
    else
        printf("%d\n",++a);
}
