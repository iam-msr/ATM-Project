#include<stdio.h>                                                           //code by Team 37
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
struct REG{
    char AC_NAME[50],TRANS[20];
    char AC_NO[12],PATH[15];
    int PIN;
    int BAL;
};
struct person{
    int ac_no;
     int pin;
    char name[50],path[15],trans[20];
    int balance;
};
  void options()
{   system("color 02");
    printf("\n\t\t\t********************************************");
    printf("\n\t\t\t*            Welcome To C-Bank ATM         *");
    printf("\n\t\t\t*                                          *");
    printf("\n\t\t\t*  1. New Customer(for opening an account) *");
    printf("\n\t\t\t*                                          *");
    printf("\n\t\t\t*  2. Existing Customer(to use ATM service)*");
    printf("\n\t\t\t*                                          *");
    printf("\n\t\t\t********************************************");
    printf("\n\n");
	return;
}
   void menu()
{   system("color 09");
    printf("\n\t***********************************");
    printf("\n\t*           MENU                  *");
    printf("\n\t*                                 *");
    printf("\n\t*     1. Check Balance            *");
    printf("\n\t*                                 *");
    printf("\n\t*     2. Withdraw Money           *");
    printf("\n\t*                                 *");
    printf("\n\t*     3. Deposit  Money           *");
    printf("\n\t*                                 *");
    printf("\n\t*     4. Change PIN               *");
    printf("\n\t*                                 *");
    printf("\n\t*     5. Transfer Money           *");
    printf("\n\t*                                 *");
    printf("\n\t*     6. Update Details           *");
    printf("\n\t*                                 *");
    printf("\n\t*     7. PM CARES FUND Donation   *");
    printf("\n\t*                                 *");
    printf("\n\t*     8. Transactions History     *");
    printf("\n\t*                                 *");
    printf("\n\t*     9. Interest Calculator      *");
    printf("\n\t*                                 *");
    printf("\n\t*     10. Close My Account        *");
    printf("\n\t*                                 *");
    printf("\n\t*                                 *");
    printf("\n\t***********************************");
    printf("\n\n");
    return;
}
    void reg(char ac_name[50],int ac_no)
{   system("color 0F");
    printf("\n\t***********************************************\n\n");
    printf("\tDear customer %s\n\n\tAccount number : %d\n\n\tYour Details Are Registered Succesfully\n\n",ac_name,ac_no);
    printf("\n\t***********************************************\n\n");
	return;
}
 void user_new(char details_name[50],int details_acnum,int details_bal,int details_pin,char reg_time[30])
{   system("cls");
    system("color 06");
    printf("\n\t***********************************************\n\n");
    printf("\n\t\t\t *-ACCOUNT DETAILS-*\n\n");
    printf("\n\t\t-->Account Owner :%s\n\n",details_name);
    printf("\t\t-->Account Number :%d\n\n",details_acnum);
    printf("\t\t-->Account Balance :%d\n\n",details_bal);
    printf("\t\t-->ATM PIN (kept confidential):%d\n\n",details_pin);
    printf("\n\n\t# Date & Time = %s",reg_time);
    printf("\n\n\t ==> NOTE: Please Remember ATM Credentials For Using ATM Services.\n\n");
    printf("\n\t***********************************************\n\n");
	return;
}
 void enquiry(char ac_name[50],int ac_num,int ac_balance,char enquiry_time[30])
{   system("cls");
    system("color 06");
    printf("\n\t********************************************");
    printf("\n\n\t\t\t *-Balance Enquiry-* \n");
    printf("\n\n\t--->> Account Holder : %s\n",ac_name);
    printf("\n\n\t--->> Account Number %d\n",ac_num);
    printf("\n\n\t--->> Balance Amount %d\n",ac_balance);
    printf("\n\n\t# Date & Time = %s",enquiry_time);
    printf("\n\t********************************************");
   return;
}
void ac_withdraw(char draw_name[50],int draw_acno,int draw_money,int draw_balance,char draw_time[30])
{   system("cls");
    system("color 06");
    printf("\n\t***********************************\n\n");
    printf("\t\t *-RECEIPT-*\n");
    printf("\n\n\t--->> Account Holder Name: %s\n",draw_name);
    printf("\n\n\t--->> Account number %d\n",draw_acno);
    printf("\n\n\t--->> Amount Withdrawn :%d\n",draw_money);
    printf("\n\n\t--->> Remaining Balance :%d\n",draw_balance);
    printf("\n\n\t# Date & Time = %s",draw_time);
    printf("\n\t***********************************");
   return;
}
    void take ()
{
    printf("\n\n\t***********************************");
    printf("\n\n\tDear Customer ");
    printf("\n\n\t--->> Please Collect Amount \n\n");
    printf("\n\t***********************************");
    return;
}
   void ac_depo(char depo_name[50],int depo_acno,int depo_money,int depo_balance,char depo_time[30])
{       system("cls");
        system("color 06");
        printf("\n\t***********************************\n\n");
        printf("\t\t *-RECEIPT-*\n");
        printf("\n\n\t--->> Account Holder : %s\n",depo_name);
        printf("\n\n\t--->> Account number %d\n",depo_acno);
        printf("\n\n\t--->> Amount Deposited :%d\n",depo_money);
        printf("\n\n\t--->>Remaining Balance :%d\n",depo_balance);
        printf("\n\n\t# Date & Time = %s",depo_time);
        printf("\n\t***********************************");
       return;
}
  void pin_change(char Name[50],int accno,int Pin,char pin_time[30])
{       system("cls");
        system("color 06");
        printf("\n\t***************************************");
        printf("\n\n\t\t    *-ACCOUNT UPDATE-*\n\n");
        printf("\n\n\t--->> Dear Customer %s\n",Name);
        printf("\n\n\t--->> Account number %d\n",accno);
        printf("\n\n\t--->> Your ATM-PIN Is Changed Succesfully\n");
        printf("\n\n\t--->> Your New PIN Is %d\n",Pin);
        printf("\n\n\t# Date & Time = %s",pin_time);
        printf("\n\n\t***************************************");
     return;
}
    void ac_send(int payer,int payee,int pay_money,int rem1_bal,char pay_time[30])
{        system("cls");
        system("color 06");
        printf("\n\t***********************************\n\n");
        printf("\t\t    *-RECEIPT-*\n");
        printf("\n\t Transaction Type :Money Transfer\n\n");
        printf("\n\t--->> From :%d ",payer);
        printf("\n\n\t--->> To :%d ",payee);
        printf("\n\n\t--->> Amount :%d ",pay_money);
        printf("\n\n\t--->> Remaining Balance :%d\n",rem1_bal);
        printf("\n\t--->> Transaction Status :Success\n");
        printf("\n\n\t # Date & Time = %s",pay_time);
        printf("\n\t***********************************\n");
    return;
}
    void ac_donate(int donor_ac,int donor_money,int donor_bal,char donor_time[30])
    {   system("cls");
        system("color 06");
        printf("\n\t***********************************\n\n");
        printf("\t\t    *-RECEIPT-*\n");
        printf("\n\t Transaction Type :Money Transfer(Donation)\n\n");
        printf("\n\t--->> From :%d",donor_ac);
        printf("\n\n\t--->> To :PM CARES FUND");
        printf("\n\n\t--->> Amount :%d",donor_money);
        printf("\n\n\t--->> Remaining Balance :%d",donor_bal);
        printf("\n\n\t--->> Transaction Status:Success\n");
        printf("\n\n\t# Date & Time :%s\n",donor_time);
        printf("\n\t***********************************\n");
        return;
    }
    void name_change(char before_name[50],char after_name[50],int account_num,char update_time[30])
{   system("cls");
    system("color 06");
    printf("\n\t***********************************************\n\n");
    printf("\n\t\t\t *-ACCOUNT UPDATE-*\n\n");
    printf("\n\t\t--> Old Name :%s\n",before_name);
    printf("\n\t\t--> New Name :%s\n\n",after_name);
    printf("\t\t--> Account Number :%d\n",account_num);
    printf("\n\t\t# Date & Time = %s",update_time);
    printf("\n\t***********************************************\n\n");
   return;
}
    void intcal()
{   system("cls");
    system("color 06");
    float principal ,roi, time, maturity,maturity2;
    printf("\n\t******************************************\n");
    printf("\n\t\t***_INTEREST CALCULATOR_***\n");
    printf("\n\t=> Awareness to Customers \n");
    printf("\n\t--> Enter Amount (in Rupees): ");
    scanf("%f", &principal);
    printf("\n\t--> Enter Maturity Time (in years): ");
    scanf("%f", &time);
    printf("\n\t--> Enter Rate of Interest (in percent): ");
    scanf("%f", &roi);
    maturity = principal* (pow((1 + roi / 100), time)); // pow from math
    maturity2 = principal* (pow((1 + roi / 200), 2*time)); // pow from math
    printf("\n\t==> Amount after %0.2f years when compounded yearly = %0.2f\n",time, maturity);
    printf("\n\n");
    printf("\t==> Amount after %0.2f years when compounded half-yearly = %0.2f\n",time, maturity2);
    printf("\n\n\t******************************************\n");
    return;
}
   void wish()
{
    printf("\n\n\t****** Do You Want Receipt ******");
    printf("\n\n\t\t 1) Yes\n\n\t\t 2) No\n\t");
   return;
}
    void message(int inval)
{
    switch(inval)
    {
        case 1:  printf("\n\n\t***--Invalid Option--***\n\n");
        break;
        case 2:  printf("\n\n\t ***--Invalid Amount--***\n");
        break;
        case 3:  printf("\n\t\t ***--Invalid Pin--***");
                 printf("\n\n\t****----Please Try Again----****\n\n");
        break;
        case 4:  printf("\n\n\t\tPlease Enter Amount in multiples of 10\n\n");
        break;
        case 5:  printf("\n\n\tTransaction Failed\n");
        break;
        case 6:  printf("\n\n\t***--Transaction Declined-Insufficient Balance in Your Account--***");
                 printf("\n\n\t****----Try Entering Lower Amount----****\n\n");
        break;
        case 7:  printf("\n\n\t\t**-Invalid Transaction--**");
        break;
        case 8:  printf("\n\t*** ====> User do not exist <==== ***\n");
                 printf("\n\n\t****----Try With Existing Credentials----****\n");
        break;
        case 9:
                 printf("\n\n\t****-Account number already exist-****\n\n");
                 printf("\n\n\t****----Please Try With Another Number----****\n\n");
        break;
        case 10:    printf("\n\n\t\tDear Customer\n\n\t\tPM CARES FUNDS No More Accepting Donations");
                    printf("\n\n\t\tThanks For Your Kindness\n");
        break;
        case 11:
                    printf("\n\t Your Bank Balance Must Be Less Than 100 To Close Account");
        break;
        case 12:
                    printf("\n\n\t Unable to close your account \n");
        break;
        default:
                 printf("\n\t\t***--Invalid--***\n");
      return;
    }
}
 void display(int msg)
{
    switch(msg)
    {
        case 0:
                 printf("\n\n\t\t\t********Welcome to C-Bank ATM Account Registration***********\n");
        break;
        case 1:
                 printf("\n\n\t\t\t******** Welcome to C-Bank ATM ***********\n\n");
                 printf("\t(Insert Your ATM-cum-Debit Card)\n\n");
        break;
        case 2:
                 printf("\n\n\t\tYour choice :");
        break;

        case 3:
                 printf("\n\n\t\tChoose type of account you want to open \n");
                 printf("\n\n\t\t 1. Zero Balance Account ");
                 printf("\n\n\t\t 2. Minimum Balance Account ");
        break;
        case 4:
                 printf("\n\t***********************************");
                 printf("\n\n\t--->> Dear Customer \n");
                 printf("\n\t--->> Transaction Successful\n");
                 printf("\n\t***********************************");
        break;
        case 5:
                 printf("\n\n\t***********************************");
                 printf("\n\n\tDear Customer ");
                 printf("\n\n\tPlease Leave Cash Inside Cash Receiver ");
                 printf("\n\n\t--->> 1. Done\n\n\t--->> 2.Cancel \n");
        break;
        case 6:
                 printf("\n\t***********************************");
                 printf("\n\n\t--->> Dear Customer \n");
                 printf("\n\n\t--->> Your Amount Deposited Successfully \n");
                 printf("\n\t***********************************");
        break;
        case 7:
                 printf("\n\t***********************************");
                 printf("\n\n\t\t--->> Update Your Name \n");
                 printf("\n\t\t--->> Enter New Name :");
        break;
        case 8:
                 printf("\n\t***********************************\n\n");
                 printf("\n\t****Thank You Visit Again****\n\n");
        break;
        case 9:
                 printf("\n\n Note :If you proceed,your account & related information will be deleted permanently");
                 printf("\n\n\t1. Proceed \n\n\t2. Cancel");
        break;
        default:
        printf("\n\t\t***--Invalid--***\n");
	return;
    }
}
    void close_ac(char close_name[50],int close_acno)
{
    printf("\n\t***********************************************\n\n");
    printf("\tDear customer %s\n\n\tAccount number : %d\n\n\tYour Account Closed Succesfully\n\n",close_name,close_acno);
    printf("\tThank You For Using Our Services\n\n");
    printf("\n\t***********************************************\n\n");
    return;
}
    void thanks ()
{
    printf("\n\n    \t(Don't Forget to take your Card)\n");
    printf("\n\t**** Thank You Visit Again ****\n\n");
    return;
}

