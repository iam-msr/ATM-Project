ATM MACHINE 
INTRODUCTION:        This file is part of the project on  ATM .
(switch to full screen to read )
===> Any Amount or option choosing  entered should be a positive number. 
===>The Number to be typed for an option is visible just before the option.
Example:
1. X
2. Y
3. Z
ie. to enter option Y , you need to enter 2. No characters(a-z)or Symbol is allowed.
Some Instructions before the main file:- 
Note 1: <time.h>


About Time function
time()--->>This function is used to get the current system time as structure.
ctime()--->>This function is used to return string that contains date and time informations
1) The tm_year field is relative to 1900 on all POSIX-compliant platforms. Therefore we have added 1900 to it. If 1900 was not added to it, then in place of 2020 as the current year, it would print 120 as the current year, that tells, it is 120 years since 1900.
2) The tm_mon displayed starting from 1 rather than 0. Because, if 1 is not added, then for January it will show the 0th month (starting or very first month of every year).


Note 2: <stdio.h>//sprintf converts integer to string        [note system() is a really useful function included in Windows.h library.]


About colour function
0 = Black   8 = Gray
1 = Blue    9 = Light Blue
2 = Green   A = Light Green
3 = Aqua    B = Light Aqua
4 = Red     C = Light Red
5 = Purple  D = Light Purple
6 = Yellow  E = Light Yellow
7 = White   F = Bright White
Ex.1 system("cls");  //clears the screen 
Ex.2 system("color F0"); //Creates Bright White Background with black text


Note 3: <stdlib.h>


#atoi(const char *str)
Converts the string pointed to, by the argument str to an integer (type int).


Note 4: In our programme we used int (data type ) so at the time of any transaction (depositing.withdrawing/sending money) you have to enter numbers (natural) in range in which int data type take i.e -2,147,483,647 to 2,147,483,647 for upto a 9-10 digit precision.


Note 5: You have to enter characters (alphabets) only when you are supposed to enter details like your name, at the time of account opening you can set your name as a combination of alphabets with numbers even with a space.


As soon as we run the code , we are given  2 options(main features).
        1. New Customer
        2. Existing Customer
So, we are allowed to enter 1 or 2 corresponding to the state of customer
If  you choose ....,
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


                                                Main Feature 1 (for opening an account in our bank)->for non-registered customers        


        A new menu is opened, which user have to choose:
        1. Zero Balance Account
        2. Min. Balance Account


        => If we Enter 1===> A Zero Balance Account is opened ie. with initial balance as "0" will be alloted.


        => If we Enter 2===>ATM Machine will generate an account in which we are to be asked to deposit the minimum (2000) amount (after entering details of us),which is to be entered in Rupees.
        =>ANY ENTRIES OTHER THAN 1 or 2 ARE CONSIDERED AS INVALID
        => And upon entering will give "Invalid Option" and then will again ask to alter our choice.
***After the above-mentioned process (choosing the type of account you want to open) the compiler will ask you:-Name, A 9 digit natural number(as your preferred account number) and to set a PIN.
==> In the name , we have to enter our name (All Characters and Symbols are considered as Valid)
==> In Account Number, the entries should be a 9-digit number in between (100000000 to 999999999).
ex.987456321.All other entries like a non-nine digit number, are considered as invalid.
==> For Setting a pin, one must enter a Valid 4 digit number between 1000 to 9999 (ie. first digit cannot be zero) , otherwise it will return invalid .


*** NOW ALL YOUR DETAILS WILL BE DISPLAYED ON SCREEN, WHICH YOU CAN SAVE UP WITH YOU FOR FUTURE TRANSANCTIONs (possible only via ATM services).


(Like this way you can create any number of accounts but account number must be unique u can't open an account having Ac/No of already existing customer)
------------------------------------------------------------------------------------------------------------------------------------------------------------------
                
                                Main Feature 2 (for using ATM Service)->for registered customers


==> On doing so , you will be asked to enter your account number which is a 9 digit number.
(If non-existing acc numbers are given as input it will display user do no exist)
==> Enter the PIN, you set-up while account opening.
(if you failed to do  enter correct pin it will say invalid pin and returns 0 )


on entering your ATM Credentials it will show a MENU  having different services as like as  in ATM :-
                             
                                                                  MENU                  
                                        
          1. Balance Enquiry  : Used to check your available balance.
 On entering digit 1 , a screen with your details is shown along with a default message and a thank you message ,after which you can remove your ATM card.  :-


         2. Withdrawal : Used to Withdraw money from your Bank account.
You can withdraw an amount only in multiples of 10 , as it is the minimum denomination available with bank (so any amount like 4832 will be considered Invalid).Also You can Withdraw an amount less than your Balance otherwise a "Insufficient Funds" message will be displayed . 


        3. Deposit :Used to deposit money in your bank account.
On entering 3 , an option of the amount of money to be entered will be displayed, in which you have to enter an amount in the multiples of 10 (ie. Rs. 4832 will be shown invalid as it is not in multiples of 10).
After entering amount a Message to enter the cash in the Cash- Receiver is displayed by giving 2 options
a.) Done - This will deposit the amount in your bank account .
b.)cancel - This will lead to cancellation of the deposit,and as the transaction failed it returns 0.
 
