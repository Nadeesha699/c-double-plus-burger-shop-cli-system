#include <iostream>

using namespace std;

class Shop{
public:
   double cal();

   //Topping items

   const char* choose[6];
   string b_size_name;
   int x=0;


private:
   //burger sizes and  costs

    int Burger_sizes;
    double small_credits=3.0;
    double medium_credits=5.50;
    double large_credits=7.25;

    //Toppings and costs
    double cheese_credit=0.80;

    double salad_credit=0.50;
    double bacon_credit=1.0;
    double ketchup_credit=0.30;
    double mayo_credit=0.30;
    double extra_burger_credit=1.50;


    //variables
    int choices;
    double total_price=0.0;
    int Topping_choices;


};

double Shop::cal(){

     //display the burger sizes and costs
    cout<<"..............**********Burger sizes**********..............."<<endl;
    cout<<endl;
    cout<<"small_credits  = 3.0    (press 1)"<<endl;
    cout<<"medium_credits = 5.50   (press 2)"<<endl;
    cout<<"large_credits  = 7.25   (press 3)"<<endl;
    cout<<endl;

    //choose a size
    cout<<">> enter your choice: ";
    cin>>choices;
    cout<<endl;

    //calculate total credits
    switch(choices){
        case 1:
            b_size_name ="Small";
            total_price=total_price+small_credits;

            //display toppings and costs
            cout<<"..............**********Toppings**********..............."<<endl;
            cout<<endl;
            cout<<"cheese          =0.80        (press 1)"<<endl;
            cout<<"salad           =0.50        (press 2)"<<endl;
            cout<<"bacon           =1.0         (press 3)"<<endl;
            cout<<"ketchup         =0.30        (press 4)"<<endl;
            cout<<"mayo            =0.30        (press 5)"<<endl;
            cout<<"extra burger    =1.50        (press 6)"<<endl;
            cout<<endl;
            cout<<"Stop                         (press 7)"<<endl;
            cout<<endl;
            cout<<">> Enter a number your choice in Toppings: ";
            cin>>Topping_choices;
            cout<<endl;
            while(Topping_choices != 7 || Topping_choices<7){
               switch(Topping_choices)
             {
            case 1:
                total_price=total_price+cheese_credit;
                choose[x]="cheese";
                x++;
                break;
            case 2:
                total_price=total_price+salad_credit;
                choose[x]="salad";
                x++;
                break;
            case 3:
                total_price=total_price+bacon_credit;
                choose[x]="bacon";
                x++;
                break;
            case 4:
                total_price=total_price+ketchup_credit;
                choose[x]="ketchup";
                x++;
                break;
            case 5:
                total_price=total_price+mayo_credit;
                choose[x]="mayo";
                x++;
                break;
            case 6:
                total_price=total_price+extra_burger_credit;
                choose[x]="extra burger";
                x++;
                break;
           }
                cout<<">> Enter a number your choice in Toppings: ";
                cin>>Topping_choices;
                cout<<endl;


            }
          break;
         case 2:
            b_size_name ="Medium";
            total_price=total_price+small_credits;

            //display toppings and costs
            cout<<"..............**********Toppings**********..............."<<endl;
            cout<<endl;
            cout<<"cheese          =0.80        (press 1)"<<endl;
            cout<<"salad           =0.50        (press 2)"<<endl;
            cout<<"bacon           =1.0         (press 3)"<<endl;
            cout<<"ketchup         =0.30        (press 4)"<<endl;
            cout<<"mayo            =0.30        (press 5)"<<endl;
            cout<<"extra burger    =1.50        (press 6)"<<endl;
            cout<<endl;
            cout<<"Stop                         (press 7)"<<endl;
            cout<<endl;
            cout<<">> Enter a number your choice in Toppings: ";
            cin>>Topping_choices;
            cout<<endl;
            while(Topping_choices != 7 || Topping_choices<7){
               switch(Topping_choices)
             {
            case 1:
                total_price=total_price+cheese_credit;
                choose[x]="cheese";
                x++;
                break;
            case 2:
                total_price=total_price+salad_credit;
                choose[x]="salad";
                x++;
                break;
            case 3:
                total_price=total_price+bacon_credit;
                choose[x]="bacon";
                x++;
                break;
            case 4:
                total_price=total_price+ketchup_credit;
                choose[x]="ketchup";
                x++;
                break;
            case 5:
                total_price=total_price+mayo_credit;
                choose[x]="mayo";
                x++;
                break;
            case 6:
                total_price=total_price+extra_burger_credit;
                choose[x]="extra burger";
                x++;
                break;
           }
                cout<<">> Enter a number your choice in Toppings: ";
                cin>>Topping_choices;
                cout<<endl;


            }
            break;
       case 3:
            b_size_name ="Large";
            total_price=total_price+small_credits;

            //display toppings and costs
            cout<<"..............**********Toppings**********..............."<<endl;
            cout<<endl;
            cout<<"cheese          =0.80        (press 1)"<<endl;
            cout<<"salad           =0.50        (press 2)"<<endl;
            cout<<"bacon           =1.0         (press 3)"<<endl;
            cout<<"ketchup         =0.30        (press 4)"<<endl;
            cout<<"mayo            =0.30        (press 5)"<<endl;
            cout<<"extra burger    =1.50        (press 6)"<<endl;
            cout<<endl;
            cout<<"Stop                         (press 7)"<<endl;
            cout<<endl;
            cout<<">> Enter a number your choice in Toppings: ";
            cin>>Topping_choices;
            cout<<endl;
            while(Topping_choices != 7 || Topping_choices<7){
               switch(Topping_choices)
             {
            case 1:
                total_price=total_price+cheese_credit;
                choose[x]="cheese";
                x++;
                break;
            case 2:
                total_price=total_price+salad_credit;
                choose[x]="salad";
                x++;
                break;
            case 3:
                total_price=total_price+bacon_credit;
                choose[x]="bacon";
                x++;
                break;
            case 4:
                total_price=total_price+ketchup_credit;
                choose[x]="ketchup";
                x++;
                break;
            case 5:
                total_price=total_price+mayo_credit;
                choose[x]="mayo";
                x++;
                break;
            case 6:
                total_price=total_price+extra_burger_credit;
                choose[x]="extra burger";
                x++;
                break;
           }
                cout<<">> Enter a number your choice in Toppings: ";
                cin>>Topping_choices;
                cout<<endl;


            }
            break;

}
return total_price;
}



int main()
{

    Shop obj;
    cout<<obj.cal()<<" credits are your total cost" << endl;
    cout<<"Adding Topping items : "<< endl;
    int s=0;
    while(s<obj.x){
        cout<<"  "<<obj.choose[s] << endl;
        s++;
    }
    cout<<"Burger size : " << obj.b_size_name;

}
