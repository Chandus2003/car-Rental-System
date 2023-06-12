#include <iostream>
//#include <cstdlib>
#include <ctime>
#include <iomanip>
#include<fstream>
#include<string.h>
#include<string>
#include<unistd.h>
#include<windows.h>
using namespace std;
int main();
void  main_menu_car ();
void car(int pos);
void Header_car();
void Header2_car();
void Car_type();
void clasic_car();
void medium_car();
void luxary_car();
void loading();
void Top1_star();
void Top2_star();
void Botom_star();
void genrate_bill(int price, int n_o_c,string car_type, string car_name);
void view_rental_car();
void search_rental_car();
void remove_rental_car();
void edit_rental_car();

/* ----------------------------------------------------
------------------ Delete RENTAL CAR       ------------
-------------------------------------------------------*/
void remove_rental_car()
{




}
/* ----------------------------------------------------
------------------ Edit RENTAL CAR       ------------
-------------------------------------------------------*/

void edit_rental_car()
{


}

/* ----------------------------------------------------
------------------ Search RENTAL CAR       ------------
-------------------------------------------------------*/
void search_rental_car()
{
     string name,place,dist,state,m_number , car_type,  car_name;
     int price,  n_o_c,  order_number,Order_no ,count;

//a1<<"\t\t"<<order_number<<"\n"<<name <<" "<<m_number<<" "<<place<<" "<<dist
  //   <<" "<<state<<" "<<price<<" "<<n_o_c<<" "<<car_type<<" " <<car_name<<endl<<endl;
cout<<"Enter the order no. :-";
cin>>Order_no ;
ifstream a2("details.txt");
    while (a2)
    {
        a2>>order_number>>name>>m_number>>place>>dist>>state>>price>>n_o_c>>car_type>>car_name;
        if (Order_no == order_number)
        {
            count=1;
        }
        else
        {
            cout<<"......ERROR !!!.....\n\nKindly Enter the correct order number.....\n";
            search_rental_car();


        }
        
    }

    a2.close();
    if (count==1)
    {
        Top1_star();
          cout<<"\t*\t\t\t"<<car_type <<"  \t\t\t      *\n";
        Top2_star();
        cout<<"\n\t\tName \t\t    :-"<<name;
        cout<<"\n\t\tOrder Number \t    :-"<<order_number;
        cout<<"\n\t\tCar Name is\t     :- "<<car_name;
        cout<<"\n\t\tPrice of the car is  :- "<<price;
        cout<<"\n\t\tNo of the car \t     :- "<<n_o_c<<endl;
        cout<<"\n\n\t\t\t Thanks For Renting Our Car \n ";
        Botom_star();

    }
    

//search_rental_car();

}
/* ----------------------------------------------------
------------------   View RENTAL CAR       ------------
-------------------------------------------------------*/
void view_rental_car()
{
    cout<<"\t If you want to view your rental car \n\tKindly enter your order number \n\t";


    search_rental_car();
    


}
/* ----------------------------------------------------
------------------   Gemrate BILL       ---------------
-------------------------------------------------------*/
void genrate_bill(int price, int n_o_c,string car_type, string car_name)
{
    string name,place,dist,state,m_number;
     Header_car();
     cout<<"\n\t\tEnter your details carefully.....\n";
    cout<<"\n\t\tEnter you name :- ";
    cin>>name;
    cout<<"\n\t\tEnter your phone number :- +91 ";
    cin>>m_number;
    cout<<"\n\t\tEnter your place :- ";
    cin>>place;
    cout<<"\n\t\tEnter your district :- ";
    cin>>dist;
    cout<<"\n\t\tEnter your state :- ";
    cin>>state;
    system("cls");
     Header_car();
    cout<<"\n\n";
    Top1_star();
     cout<<"\t*\t\t\t BILLING DETAILS    \t\t\t*\n";
     Top2_star();
     cout<<"\t\tName      :- "<<name;
     cout<<"\n\t\tMo.No.   :- +91 "<<m_number;
     cout<<"\n\t\tPlace    :- "<<place;
     cout<<"\n\t\tDist.    :- "<<dist;
     cout<<"\n\t\tState    :- "<<state;
     cout<<"\n\t----------------------------------------------------------------\n";

    // int order_number=rand()*99999 + 6943;    
    srand(time(nullptr)); // set the seed based on the current time
    int order_number = rand() % 100000 + 986943; // generate a random number between 6943 and 106942
     cout<<"\t\tORDER NUMBER :- "<<order_number;
     cout<<"\n\t\tNo. of Cars:- "<<n_o_c;
     cout<<"\n\t\tYour bill is :-  "<<price*n_o_c;
     cout<<"\n\n\n\t\tThanks for visiting \n";
      ofstream a1("details.txt",ios::app);
     a1<<"\t\t"<<order_number<<"\n"<<name <<" "<<m_number<<" "<<place<<" "<<dist
     <<" "<<state<<" "<<price<<" "<<n_o_c<<" "<<car_type<<" " <<car_name<<endl<<endl;
     Botom_star();
     sleep(10);
     main();



}
/* ----------------------------------------------------
------------ Star PATTERN TOP AND BOTTOM---------------
-------------------------------------------------------*/
void Top1_star()
{
    cout<<"\n\n\t";
    for(int i=0; i<8; i++)
    {
        cout<<"* ";
        Sleep(115);      
    }
    cout<<"\t\t\t\t";
    for(int i=0; i<9; i++)
    {
        cout<<"* ";
        Sleep(115);      
    }
    cout<<"\n";
}
void Top2_star()
{
   // cout<<"\t*\t\t\tClasic CAR\t\t\t\t*\n"; use this in code 
for (int j = 0; j <3; j++)

        {
             cout<<"\t*\t\t\t\t\t\t\t\t*\n";
             Sleep(115);
        }
}

