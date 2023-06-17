void main()
{
    int x=0,a=1,b=1;
    switch(x)
    {
    case 0:
        a++;
    case 1:
        b++;
        break;
    case 2:
        a++;
        b++;
    }
    printf("a=%d,b=%d\n",a,b);
}
