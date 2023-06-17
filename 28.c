int main()
{
    int a=3,b=1,c=0;
    if(a>b?a:b)
    {
        switch(b%10)
        {
        case 1:
            c=a;
        case 0:
            c=b;
            break;
        default:
            c=0;
        }
    }
    printf("%d",c);
    return 0;
}