void Botom_star()
{
     for(int i=0; i<4; i++)
    {
        cout<<"\t*\t\t\t\t\t\t\t\t*\n";
        Sleep(115);      
    }
    cout<<"\t";
     for(int i=0; i<8; i++)
    {
        cout<<"* ";
        Sleep(115);      
    }


    cout<<"\t\t\t\t";
    for(int i=0; i<9; i++)
    {
        cout<<"* ";
        Sleep(115);      
    }
     
}

/* ----------------------------------------------------
------------ clasic Cars cars --------------------------
-------------------------------------------------------*/

void clasic_car()
{
  loading();
    system("cls");
    Header_car();
    cout<<"\n\n";
    Top1_star();
    cout<<"\t*\t\t\t Clasic CAR\t\t\t\t*\n";
     Top2_star();
     cout<<"\n\n\t\t..........COMING SOON............";
     Botom_star();
     sleep(3);
     system("cls");
     Car_type();
   
}
/* ----------------------------------------------------
------------ medium Cars cars -------------------------- Ford Ecosport 1.5TITANIUM
-------------------------------------------------------*/
void medium_car()
{ 
     int input;
    char choice,Main;
  loading();
    system("cls");
    Header_car();
    cout<<"\n\n";
    Top1_star();
    cout<<"\t*\t\t\t Medium CAR\t\t\t\t*\n";
     Top2_star();
     cout<<"\t*\t1. Maruti Swift            ( Press 1 to For Maruti Swift)\n\n";
     cout<<"\t\t2. Hyundai Elite    ( Press 2 to For Hyundai Elite )\n\n";
     cout<<"\t\t3. Tata Tiago  \t    ( Press 3 to For Tata Tiago )\n\n";
     cout<<"\t\t4.Ford EcoSport     ( Press 4 to For Ford EcoSport )\n";
     Botom_star();
     sleep(3);
     cout<<"\n\n\t\t Now it's time to add the car to your Cart... ";
     cout<<"\n\t\tDo You Want to Add car from above mentioned (y/n):-";
     cin>>Main;
     if (Main=='y'||Main=='Y')
     {
        cout<<"\n\t\tEnter the code of car which u want to add :- ";
       cin>>input;
     }
     else if (Main=='n'||Main=='N')
     {
       Car_type();
     }
     switch(input)
     {
        case 1:
        {
            int price=500;
        int number;
        string car_type="Medium-Car" , car_name ="Maruti-Swift ";
        char x,more;
        cout<<"\n\tYou are one step closer to rent your car.........\n";
        Top1_star();
        cout<<"\t*\t\t\t Maruti-Swift \t\t\t\t*\n";
        Top2_star();
        cout<<"\t\tModel Name  :- Maruti-Swift-VXI\n";
        cout<<"\t\tEngine      :- 1.2L Dual Jet\n";
        cout<<"\t\tHorse Power :-57 to 66 kW\n";
        cout<<"\t\tTop Speed   :- 140 kmph \n";
        cout<<"\t\t ... 0-100 kph accelration in just 11.67sec second....\n";
        cout<<"\t\tPrice       :-500 per/day ( Fuel Excluded..)\n\n";
        
                char main;
        cout<<"\t\tDo you want to add this car pre 'y' for yes 'n' for No :-";
        cin>>x;
        if (x=='y'||x=='Y')
        {
            cout<<"\t\tEnter the number of car you want to rent :- ";
            cin>>number;
            cout<<"\n\n\t\tYou Have succesfully added your car to the cart...\n";  
        } 
        else if (x=='n'||x=='N')
        {
            cout<<"Press M to go to car list  ";
            cin>>main;
            if (main=='m'|main=='M')
            {
               medium_car();
            }          
        }          
        Botom_star();
        cout<<"\n\n\t\tYour Bill is Being Genrated...\n";
         loading();
         system("cls");
         genrate_bill(price, number,car_type,car_name);

        }
        break;       
        case 2:
        {

           int price=700;
        int number;
        string car_type="Medium-Car" , car_name ="Hyundai-Elite ";
        char x,more;
        cout<<"\n\tYou are one step closer to rent your car.........\n";
        Top1_star();
        cout<<"\t*\t\t\tHyundai-Elitet\t\t*\n";
        Top2_star();
        cout<<"\t\tModel Name  :-Hyundai-Elite-I20\n";
        cout<<"\t\tEngine      :- 1396 cc\n";
        cout<<"\t\tHorse Power :- 150 kW  \n";
        cout<<"\t\tTop Speed   :- 145 kmph \n";
        cout<<"\t\t ... 0 to 100 Kmph in 15 to 16 seconds.....\n";
        cout<<"\t\tPrice       :- 500 per/day ( Fuel Excluded..)\n\n";
                char main;
        cout<<"\t\tDo you want to add this car pre 'y' for yes 'n' for No :-";
        cin>>x;
        if (x=='y'||x=='Y')
        {
            cout<<"\t\tEnter the number of car you want to rent :- ";
            cin>>number;
            cout<<"\n\n\t\tYou Have succesfully added your car to the cart...\n";  
        } 
        else if (x=='n'||x=='N')
        {
            cout<<"Press M to go to car list  ";
            cin>>main;
            if (main=='m'|main=='M')
            {
               medium_car();
            }          
        }          
        Botom_star();
        cout<<"\n\n\t\tYour Bill is Being Genrated...\n";
         loading();
         system("cls");
         genrate_bill(price, number,car_type,car_name);

        }
        break;
        case 3:
        {
                       int price=800;
        int number;
        string car_type="Medium-Car" , car_name =" Tat-Tiago ";
        char x,more;
        cout<<"\n\tYou are one step closer to rent your car.........\n";
        Top1_star();
        cout<<"\t*\t\t\t Tata-Tiago\t\t*\n";
        Top2_star();
        cout<<"\t\tModel Name  :- Tata-Tiago-XZ\n";
        cout<<"\t\tEngine      :- 1496 cc\n";
        cout<<"\t\tHorse Power :- 170 kW  \n";
        cout<<"\t\tTop Speed   :- 165 kmph \n";
        cout<<"\t\t ... 0 to 100 Kmph in 13.66 seconds.....\n";
        cout<<"\t\tPrice       :- 500 per/day ( Fuel Excluded..)\n\n";
                char main;
        cout<<"\t\tDo you want to add this car pre 'y' for yes 'n' for No :-";
        cin>>x;
        if (x=='y'||x=='Y')
        {
            cout<<"\t\tEnter the number of car you want to rent :- ";
            cin>>number;
            cout<<"\n\n\t\tYou Have succesfully added your car to the cart...\n";  
        } 
        else if (x=='n'||x=='N')
        {
            cout<<"Press M to go to car list  ";
            cin>>main;
            if (main=='m'|main=='M')
            {
               medium_car();
            }          
        }          
        Botom_star();
        cout<<"\n\n\t\tYour Bill is Being Genrated...\n";
         loading();
         system("cls");
         genrate_bill(price, number,car_type,car_name);
          

        }
        break;
        case 4:
        {
            int price=850;
        int number;
        string car_type="Medium-Car" , car_name ="Ford-Ecosport";
        char x,more;
        cout<<"\n\tYou are one step closer to rent your car.........\n";
        Top1_star();
        cout<<"\t*\t\t\t Ford-Ecosport\t\t\t\t*\n";
        Top2_star();
        cout<<"\t\tModel Name  :- Ford-Ecosport-1.5TITANIUM\n";
        cout<<"\t\tEngine      :- 1.2L Dual Jet\n";
        cout<<"\t\tHorse Power :-67 to 76 kW\n";
        cout<<"\t\tTop Speed   :- 168 kmph. \n";
        cout<<"\t\t ... 0-100 kph accelration in just 10.67sec second....\n";
        cout<<"\t\tPrice       :-850 per/day ( Fuel Excluded..)\n\n";
        
                char main;
        cout<<"\t\tDo you want to add this car pre 'y' for yes 'n' for No :-";
        cin>>x;
        if (x=='y'||x=='Y')
        {
            cout<<"\t\tEnter the number of car you want to rent :- ";
            cin>>number;
            cout<<"\n\n\t\tYou Have succesfully added your car to the cart...\n";  
        } 
        else if (x=='n'||x=='N')
        {
            cout<<"Press M to go to car list  ";
            cin>>main;
            if (main=='m'|main=='M')
            {
               medium_car();
            }          
        }          
        Botom_star();
        cout<<"\n\n\t\tYour Bill is Being Genrated...\n";
         loading();
         system("cls");
         genrate_bill(price, number,car_type,car_name);

        }
        break;



     }

}
/* ----------------------------------------------------
------------ luxary Cars cars --------------------------
-------------------------------------------------------*/
void luxary_car()
{
         int input;
    char choice,Main;
    loading();
    system("cls");
    Header_car();
    cout<<"\n\n";
    Top1_star();
    cout<<"\t*\t\t\tLuxary CAR\t\t\t\t*\n";
     Top2_star();
     cout<<"\t*\t1. B.M.W            ( Press 1 to For B.M.W)\n\n";
        cout<<"\t\t2. Merscedes Benz   ( Press 2 to For Merscedes Benz)\n\n";
        cout<<"\t\t3. Audi  \t    ( Press 3 to For Audi)\n\n";
        cout<<"\t\t4. GT Mustang       ( Press 4 to For Mustang)\n";
     Botom_star();
     cout<<"\n\n\t\t Now it's time to add the car to your Cart... ";
     cout<<"\n\t\tDo You Want to Add car from above mentioned (y/n):-";
     cin>>Main;
     if (Main=='y'||Main=='Y')
     {
        cout<<"\n\t\tEnter the code of car which u want to add :- ";
       cin>>input;
     }
     else if (Main=='n'||Main=='N')
     {
       Car_type();
     }
     
     switch (input)
     {
     case 1:
       {
        int price=1000;
        int number;
        string car_type="luxary-Car" , car_name ="B.M.W";
        char x,more;
        cout<<"\n\tYou are one step closer to rent your car.........\n";
        Top1_star();
        cout<<"\t*\t\t\t  B.M.W  \t\t\t\t*\n";
        Top2_star();
        cout<<"\t\tModel Name  :- BMW-X5\n";
        cout<<"\t\tEngine      :- 3.0L turbocharged inline 6-cylinder Engine\n";
        cout<<"\t\tHorse Power :-300-617hp\n";
        cout<<"\t\tTop Speed   :- 130 - 617 mph\n";
        cout<<"\t\t ... 0-60 mph accelration in just 3.8 to 5.3 second....\n";
        cout<<"\t\tPrice       :-1000 per/day ( Fuel Excluded..)\n\n";
        char main;
        cout<<"\t\tDo you want to add this car pre 'y' for yes 'n' for No :-";
        cin>>x;
        if (x=='y'||x=='Y')
        {
            cout<<"\t\tEnter the number of car you want to rent :- ";
            cin>>number;
            cout<<"\n\n\t\tYou Have succesfully added your car to the cart...\n";  
        } 
        else if (x=='n'||x=='N')
        {
            cout<<"Press M to go to car list  ";
            cin>>main;
            if (main=='m'|main=='M')
            {
               luxary_car();
            }          
        }          
        Botom_star();
        cout<<"\n\n\t\tYour Bill is Being Genrated...\n";
         loading();
         system("cls");
         genrate_bill(price, number,car_type,car_name);
       }
        break;
        case 2:
        {
             int price=1500;
        int number;
        string car_type="Luxary-Car" , car_name ="Mercedes-Benz Maybach";
        char x,more;
        cout<<"\n\tYou are one step closer to rent your car.........\n";
        Top1_star();
        cout<<"\t*\t\t\t  B.M.W  \t\t\t\t*\n";
        Top2_star();
         cout<<"\t\tModel Name  :- Mercedes-Benz-Maybach\n";
        cout<<"\t\tEngine      :- 3982 to 5980 cc\n";
        cout<<"\t\tHorse Power :-300-617hp\n";
        cout<<"\t\tTop Speed   :- 250 kmph\n";
        cout<<"\t\t ... 0-60 mph accelration in just 4.5 to 4.8 second....\n";
        cout<<"\t\tPrice       :-1500 per/day ( Fuel Excluded..)\n\n";
         char main;
        cout<<"\t\tDo you want to add this car pre 'y' for yes 'n' for No :-";
        cin>>x;
        if (x=='y'||x=='Y')
        {
            cout<<"\t\tEnter the number of car you want to rent :- ";
            cin>>number;
            cout<<"\n\n\t\tYou Have succesfully added your car to the cart...\n";  
        } 
        else if (x=='n'||x=='N')
        {
            cout<<"Press M to go to car list  ";
            cin>>main;
            if (main=='m'|main=='M')
            {
               luxary_car();
            }          
        }          
        Botom_star();
        cout<<"\n\n\t\tYour Bill is Being Genrated...\n";
         loading();
         system("cls");
         genrate_bill(price, number,car_type,car_name);
       }
        break;
        case 3:
        {
             int price=1000;
        int number;
        string car_type="Luxary-Car" , car_name ="Audi a4";
        char x,more;
        cout<<"\n\tYou are one step closer to rent your car.........\n";
        Top1_star();
        cout<<"\t*\t\t\t  Audi  \t\t\t\t*\n";
        Top2_star();
         cout<<"\t\tModel Name  :- Audi-A4\n";
        cout<<"\t\tEngine      :- 1984 cc\n";
        cout<<"\t\tHorse Power :-300-617hp\n";
        cout<<"\t\tTop Speed   :- 241 kmph\n";
        cout<<"\t\t ... 0-60 mph accelration in just 7.3 second....\n";
        cout<<"\t\tPrice       :-1500 per/day ( Fuel Excluded..)\n\n";
         char main;
        cout<<"\t\tDo you want to add this car pre 'y' for yes 'n' for No :-";
        cin>>x;
        if (x=='y'||x=='Y')
        {
            cout<<"\t\tEnter the number of car you want to rent :- ";
            cin>>number;
            cout<<"\n\n\t\tYou Have succesfully added your car to the cart...\n";  
        } 
        else if (x=='n'||x=='N')
        {
            cout<<"Press M to go to car list  ";
            cin>>main;
            if (main=='m'|main=='M')
            {
               luxary_car();
            }          
        }          
        Botom_star();
        cout<<"\n\n\t\tYour Bill is Being Genrated...\n";
         loading();
         system("cls");
         genrate_bill(price, number,car_type,car_name);
       }
        break ;
        case 4:
        {
                loading();
                 system("cls");
                 Header_car();
                 cout<<"\n\n";
                 Top1_star();
                 cout<<"\t*\t\t\t G.T MUSTUNG \t\t\t\t*\n";
                  Top2_star();
                 cout<<"\n\n\t\t\t..........COMING SOON............";
                 cout<<"\n\n\t\t\t.....WE ARE WORKING ON THIS......\n";
                 Botom_star();
                 sleep(3);
                 system("cls");
                 Car_type();
        }
        break ;   
     default:
        break;
     }
}
/* ----------------------------------------------------
------------ List Of cars ----------------------- -------
-------------------------------------------------------*/
void Car_type()
{
    int car;
    cout<<"    * * * * *             -----CAR Type -------            * * * * * *\n ";
cout<<"   *                                                                * \n  ";
cout<<"  *                                                                * \n  ";
cout<<"  *     1. Clasic Car    ( Press 1. For Clasic  CAR )              * \n    ";
cout<<"*     2. Medium Car    ( Press 2 For Medium CAR )                *  \n";
cout<<"          3. Luxury Car    ( Press 3 For Luxary CAR)       \n  ";
cout<<"             \n   ";
cout<<"              \n    ";
cout<<"*                                                               *  \n  ";
cout<<"  *                                                               *  \n  ";
cout<<"  *                                                               *  \n  ";
cout<<"  * * * * *                                           *  *  *  *  *   \n\n\n  ";
cout<<"\tEnter you choice:- ";
cin>>car;
switch (car)
{
case 1:
    clasic_car();
    break;
    case 2:
    medium_car();
    break;
    case 3:
    luxary_car();
    break;
default:
cout<<"\t\tError ! you have entered wrong choice \n\n\t\tTry again ";
 Car_type();
    break;
}
}
/* ----------------------------------------------------
------------ Function for the header of menu -------
-------------------------------------------------------*/
void Header_car()
{
 cout<<"\n\n";
cout<<"    *****   *****   *      *  *******       *****    *****   *       *   *****   ******    ******   \n";
cout<<"   *     *  *    *  * *    *     *         *        *     *  *       *  *     *  *     *      *      \n   " ;
cout<<"* *** *  * **    *   *  *     *          *****   * *** *  *   *   *  * *** *  * ** *       *     \n  ";
cout<<" *     *  *       *    * *     *               *  *     *  * *   * *  *     *  *  *         *      \n ";
cout<<"  *     *  *       *      *  *******      *****    *     *  *       *  *     *  *   *     *******   \n\n ";
cout<<"\t\t\t\t\t\t\t\t\t APNI SAWARI KHUD DECIDE KARO....\n\n";      
cout<< "    _____ \t\t\t\t\t\t\t\t     _____      " <<endl;
cout << " __/__|__\\___ \t\t\t\t\t\t \t\t ___/__|__\\__   " <<endl;
cout << "|_[_____]____}\t\t\t\t\t\t \t\t{__[_____]___|   " <<endl;
cout<<" 0      0 \t\t\t\t\t\t \t\t    0      0       \n"; 
    cout<<"..............................................................................................\n\n";   
}
void Header2_car(){
cout<<"    * * * * *        -----CAR RENTAL SYSTEM-------      *  * * * * *\n ";
cout<<"   *                                                                * \n  ";
cout<<"  *                                                                * \n  ";
cout<<"  *     1. Renting Car        ( Press 1. Tor RENTING A CAR )       * \n    ";
cout<<"*     2. View Rental Car    ( Press 2  To VIEW RENTAL CAR )      *  \n";
cout<<"          3. Remove Rental Car  ( Press 3 To REMOVE RENTAL CAR)       \n  ";
cout<<"        4. Search Rental Car  ( Press 4 To SEARCH RENTAL CAR )      \n   ";
cout<<"       5. Edit Rental Car    ( Press 5 To EDIT RENTAL CAR )        \n    ";
cout<<"*                                                               *  \n  ";
cout<<"  *                                                               *  \n  ";
cout<<"  *                                                               *  \n  ";
cout<<"  * * * * *                                           *  *  *  *  *   \n\n\n  ";
int choice;
cout<<"\t\t Enter your Choice :- ";
cin>> choice ;
sleep(1);
system("cls");
switch (choice)
{
  case 1:
  {      
       Header_car();
      Car_type();
      //clasic_car();
  }
  break;
  case 2:
  {
   view_rental_car();
  }
  break;
  case 3:
  {
    cout<<"..........Wait for a while ..........\n";
    cout<<"..........We will assist uuu ..........\n";
    Header2_car();

  }
  case 4:
  {
     search_rental_car() ;
  }
  break;
  case 5:
  {
    cout<<"..........Wait for a while ..........\n";
    cout<<"..........We will assist uuu ..........\n";
    Header2_car();
  }
  break;
  default:
  cout<<"ERROR ! Enter the option  again\n";
  sleep(5);
  system("cls");
  Header_car();
}
}
/* ----------------------------------------------------
------------ Function for movement in car -------
-------------------------------------------------------
*/
void main_menu_car ()
{ 
   for (int i = 0; i < 80; i++) 
    {
         
cout<<"    *****   *****   *      *  *******     *****    *****   *       *   *****   ******    ******   \n";
cout<<"   *     *  *    *  * *    *     *       *        *     *  *       *  *     *  *     *      *      \n   " ;
cout<<"* *** *  * **    *   *  *     *        *****   * *** *  *   *   *  * *** *  * ** *       *     \n  ";
cout<<" *     *  *       *    * *     *             *  *     *  * *   * *  *     *  *  *         *      \n ";
cout<<"  *     *  *       *      *  *******    *****    *     *  *       *  *     *  *   *     *******   \n ";
       car(i);
        Sleep(100);
     //  cout<<"_____________________________________________________________________________.";
       system("cls"); // clear console
   }   
    Header_car();
     Header2_car();   
}
/* ----------------------------------------------------
------------ Functionof LOADING --------------------
-------------------------------------------------------
*/
void loading()
{
cout<<"\n\n\n";
            cout<<"\t\t\tLoading..........\n ";
            char x=219;
          for (int i = 0; i < 25; i++)
               {
                Sleep(100);
                cout<<x; 
                }
}
/* ----------------------------------------------------
------------ Function move the CAR--------------------
-------------------------------------------------------
*/
void car(int pos) {
   for (int i = 0; i < pos; i++) {
       cout << " ";
   }
   cout << "     _____     " << endl;

   for (int i = 0; i < pos; i++) {
       cout << " ";
   }
   cout << "  ___/__|__\\__ " << endl;

   for (int i = 0; i < pos; i++) {
       cout << " ";
   }
   cout << " |__[_____]___}" << endl;

   for (int i = 0; i < pos; i++) {
       cout << " ";
   }
   cout << "   0      0     " <<endl;
}
/* --------------------------------------------------
------------ class for registration and login--------
-------------------------------------------------------
*/
class first_step
{
public:
    void first_input()
    {
        int input;
        cout<<"Enter the inputs from STEP-1 :-";
        cin >> input;

        switch (input)
        {
        case 1:
        {
            login_u();
        }
        break;
        case 2:
        {
          registration();
        }
        break;
        case 3:
        {
            forgot_password ();
        }
        break;
        case 4:
        cout<<"\t\t Thank you ! \n\n ";
        break;

        default :
        {
            system("cls");
            cout<<"You have entered wrong input plz try again";
            main();
        }          
        }
    }
    /*------------------------------------
     ------- Function to login -----------
     -------------------------------------
    */
    void login_u()
    {
        int count;
        string userid , password , id ,pass;
        cout<<"Enter the username :-";
        cin>>userid ;
        cout<<"Enter the password :-";
        cin>> password;
        ifstream input("records.txt" );

        while (input>>id>>pass)
        {
            if (id==userid  && pass ==password )
            {
                count =1;
                system("cls");               
            }
        }
        input.close();
        if (count==1)
        {
            cout<<"\n\n";
            cout<<"\t.................................................\n";
            cout<<"\t*                                        \t*\n";
            cout<<"\t*\t"<<userid<<"\t\t\t\t\t*\n";
            cout<<"\t*\tYour logging is succesfull  \t\t*\n ";
            cout<<"\t*\tThanks For logging in !    \t\t*\n";
             cout<<"\t*                                        \t*\n";
            cout<<"\t*...............................................*\n\n";
            cout<<"\n\n\n";
            cout<<"\t\t\tLoading..........\n ";
            char x=219;
          for (int i = 0; i < 25; i++)
               {
                Sleep(100);
                cout<<x; 
                }
           
             system("cls");
                
         main_menu_car ();

        }
        else{
            cout<<"\n\tLogging Error ! \n \t Plz check your user name \n";
            cout<<"\tLoading........\n\n\t";
            char x=219;
            for (int i = 0; i < 25; i++)
               {
                Sleep(100);
                cout<<x; 
                }
           
             system("cls");
                
            main();
        
        }       
    }
    /*--------------------------------------------
     ------- Function For registration -----------
     ---------------------------------------------
    */

