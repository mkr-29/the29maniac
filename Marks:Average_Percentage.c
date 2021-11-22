#include<stdio.h>
float avg(float s, float n){
    float av=s/n;
    return av;
}
float per(float s, float n, float m){
    float pe=((s/n)*m)*100;
}
int main()
{
    int n,x=1,m;
    float a,s=0;

    printf("Enter the no. of subjects: ");
    scanf("%d", &n);
    printf("Enter max marks: ");
    scanf("%d",&m);
    do{
        printf("Enter the marks of subject %d: ",x);
        scanf("%f", &a);
        ++x;
        s=s+a;
    }while(x<=n);
    printf("Average %.2f", avg(s,n));
    printf("\nPercentage: %.2f%%",per(s,n,m));
}
