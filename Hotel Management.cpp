/* This is a hotel management project in which we will have the information of the items and rooms that we have in the hotel and what are food items ordered by 
the customer and also we have the information that how many rooms are alloted to them also this project will tell us about the sales and the remaining food stocks 
we have in the total collection on the day. */
#include<iostream>
using namespace std;
int main()
{
    int quantity;
    int choice;
    // Q denotes No of product the we had in our hotel
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken_roll=0;
    // S denotes No of product that has been sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken_roll=0;
    // Total price each of the items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken_roll=0;

    cout<<"=============== WELCOME TO GRAND HOTEL ==============="<<endl;
    cout<<"  ========== 'STAY WITH US, FEEL AT HOME' ==========      "<<endl;
    cout<<"\n\tThe quantity of items we have :";
    cout<<"\n Rooms Available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of Pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of Burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of Noodles: ";
    cin>>Qnoodles;
    cout<<"\n Quantity of Shake: ";
    cin>>Qshake;
    cout<<"\n Quantity of Chicken Roll: ";
    cin>>Qchicken_roll;

    // Menu Selection
    m:
    cout<<"\n\t\t\t Please select from the menu option: ";
    cout<<"\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken Roll";
    cout<<"\n7) Information regarding sales & collection";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice! ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"\n\n Enter the number of rooms you want: ";
        cin>>quantity;
        if(Qrooms-Srooms>=quantity)
        {
            Srooms=Srooms+quantity;
            Total_rooms=Total_rooms+quantity*1200;
            cout<<"\n\n\t\t"<<quantity<<" room/rooms have been alloted to you!";
        }
        else
        cout<<"\n\tSorry only "<<Qrooms-Srooms<<" rooms remaining in hotel";
        break;

        case 2:
        cout<<"\n\n Enter Pasta quantity: ";
        cin>>quantity;
        if(Qpasta-Spasta>=quantity)
        {
            Spasta=Spasta+quantity;
            Total_pasta=Total_pasta+quantity*200;
            cout<<"\n\n\t\t"<<quantity<<" plate pasta is ordered!";
        }
        else
        cout<<"\n\tSorry only "<<Qpasta-Spasta<<" pasta remaining in hotel";
        break;

        case 3:
        cout<<"\n\n Enter Burger quantity: ";
        cin>>quantity;
        if(Qburger-Sburger>=quantity)
        {
            Sburger=Sburger+quantity;
            Total_burger=Total_burger+quantity*140;
            cout<<"\n\n\t\t"<<quantity<<" burger is ordered!";
        }
        else
        cout<<"\n\tSorry only "<<Qburger-Sburger<<" burger remaining in hotel";
        break;

        case 4:
        cout<<"\n\n Enter Noodles quantity: ";
        cin>>quantity;
        if(Qnoodles-Snoodles>=quantity)
        {
            Snoodles=Snoodles+quantity;
            Total_noodles=Total_noodles+quantity*150;
            cout<<"\n\n\t\t"<<quantity<<" plate noodles is ordered!";
        }
        else
        cout<<"\n\tSorry only "<<Qnoodles-Snoodles<<" noodles remaining in hotel";
        break;

        case 5:
        cout<<"\n\n Enter Shake quantity: ";
        cin>>quantity;
        if(Qshake-Sshake>=quantity)
        {
            Sshake=Sshake+quantity;
            Total_shake=Total_shake+quantity*50;
            cout<<"\n\n\t\t"<<quantity<<" Shake is ordered!";
        }
        else
        cout<<"\n\tSorry only "<<Qshake-Sshake<<" shake remaining in hotel";
        break;

        case 6:
        cout<<"\n\n Enter Chicken Roll quantity: ";
        cin>>quantity;
        if(Qchicken_roll-Schicken_roll>=quantity)
        {
            Schicken_roll=Schicken_roll+quantity;
            Total_chicken_roll=Total_chicken_roll+quantity*85;
            cout<<"\n\n\t\t"<<quantity<<" chicken roll is ordered!";
        }
        else
        cout<<"\n\tSorry only "<<Qchicken_roll-Schicken_roll<<" chicken roll remaining in hotel";
        break;

        case 7:
        cout<<"\n\t\tDetails of sales & collection: ";
        cout<<"\n\n Number of Rooms we had: "<<Qrooms;
        cout<<"\n\n Number of Rooms we gave for rent: "<<Srooms;
        cout<<"\n\n Remaining Rooms: "<<Qrooms-Srooms;
        cout<<"\n\n Total Rooms collection for the day: "<<Total_rooms;

        cout<<"\n\n Number of Pastas we had: "<<Qpasta;
        cout<<"\n\n Number of Pastas we sold: "<<Spasta;
        cout<<"\n\n Remaining Pastas: "<<Qpasta-Spasta;
        cout<<"\n\n Total Pastas collection for the day: "<<Total_pasta;

        cout<<"\n\n Number of Burgers we had: "<<Qburger;
        cout<<"\n\n Number of Burgers we sold: "<<Sburger;
        cout<<"\n\n Remaining Burgers: "<<Qburger-Sburger;
        cout<<"\n\n Total Burgers collection for the day: "<<Total_burger;

        cout<<"\n\n Number of Noodles we had: "<<Qnoodles;
        cout<<"\n\n Number of Noodles we sold: "<<Snoodles;
        cout<<"\n\n Remaining Noodles: "<<Qnoodles-Snoodles;
        cout<<"\n\n Total Noodles collection for the day: "<<Total_noodles;

        cout<<"\n\n Number of Shake we had: "<<Qshake;
        cout<<"\n\n Number of Shake we sold: "<<Sshake;
        cout<<"\n\n Remaining Shake: "<<Qshake-Sshake;
        cout<<"\n\n Total Shake collection for the day: "<<Total_shake;

        cout<<"\n\n Number of Chicken Rolls we had: "<<Qchicken_roll;
        cout<<"\n\n Number of Chicken Rolls we sold: "<<Schicken_roll;
        cout<<"\n\n Remaining Chicken Rolls: "<<Qchicken_roll-Schicken_roll;
        cout<<"\n\n Total Chicken Rolls collection for the day: "<<Total_chicken_roll;

        cout<<"\n\n Total Collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken_roll;
        break;

        case 8:
        exit(0);
        default:
        cout<<"\n Please select the numbers mentioned above!";
    }
    goto m;
}
