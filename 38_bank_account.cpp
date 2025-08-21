#include <iostream>
using namespace std;
class account
{
    string ac_name;
    string ac_number;
    int belance;
    static string bankname;
    static int total_bank_belance;
    static int total_account;

public:
    static void create_account(account ac[], int index)
    {
        if (index < 10)
        {
            cout << "\nenter info to create new account : \n";
            cout << "enter your name : ";
            cin >> ac[index].ac_name;
            cout << "enter your account number : ";
            cin >> ac[index].ac_number;
            cout << "enter you initial belance : ";
            cin >> ac[index].belance;
            cout << "\n account create succefully " << char(1) << "\n\n";
            total_account++;
            total_bank_belance = total_bank_belance + ac[index].belance;
        }
        else
        {
            cout << "\naccount limit is fulled\n\n";
        }
    }
    static void display_accounts(account ac[], int index)
    {
        if (index > 0)
        {
            int i;
            for (i = 0; i < index; i++)
            {
                cout << "\naccount" << i + 1 << " info : \n";
                cout << "account holder name :" << ac[i].ac_name << endl;
                cout << "account number :" << ac[i].ac_number << endl;
                cout << "account belance :" << ac[i].belance << "\n\n";
            }
        }
        else
        {
            cout << "\nfisrt create account then display account\n\n ";
        }
    }
    static void display_account(account ac[], int index)
    {
        if (index > 0)
        {
            int i, f = 0;
            string number;
            cout << "\nenter account number : ";
            cin >> number;
            for (i = 0; i < index; i++)
            {
                if (number == ac[i].ac_number)
                {
                    f = 1;
                    cout << "\naccount" << i + 1 << " info : \n";
                    cout << "account holder name :" << ac[i].ac_name << endl;
                    cout << "account number :" << ac[i].ac_number << endl;
                    cout << "account belance :" << ac[i].belance << "\n\n";
                }
            }
            if (f == 0)
            {
                cout << "\naccount is not exist / wrong account number\n\n";
            }
        }
        else
        {
            cout << "\nfisrt create account then display account\n\n ";
        }
    }
    static void credit(account ac[], int index)
    {
        if (index > 0)
        {
            string number;
            int ammount, i, f = 0;
            cout << "\nenter account number : ";
            cin >> number;
            cout << "enter credit amount : ";
            cin >> ammount;
            for (i = 0; i < index; i++)
            {
                if (number == ac[i].ac_number)
                {
                    f = 1;
                    ac[i].belance = ac[i].belance + ammount;
                    total_bank_belance = total_bank_belance + ammount;
                    cout << ammount << " ammount credit succefully in " << ac[i].ac_name << " account\n\n";
                }
            }
            if (f == 0)
            {
                cout << "\naccount is not exist / wrong account number\n\n";
            }
        }
        else
        {
            cout << "\nfisrt create account then credit ammount\n\n ";
        }
    }
    static void debit(account ac[], int index)
    {
        if (index > 0)
        {
            string number;
            int ammount, i, f = 0;
            cout << "\nenter account number : ";
            cin >> number;
            cout << "enter debit amount : ";
            cin >> ammount;
            for (i = 0; i < index; i++)
            {
                if (number == ac[i].ac_number)
                {
                    f = 1;
                    if (ammount < ac[i].belance)
                    {
                        ac[i].belance = ac[i].belance - ammount;
                        total_bank_belance = total_bank_belance - ammount;
                        cout << ammount << " ammount debit succefully from" << ac[i].ac_name << " account\n\n";
                    }
                    else
                    {
                        cout << "\n\nyou have insufficient ammount !\n";
                        cout << "you have only " << ac[i].belance << " rs\n\n";
                    }
                }
            }
            if (f == 0)
            {
                cout << "\naccount is not exist / wrong account number\n\n";
            }
        }
        else
        {
            cout << "\nfisrt create account then debit ammount\n\n ";
        }
    }
    static void total_bank_belance_display()
    {
        cout << "\n total bank belance :" << total_bank_belance << endl;
        cout << "\n total account :" << total_account << "\n\n";
    }
};
string account::bankname = "HDFC";
int account::total_bank_belance = 0;
int account::total_account = 0;
int main()
{
    account ac[10];
    int num, index = 0;
    while (1)
    {
        printf("<---Bank Application--->\n");
        printf("press 1 to create account\n");
        printf("press 2 to display account\n");
        printf("press 3 to display sigle account\n");
        printf("press 4 to credit ammount\n");
        printf("press 5 to debit ammount\n");
        printf("press 6 to total bank ammount\n");
        printf("press 7 to Exit\n");
        printf("press number : ");
        cin >> num;
        switch (num)
        {
        case 1:
            account::create_account(ac, index);
            index++;
            break;
        case 2:
            account::display_accounts(ac, index);
            break;
        case 3:
            account::display_account(ac, index);
            break;
        case 4:
            account::credit(ac, index);
            break;
        case 5:
            account::debit(ac, index);
            break;
        case 6:
            account::total_bank_belance_display();
            break;
        case 7:
            exit(0);
            break;
        default:
        {
            cout << "\nplease enter number 1 to 7 \n\n";
        }
        }
    }
    return 0;
}