An option to generate Receipt of your transaction (on successfully deposition) shows up    
                Do you want a Receipt?
          1)Yes : On pressing 1 (for YES) a receipt of your transaction along with your transaction details is generated.
          2)No : On pressin 2 (for No) it will returns 0 with a thank u message.          
                      
         4. PIN Change : Used to change your ATM card pin (for convenience). 
                Users must remember their old pin to change their pin (maybe for added security).
When opened it will show a tab to enter previous PIN , after which you will be asked to enter your new pin +++any entry from 1000 to 9999 (ie. a 4 digit entry) is valid.
You will be asked to re-enter your new PIN again for security check , if your entered pin matches your re-entered PIN then your PIN gets changed successfully otherwise an Error message is Shown .
***--New Pin Didn't Match--***
Don't Panic ATM will ask you again to re-enter your old PIN and then new PIN again . 
            
         5. Money Transfer  :Used for Transferring money from one bank account to another bank account .
NOTE : the account you are transferring to , should exist in the bank directory otherwise you won't be able to transfer your funds (however no funds will be ejected from your account ).
You will be asked the receiver's account number and the amount you need to transfer (any amount less than your balance and >0) can be transferred) . 
After entering , the amount will be transferred.
You will be asked to get a receipt (YES/ NO) , on which you can get your transaction receipt else thank you message.


                 6. Update Details :Used to Change/correct your name in your bank account
You will be asked to Enter your new name , in which you can enter your new name and a receipt will be printed accordingly .
An integer/symbol value can also be entered, which provides user to make more than 1 account and keep track of them.
Ex. Jigishu1 , Jigishu2 etc.


           7. PM CARES Fund Donation :Used for donations directly from our ATM machine to the PM-CARES Fund account.
This is essentially a money transfer feature in which users can donate money directly to the PM-CARES Fund, However you should enter a positive amount only (ie. > Rs.0).
NOTE :You can also Transfer the money to account number 999999999 , that is reserved for PM-CARES fund donation  .
NOTE :You have to make this account If the 999999999.txt file which also part of our program not along with this source c code in ur pc file path(by making a change in line 378 removing =), if u haven't created this file or this txt file is not available then , if you choose to donate it  display "No more accepting Donations." 
Also it's better to place the file in the same location as the c program.since you will be able to know credentials of PM FUNDS if you do a transaction donation/send money from funds account to funds account won't possible.


        8. Transaction History  : See the List of all Transactions you made in your Bank Account,so that you can keep tabs on your spends .This generates the list of all transactions since the date of account opening and shows date/time/amount transferred or received or deposited and balance at the End of transaction like usual.


        9. Interest Calculator :Can be used by consumers to check what are the amounts any bank charges you for loans and are used in investment help.
  In this you are asked to enter principal amount , maturity time , Interest rate and produce output in terms of the amount that is formed at the end of the maturity period .
        
        10. Close My Account : if you want to close your account; it will display two options 
1. proceed 
2. cancel 
You have to enter either "1" or "2".
If you choose 1 then your account and related all information will be deleted and removed from the bank database (also respective user txt files from the source c file path will be deleted) and your ATM credentials are no longer valid.
If you choose 2 then as running transaction cancelled an error message will be displayed and returns 0.
Note : If the balance of your account is more than 100 Rs. then you will not be able to terminate your account.
In such a case you can withdraw money, so that your balance becomes less than Rs. 100 or preferably zero.
------------------------------------------------------------------------------------------------------


Note : The source code is written and developed in IDE Codeblocks (0 warnings) and compiled by the Mingw GCC compiler in a windows machine, We suggest you to run this code on the same platform in windows for a smooth execution.


                
Request:         We request students/people who are using this code and running in their machine not to publish this source C-code anywhere also don't share it with anyone without permission.
If you have any suggestions/doubts please contact.
Thanks.


                                                                --THE END--