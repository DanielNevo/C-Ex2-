#define i  901 
 double account [50][2] = {0};



 void OpenAccount()
{
 int j;
 int flag=0;
 for ( j =0; j <50; j++) //we check if we have open account 
 {
     if(account[j][0]==0)//if we have open account 
     {
         flag=1;
         account[j][0]=(double)i+j;
          double w=0;//despoit
          printf("Please enter amount for deposit : \n");
         while(scanf("%lf",&w)!=1)//for buffer
         {
             printf("Failed to read the amount");
             while(getchar()!='\n');
         }
         while(getchar()!='\n');
         account[j][1] =w;
         
         int temp=j+i;
         printf("New account number is: %d \n",(int)account[j][0]);
         break;
     }
 }
         if(flag==0)
         {
             printf("Invalid Amount \n");
         }
}

 
 void Balance_Inquiry()
{
    int flag=0;
    int j;//FOR 
    int b;//INPUT
     printf("please enter your account:");
    while(scanf("%d",&b)!=1)//check if input is correct
         {
             printf("valid input,try again:");
             while(getchar()!='\n');
         }
         while(getchar()!='\n');
    
    for ( j = 0; j <50;j++)
    {
         if(account[j][0]==b)
         {
             flag=1;
             double temp=account[j][1];
             printf("your balance is:%2.2f \n",temp);
             break;
         }
    }
    if(flag==0)
    {
        printf("This account is closed\n ");
    }
}
void Deposit(){
    int f;//FOR THE INPUT ACCOUNT 
    int j;//FOR
    double k;//DEPOSIT
    int flag=0;
    
    printf("please enter your account:\n");
     while(scanf("%d",&f)!=1)//check if input is correct
         {
             printf("valid input,try again:");
             while(getchar()!='\n');
         }
       while(getchar()!='\n');
         
    for(j=0;j<50;j++){
        if((int)account[j][0]==f){
             printf("how much you want to put in your account:\n");
             flag=1;
             while((scanf("%lf",&k)!=1)) //check if input is correct
         {
             printf("valid input,try again:");
             while(getchar()!='\n');//clean the buffer
         }
         while(getchar()!='\n');
         
            flag=1;
            account[j][1]+=k;
            break;     
    }
    }
    if(flag==0){
        printf("your account is cloesd\n");
    }  
  }
  
  void Withdrawal()
{
  int flag=0;
  int x;//FOR ACCOUNT INPUT
  int j;//FOR
  double z;//FOR THE DESPOIT
  printf("Please enter account number:");
     while(scanf("%d",&x)!=1)//check if input is correct
         {
             printf("valid input,try again:");
             while(getchar()!='\n');
         }
         while(getchar()!='\n');
       
    for(j=0;j<50;j++)
    {
      if((int)account[j][0]==x)
      {
       printf("Please enter the amount to withdraw:");
        while(scanf("%lf",&z)!=1)//check if input is correct
         {
             printf("valid input,try again:");
             while(getchar()!='\n');
         }
         while(getchar()!='\n');
        if((account[j][1]-z)>=0)//IF IN POSITIVE NUMBER
        {
         account[j][1]=account[j][1]-z;
         printf("the balnce is : ",account[j][1]);
         break;
        }
        else
        {
          printf("Cannot withdraw more than the balance");
          break;
        }
       }
     }
  }
  
  void CloseAccount()
  {
  int x;//INPUT FOR ACCOUNT 
  int flag=0;
  printf("  Enter your account number:\n");
  while(scanf("%d",&x)!=1)//check if input is correct
         {
             printf("valid input,try again:\n");
             while(getchar()!='\n');
         }
         while(getchar()!='\n');
  for(int j=0 ; j<50 ; j++)
  {
     if(account[j][0]==x)
     {
         flag=1;
         account[j][0]=0;
          account[j][1]=0;
          printf(" the account close\n ");
     }   
  }
  if(flag==0){
  printf(" the account Does not exist\n ");
  }
  }
  //THIS FUNCTION DOING PRESENT 
 double Percent(double account , double percent)
  {
     double n=100;
     double temp1=0;
     double temp2=0;
      temp1=account*percent;
     temp1/=n;
     temp2+=temp1;
     return temp2;
  }
  
  void Interest()
  {
    double z;//for inrerst 
         printf("Enter the interest:");
         while(scanf("%lf",&z)!=1)//THE INPUT IS CURRECT
         {
           printf("valid input,try again:");
             while(getchar()!='\n');
         }
         while(getchar()!='\n');
    for(int j=0 ; j<50 ; j++)
    {
        if(((int)account[j][0]>900)&&((int)account[j][0]<=950))
        {
            account[j][1]+=Percent(account[j][1],z);
        }
    }
  }
 void Print()
  {
      int flag=0;
      for(int j=0 ; j<50 ; j++)
      {
           if(((int)account[j][0]>900)&&((int)account[j][0]<=950))
           {
               printf("Your account number is :%d \n" ,(int)account[j][0]);
               printf("Your balance is :%2.2f \n" , account[j][1]);
               flag=1;
           }
      }
      if(flag==0){
      printf("No accounts open");
      }
  }
  
  void Exit()
  {
      int flag=0;
      for(int j=0 ; j<50 ; j++)
      {
           if((account[j][0]>900)&&(account[j][0]<=950))
           {
               account[j][0]=0;
               account[j][1]=0;
               flag=1;
           }
      }
      if(flag==0){
      printf("No accounts open");
      }
  }
