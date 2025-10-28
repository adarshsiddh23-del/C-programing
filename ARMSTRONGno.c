 #include<stdio.h>
 #include<math.h>
 int main()
 {
    int N,C,d,sum,t;
    printf("enter n values");
    scanf("%d",&N);
    t=N;
    while(N>0){
        d=N%10;
        C=d*d*d;
        sum=sum+C;
        N=N/10;
    }
    if(sum==N)
      printf("it is a ARMSTRONG");
    else 
      printf("NOT a ARMSTRONG");

    return 0;

    
 }