    void registration()
    {
        string reg_user , reg_pass;
        system("cls");
        cout<<"\t\to...........................................o\n";
        cout<<"\t\t|   Enter the username :-";
        cin>>reg_user;
        cout<<"\t\t|   Enter the password :-";
        cin>> reg_pass;

        ofstream f1("records.txt",ios::app);
        f1<<reg_user<<" "<<reg_pass<<endl;
         cout<<"\t\t|  Registration succesfull\n";
          cout<<"\t\to...........................................o\n";
       cout<<"\n\n\n";
         cout<<"\t\t\tLoading ";
          char x=219;
          for (int i = 0; i < 25; i++)
          {
             Sleep(100);
           cout<<x; 
        
          }
          sleep(1);

        system("cls");
       
        main();
    }
    /*--------------------------------------------
     ------- Function to forget password ---------
     ---------------------------------------------
    */

    void forgot_password()
    {
        int option;
        system ("cls");
        cout<<"\t\tYou forgot your password ......?\n \t\t\tNO worry We are here to help you\n\n";
        cout<<"1.press 1 to search your username( By using your user id) \n";
        cout<<"2. Press 2 for main menu\n\n";
        cin>>option;
        switch(option)
        {
            case 1:
            {
                int count=0;
                string f_userId, f_pas,sId,spass;
                cout<<"Enter the user-name which you remebered :- ";
                cin>>f_userId;

                ifstream f2("records.txt");
                while (f2>>sId>>spass)
                {
                    if (sId==f_userId)
                    {
                        count =1;
                    }                   
                }
                f2.close();
                if (count==1)
                {
                   cout<<"We have found your user-Id";
                   cout<<"Your Password is :-"<<spass;
                   sleep(5);
                   system("cls");
                   main();
                }
                else
                {
                    cout<<"YOu have Enterd wrong user id....\n \t Kindly check it \n ";
                    cout<<"---------OR----------\n";
                    cout<<"``````````Do Registration```````";
                    sleep(5);
                    system("cls");
                    main();
                }
            }
            break;
            case 2:
            {  
                system("cls");
                main ();
            }
            break;
            default:
            cout<<"Wrong choice plz try again";
            forgot_password();
        }
    }
};
/* -----------------------------------------------------
 ---------- class to display the home page--------------
 -------------------------------------------------------
*/
class display
{
public:
    void main_display()
    {
        cout << "\n\n\to-----------------------------------------------o" << endl;
        cout << "\t|"<< "\t\t"<< "CAR RENTAL SYSTEM"<< "\t\t|" << endl; 
        cout<< "\t|\t\t\t\t     _____      |" <<endl;
        cout << "\t|\t\t \t\t ___/__|__\\__   |" <<endl;
        cout << "\t|\t\t \t\t{__[_____]___}  | " <<endl;
        cout<<"\t|\t\t \t\t  0      0      | \n";
        cout<< "\t|\t\t\t Designed by Rebooterss.|" <<endl;
        cout << "\to-----------------------------------------------o" << endl;
        cout << "\t\t\t\tWelcome to APNI SAWARI " << endl;
        cout << "\t\t\t \tApni sawari khud decide karo......." << endl << endl;
        cout << "---------------------------------------------------------------------------" << endl;
        cout << "---------------------------------------------------------------------------" << endl;
        cout << "Instructions ...............\n" << endl;
        cout<<"STEP-1\n-------------------------------------------------------------------\n";
        cout<<"| login or create an account\t\t\t\t\t  |\n";
        cout <<"| 1. login \t  ( Press 1 for log-in)  \t\t\t  |" << endl;
        cout <<"| 2. Registration    ( Press 2 for registration)\t\t  |" << endl;
        cout<<"| 3. Forget password (Press 3 to reset your password)\t\t  |"<<endl;
        cout<<"| 4. Exit \t\t ( Press 4 for exit )\t\t\t  |\n";
        cout<<"-------------------------------------------------------------------\n\n";
        cout<<"STEP-2 \n LOG-IN \n\n";
        cout<<"STEP-3 \n select your car choice and add to the cart \n\n ";
        cout<<"STEP-4 \n Genrate your reciept\n \n";
        cout<<"--------------------------------------------------------------------------- \n";
        cout<<"`````````WELCOME AGAIN``````````````\n\n";
    }
};
 /*--------------------------------------------
   ------------Main FUnction ------------------
   ---------------------------------------------
    */
int main()
{
    display  a1 ;  
    a1.main_display()
    ;
     first_step a2;
    a2.first_input ();


    




    
   /* sleep(10);
    system("cls"); 
    	system("PAUSE");
	system ("CLS");
	fileReader("thanks.txt");
}
    
    */


}