int main()
{       int start;
        time_t t;   // refer read me file
        t = time(NULL);
        struct tm date = *localtime(&t);                //stores system data in this structure
        int dd=date.tm_mday,mm=date.tm_mon+1,yy=date.tm_year+1900;
        FILE *trans_record;
        options();
        for (;;)
        {
            display(2);
            scanf("%d",&start);
            if (start==1|| start==2)
            break;
            else
            {
                message(1);
                continue;
            }
        }
    switch(start)
  {
        case 1:
            {
        struct REG cust;
         FILE* new_record;
        int num1,acc_type,acc_no;
            display(0);
         for(;;)                                //for loops used instead of goto function
        {
            display(3);
            display(2);
            scanf("%d",&acc_type);
            if (acc_type==1 || acc_type==2)
                break;
            else
                {
                    message(1);
                    continue;
                }
        }
        system("cls");
        system("color 07");
         if (acc_type==1)printf("\n\n\t\t\tAccount Type: ZERO BALANCE ACCOUNT\n\n");
        else printf("\n\n\t\t\tAccount Type: MINIMUM BALANCE ACCOUNT\n\n");
        printf("\n\tYour Name :");
        fgets(cust.AC_NAME,99,stdin);
        fgets(cust.AC_NAME,99,stdin);
        if ((strlen(cust.AC_NAME) > 0) && (cust.AC_NAME[strlen (cust.AC_NAME) - 1] == '\n'))
            {
                cust.AC_NAME[strlen (cust.AC_NAME) - 1] = '\0';
            }
        for(;;)
        {
            printf("\n\tPlease Enter 9 digit number (for purpose of ac/no): ");
            scanf("%d",&num1);
            if (num1<100000000 || num1>999999999)
            {
                message(0);
                continue;
            }
            else break;
        }
        sprintf(cust.AC_NO,"%d",num1);              //sprintf converts integer to string
        for (;;)
    {
        printf("\n\tSet a 4 digit PIN :");
        scanf("%d",&cust.PIN);
        if (cust.PIN<1000 || cust.PIN>9999)
        {
            message(0);
            continue;
        }
        else
        break;
    }
        acc_no = atoi(cust.AC_NO);              //atoi converts string (of numbers) to a integer
        strcpy(cust.TRANS,cust.AC_NO);
        strcpy(cust.PATH,cust.AC_NO);
        strcat(cust.PATH,".txt");
        strcat(cust.TRANS,"trans.txt");
        new_record = fopen(cust.PATH, "r");
        if(new_record!=NULL)
        {
            message(9);
            display(8);
            return 0;
        }else
        reg(cust.AC_NAME,acc_no);
        if (acc_type==1)
        cust.BAL=0;
        else
    {
        for(;;)
        {
        printf("\n\n\t => Please Deposit Amount (Min-2000) ");
        printf("\n\n\t\tEnter amount: ");
        scanf("%d",&cust.BAL);
        if (cust.BAL<2000)
        {
            message(2);
            continue;
        }
        else if(cust.BAL%10!=0)
        {
           message(4);
           continue;
        }
        else
            break;
        }
    }
        user_new(cust.AC_NAME,acc_no,cust.BAL,cust.PIN,ctime(&t));
        new_record = fopen(cust.PATH, "w");
        fprintf(new_record, "%d\n%d\n%s\n%d",acc_no,cust.PIN,cust.AC_NAME,cust.BAL);
        fclose(new_record);
        trans_record=fopen(cust.TRANS,"a");
        fprintf(trans_record,"#Account Created\n%d-%d-%d\nself deposited %d,balance=%d\n",dd,mm,yy,cust.BAL,cust.BAL);
        fclose(trans_record);
        thanks();
        break;
    }

    case 2:
        {
            struct person user,pm,rec;          //different strutures to store required details to use in required time
            FILE *old_record,*old_record2;      // old_record for user and old_record 2 if files want to access other user files
            int option,pin1,pin2,newpin1,newpin2,deposit,withdraw,bill,option2,send_money,comp,close,del1,del2;
            char Ac_no[12],new_name[50],receiver[15],read;
            display(1);
        for(;;)
        {
            printf("\n\tPlease Enter Your Account Number :");
            scanf("%s",Ac_no);
            if (strlen(Ac_no)!=9)
            {
                message(0);
                continue;
            }
            else break;
        }
        strcpy(user.path,Ac_no);
        strcpy(user.trans,Ac_no);
        strcat(user.path,".txt");
        strcat(user.trans,"trans.txt");
        old_record = fopen(user.path, "r");
        if(old_record==NULL)                    //checks existince of customer account based on given input
        {
            message(8);
            thanks();
            return 0;
        }
        fscanf(old_record, "%d",&user.ac_no);
        fscanf(old_record, "%d",&user.pin);
        fseek(old_record,17,SEEK_SET);
        fgets(user.name,49,old_record);
        if ((strlen(user.name) > 0) && (user.name[strlen (user.name) - 1] == '\n'))
        {
            user.name[strlen (user.name) - 1] = '\0';
        }
        fscanf(old_record, "%d",&user.balance);
        fclose(old_record);
        printf("\n\tEnter 4-digit PIN :");
        scanf("%d",&pin1);
        if (pin1!=user.pin)
        {
            message(3);
            thanks();
            return 0;
        }
        system("cls");
        menu();
        display(2);
        scanf("%d",&option);
    switch(option)
        {
        case 1:
            enquiry(user.name,user.ac_no,user.balance,ctime(&t));
            thanks();
            break;
        case 2:
            for(;;)
            {
                printf("\n\t\tEnter Amount You Want To withdraw :");
                scanf("%d",&withdraw);
                if (withdraw>=user.balance)
                {
                    message(6);
                    thanks();
                    return 0;
                }
                else if (withdraw<=0)
                {
                    message(2);
                    continue;
                }
                else if (withdraw%10!=0)
                {
                    message(4);
                    continue;
                }
                else
                {
                    user.balance = user.balance - withdraw;
                    take();
                    break;
                }
            }
            for(;;)
            {
                wish();
                display(2);
                scanf("%d",&bill);
                if (bill!=1 &&bill!=2)
                {
                    message(1);
                    continue;
                }
                else break;
            }
            if (bill==1)
            {
                ac_withdraw(user.name,user.ac_no,withdraw,user.balance,ctime(&t));
            }
            else
            {
                thanks();
            }
            old_record = fopen(user.path, "w");
            fprintf(old_record, "%d\n%d\n%s\n%d",user.ac_no,user.pin,user.name,user.balance);
            fclose(old_record);
            trans_record = fopen(user.trans,"a");
            fprintf(trans_record, "\n%swithdrawn %d,balance=%d\n",ctime(&t),withdraw,user.balance);
            fclose(trans_record);
            break;
        case 3:
            for (;;)
            {
                printf("\n\t\tEnter Amount You Want To Deposit :");
                scanf("%d",&deposit);
                if(deposit<=0)
                {
                    message(2);
                    continue;
                }
                else if (deposit%10!=0)
                {
                    message(4);
                    continue;
                }
                else
                    break;
            }
            for(;;)
            {
                display(5);
                display(2);
                scanf("%d",&option2);
            if (option2!=1&&option2!=2)
                    {
                        message(1);
                        continue;
                    }
            else if (option2==2)
                    {
                        message(5);
                        thanks();
                        return 0;
                    }
            else    break;
            }
            user.balance=user.balance+deposit;
            display(6);
            for(;;)
            {
                wish();
                display(2);
                scanf("%d",&bill);
                if (bill!=1 &&bill!=2)
                {
                        message(1);
                        continue;
                }
                else break;
            }
            if (bill==1)
            {
                ac_depo(user.name,user.ac_no,deposit,user.balance,ctime(&t));
                thanks();
            }
            else
            {
               thanks();
            }
            old_record = fopen(user.path, "w");
            fprintf(old_record, "%d\n%d\n%s\n%d",user.ac_no,user.pin,user.name,user.balance);
             fclose(old_record);
            trans_record = fopen(user.trans,"a");
            fprintf(trans_record, "\n%sdeposited %d,balance=%d\n",ctime(&t),deposit,user.balance);
            fclose(trans_record);
             break;
        case 4:
            for (;;)
            {
                printf("\n\t\tEnter Old PIN :");
                scanf("%d",&pin2);
                if (pin2!=user.pin)
                {
                    message(3);
                    continue;
                }
                printf("\n\t\tEnter New PIN :");
                scanf("%d",&newpin1);
                if (newpin1<=1000 ||newpin1>9999)
                    {
                        message(0);
                        continue;
                    }
                printf("\n\t\tRe Enter New PIN :");
                scanf("%d",&newpin2);
                    if (newpin2!=newpin1)
                {
                    printf("\n\n\t***--New Pin Didn't Match--***\n");
                    continue;
                }
                else break;
            }
            user.pin=newpin2;
            pin_change(user.name,user.ac_no,user.pin,ctime(&t));
            thanks();
            old_record = fopen(user.path, "w");
            fprintf(old_record, "%d\n%d\n%s\n%d",user.ac_no,user.pin,user.name,user.balance);
            fclose(old_record);
            break;
        case 5:
        {
                printf("\n\t\tEnter the account number of receiver :");
                scanf("%s",&receiver);
            for(;;)
            {
                printf("\n\n\t\tEnter the amount you want to send :");
                scanf("%d",&send_money);
                strcpy(rec.path,receiver);
                strcpy(rec.trans,receiver);
                strcat(rec.path,".txt");
                strcat(rec.trans,"trans.txt");
                comp = strcmp(user.path,rec.path);
                if (send_money<0)
                 {
                    message(2);
                    continue;
                 }
                else if (send_money>=user.balance)
                 {
                    message(6);
                    return 0;
                 }
                else if (comp==0)
                {
                    message(7);
                    thanks();
                    return 0;
                }
                else
                    break;
            }
            old_record2 = fopen(rec.path, "r");
                if(old_record2==NULL)
                {
                    message(8);
                    thanks();
                    return 0;
                }
            user.balance=(user.balance)-(send_money);
            fscanf(old_record2, "%d",&rec.ac_no);
            fscanf(old_record2, "%d",&rec.pin);
            fseek(old_record2,17,SEEK_SET);
            fgets(rec.name,49,old_record);
                if ((strlen(rec.name) > 0) && (rec.name[strlen (rec.name) - 1] == '\n'))
                {
                    rec.name[strlen (rec.name) - 1] = '\0';
                }
            fscanf(old_record2, "%d",&rec.balance);
            fclose(old_record2);
            rec.balance=(rec.balance)+(send_money);
            old_record2 = fopen(rec.path, "r+");
            fprintf(old_record2, "%d\n%d\n%s\n%d",rec.ac_no,rec.pin,rec.name,rec.balance);
            fclose(old_record2);
                old_record = fopen(user.path, "r+");
                fprintf(old_record, "%d\n%d\n%s\n%d",user.ac_no,user.pin,user.name,user.balance);
                fclose(old_record);
                display(4);
                for(;;)
            {
                wish();
                display(2);
                scanf("%d",&bill);
                if (bill!=1 &&bill!=2)
                {
                        message(1);
                        continue;
                }
                else break;
            }
            if (bill==1)
                {
                    ac_send(user.ac_no,rec.ac_no,send_money,user.balance,ctime(&t));
                    thanks();
                }
            else
                {
                        thanks();
                }
            trans_record = fopen(user.trans,"a");
            fprintf(trans_record, "\n%stransfered %d to %d,balance=%d\n",ctime(&t),send_money,rec.ac_no,user.balance);
            fclose(trans_record);
            trans_record = fopen(rec.trans,"a");
            fprintf(trans_record, "\n%sreceived %d from %d,balance=%d\n",ctime(&t),send_money,user.ac_no,rec.balance);
            fclose(trans_record);
                break;
        }
        case 6:
        {
            display(7);
            fgets(new_name,49,stdin);
            fgets(new_name,49,stdin);
            if ((strlen(new_name) > 0) && (new_name[strlen (new_name) - 1] == '\n'))
                {
                    new_name[strlen (new_name) - 1] = '\0';
                }
            name_change(user.name,new_name,user.ac_no,ctime(&t));
            old_record = fopen(user.path, "w");
            fprintf(old_record, "%d\n%d\n%s\n%d",user.ac_no,user.pin,new_name,user.balance);
            fclose(old_record);
            thanks();
                break;
        }
            case 7:

        {
            strcpy(pm.path,"999999999.txt");
            strcpy(pm.trans,"999999999trans.txt");
            comp = strcmp(user.path,pm.path);
            old_record2 = fopen(pm.path, "r");
            if (comp==0)
            {
                message(7);
                thanks();
                return 0;
            }
            else if(old_record2==NULL)
            {
                message(10);
                thanks();
                return 0;
            }
            else fclose(old_record2);
            for (;;)
            {
                    printf("\n\n\t\tNo one has ever became poor by giving\n\t\t\t\t\t\t");
                    printf("   -Anne Frank\n\n\t\t=> Enter Amount :");
                    scanf("%d",&send_money);
            if (send_money<=0)
                {
                    message(2);
                    continue;
                }

            else if (send_money>=user.balance)
                {
                    message(6);
                    return 0;
                }
            else
                user.balance=(user.balance)-(send_money);
                break;
            }
                old_record = fopen(user.path, "r+");
                fprintf(old_record, "%d\n%d\n%s\n%d",user.ac_no,user.pin,user.name,user.balance);
                fclose(old_record);
                strcpy(pm.path,"999999999.txt");
                strcpy(pm.trans,"999999999trans.txt");
                old_record2 = fopen(pm.path, "r+");
            fscanf(old_record2, "%d",&pm.ac_no);
            fscanf(old_record2, "%d",&pm.pin);
            fseek(old_record2,17,SEEK_SET);
            fgets(pm.name,49,old_record2);
                if ((strlen(pm.name) > 0) && (pm.name[strlen (pm.name) - 1] == '\n'))
                {
                    pm.name[strlen (pm.name) - 1] = '\0';
                }
            fscanf(old_record2, "%d",&pm.balance);
            fclose(old_record2);
                pm.balance=pm.balance+send_money;
                old_record2 = fopen(pm.path, "r+");
                fprintf(old_record2, "%d\n%d\n%s\n%d",pm.ac_no,pm.pin,pm.name,pm.balance);
                fclose(old_record2);
            trans_record = fopen(user.trans,"a");
            fprintf(trans_record, "\n%stransfered %d to %d,balance=%d\n",ctime(&t),send_money,pm.ac_no,user.balance);
            fclose(trans_record);
            trans_record = fopen(pm.trans,"a");
            fprintf(trans_record, "\n%sreceived %d from %d,balance=%d\n",ctime(&t),send_money,user.ac_no,pm.balance);
            fclose(trans_record);
                display(4);
                for(;;)
            {
                wish();
                display(2);
                scanf("%d",&bill);
                if (bill!=1 &&bill!=2)
                {
                        message(1);
                        continue;
                }
                else
                    break;
            }
                if (bill==1)
                {
                    ac_donate(user.ac_no,send_money,user.balance,ctime(&t));
                    thanks();
                    break;
                }
            else
                {
                        thanks();
                        break;
                }
        }
            case 8:
        {
                trans_record = fopen(user.trans,"r");
                if(trans_record==NULL)
                {
                    printf("\n\n\t\t**-No Transactions Available-**\n\n");
                    thanks();
                    return 0;
                }
                else fclose(trans_record);
                trans_record=fopen(user.trans,"a+");
                read = fgetc(trans_record);
                system("cls");
                system("color 06");
                printf("\n****************************************\n\n");
                printf("===> Your Transaction History\n\n");
                while (read!= EOF)                                          //loop used to print trans file of user
                {
                    printf ("%c", read);
                    read = fgetc(trans_record);
                }
                printf("\n***************************************\n\n");
                fclose(trans_record);
                break;
        }
            case 9 :
        {
            intcal();
            thanks();
            break ;
        }
            case 10:
        {
            display(9);
            display(2);
            scanf("%d",&close);
            system("cls");
            system("color 06");
            if (close==1)
        {
            if (user.balance>=100)
            {
               message(11);
                thanks();
                return 0;
            }
            else
            del1 = remove(user.path);           //function in stdio.h header file
            del2 = remove(user.trans);
            if (del1==0&&del2==0)               //The remove function returns zero is successful, otherwise nonzero.
            {
                close_ac(user.name,user.ac_no);
                break;
            }
            else
            message(12);
            thanks();
            return 0;
        }
            else
            message(5);
            thanks();
            break;
        }
        default:
                {
                        message(7);
                        break;
                }
        }

    }
            break;
            default:
                {
                        message(0);
                        break;
                }
}
 return 0;
}
