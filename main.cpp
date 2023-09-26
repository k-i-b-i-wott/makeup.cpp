 #include <iostream>
using namespace std;
class items{
protected:
    int unique_code;
    int unique_code2;
    string  name;
    int price;
    float stock;
    float tax;
    float tax1;
    int item;
    double total_cost;
public:
    virtual float calculate_tax()=0;
    virtual  void purchase_item()=0;
    virtual  void  register_item()=0;
    virtual  void  sell_item()=0;
    virtual void  output()=0;
};
class consumer_goods:public items{
public:
    void register_item(){
            cout << "Enter the unique code of the consumer good\n";
            cin >> unique_code;
    cout<<"Enter the name of the consumer good\n";
    cin>>name;
    cout<<"Enter the initial amount of the stoke for the consumer good\n";
    cin>>stock;
    cout<<"Enter the amount of tax charged\n";
    cin>>tax;
    cout<<"Enter the price of the item purchased"<<endl;
    cin>>price;

    }
    void purchase_item(){
cout<<"Enter the amount of purchase items\n";
cin>>item;
        total_cost=price*item;
        cout<<"The total cost is :"<<total_cost<<endl;

stock=stock+item;
cout<<"stock"<<stock<<"\n";
    }
    void sell_item(){
        cout<<"Enter the amount of item sold\n";
        cin>>item;
        total_cost=price*item;
        cout<<"The total cost is:"<<total_cost<<endl;
        stock=stock-item;
cout<<"stock="<<stock<<"\n";
    }
    float calculate_tax(){
//tax=tax*price;

//cout<<"The tax of one item is="<<tax<<"\n";
tax1=tax*total_cost;
cout<<"The total tax is ::"<<tax1<<endl;
return tax1;
    }
    void output(){
cout<<"stock :"<<stock<<"\n";
cout<<"Enter the unique code to view the details\n";
cin>>unique_code2;
if(unique_code==unique_code2){
    cout<<"name="<<name<<"\n";
}
else{
    cout<<"unique code not found\n";
}

    }
};
class books:public items{
private:
    string author;
    int edition;
    int publisher_year;
 public:
    void register_item(){
        cout<<"Enter the unique code of the book\n";
        cin>>unique_code;
        cout<<"Enter the name of the book\n";
        cin>>name;
        cout<<"Enter the price"<<endl;
        cin>>price;


        cout<<"Enter the initial amount of the stoke for the books\n";
        cin>>stock;
        cout<<"Enter the name of the author\n";
        cin>>author;
        cout<<"Enter the edition of the book\n";
        cin>>edition;
        cout<<"Enter the year of publish\n";
        cin>>publisher_year;
        cout<<"Enter the amount of tax charged\n";
        cin>>tax;
    }
    void purchase_item(){
        cout<<"Enter the amount of purchase items\n";
        cin>>item;
        total_cost=item*price;
        cout<<"The total cost is ::"<<total_cost<<endl;
        stock=stock+item;
        cout<<"stock="<<stock<<"\n";
    }
    void sell_item(){
        cout<<"Enter the amount of item sold\n";
        cin>>item;
        total_cost=item*price;
        cout<<"The total cost is ::"<<total_cost<<endl;
        stock=stock-item;
        cout<<"stock="<<stock<<"\n";
    }
    float calculate_tax(){
       //tax=tax*price;
       // cout<<"The tax for one item ="<<tax<<"\n";
        tax1=total_cost*tax;
        cout<<"The total tax is:"<<tax1<<endl;
        return tax;
    }
    void output(){
        cout<<"stock :"<<stock<<"\n";
        cout<<"Enter the unique code to view the details\n";
        cin>>unique_code2;
        if(unique_code==unique_code2){
            cout<<"name="<<name<<"\n";
            cout<<"author="<<author<<"\n";
            cout<<"edition="<<edition<<"\n";
            cout<<"year of publish="<<publisher_year<<"\n";

        }
        else{
            cout<<"unique code not found\n";
        }
    }
};

class electronics:public items{
private:
    float discount;
   float discount_rate;
   int guaranteed_time;
    int government_permit_number;
public:
    void register_item() {
        cout << "Enter the unique code of the electronic\n";
        cin >> unique_code;
        cout << "Enter the name of the electronic\n";
        cin >> name;
        cout<<"Enter the price";
        cin>>price;
        cout << "Enter the initial amount of the stoke for the electronic\n";
        cin >> stock;
        cout << "Enter the discount rate\n";
        cin >> discount_rate;
        cout << "Enter the guranteed time\n";
        cin >> guaranteed_time;
        cout<<"Enter the government permit number\n";
        cin>>government_permit_number;
        cout<<"Enter the amount of tax charged\n";
        cin>>tax;
    }

    void purchase_item(){
        cout<<"Enter the amount of purchase items\n";
        cin>>item;
        total_cost=price*item;
        cout<<"The total cost is:"<<total_cost<<endl;
        stock=stock+item;
        cout<<"stock="<<stock<<"\n";
    }
    float calculate_discount(){
        discount=(discount_rate)*item;
        cout<<"discount="<<discount<<"\n";
    }
    void sell_item(){
        cout<<"Enter the amount of item sold\n";
        cin>>item;
        total_cost=price*item;
        cout<<"The total cost is:"<<total_cost<<endl;
        stock=stock-item;
        cout<<"stock="<<stock<<"\n";
    }
    float calculate_tax(){
       // tax=tax*price;
      //  cout<<"The tax of one item ="<<tax<<"\n";
        tax1=tax*total_cost;
        cout<<"The total tax is"<<tax1<<endl;
        return  tax;
    }
    void output(){
        cout<<"stock :"<<stock<<"\n";
        cout<<"Enter the unique code to view the details\n";
        cin>>unique_code2;
        if(unique_code==unique_code2){
            cout<<"name="<<name<<"\n";
            cout<<"guaranteed time="<<guaranteed_time<<"\n";
            cout<<"government permit number="<<government_permit_number<<"\n";
        }
        else{
            cout<<"unique code not found\n";
        }
    }
};
int main() {
consumer_goods Consumer_good;
books Books;
electronics Electronics;
int choice;
int choice1;
bool exit_main=false,exit_category=false;
while(!exit_main){
    cout<<"Enter the object to purchase\n";
    cout<<"1.Consumer good\n2.Books\n3.Electronics\n4.exit\n";
    cin>>choice1;
    switch (choice1) {
        case 1:
            while(!exit_category) {
                cout << "Enter your choice\n";
                cout
                        << "1.register consumer goods\n2.purchase consumer goods\n3.sell consumer goods\n4.calculate tax of consumer goods\n5.output consumer goods details\n6.exit\n";
                cin >> choice;
                switch (choice) {
                    case 1:
                        Consumer_good.register_item();
                        break;
                    case 2:
                        Consumer_good.purchase_item();
                        break;
                    case 3:
                        Consumer_good.sell_item();
                        break;
                    case 4:
                        Consumer_good.calculate_tax();
                        break;
                    case 5:
                        Consumer_good.output();
                        break;
                    case 6:
                        exit_category = true;
                        break;
                    default:
                        cout << "invalid\n";
                }
            }
            exit_category= false;
            break;
        case 2:
            while(!exit_category){
                cout << "Enter your choice\n";
                cout
                        << "1. Register book\n2.Purchase book\n3.Sell book\n4.calculate tax for book\n5.output book details\n6.exit\n";
                cin >> choice;
                switch (choice) {
                    case 1:
                        Books.register_item();
                        break;
                    case 2:
                        Books.purchase_item();
                        break;
                    case 3:
                        Books.sell_item();
                        break;
                    case 4:
                        Books.calculate_tax();
                        break;
                    case 5:
                        Books.output();
                        break;
                    case 6:
                        exit_category = true;
                        break;
                     default:
                        cout << "invalid\n";

                }
            }
            exit_category= false;
            break;
        case 3:
            while(!exit_category){
                cout << "Enter your choice\n";
                cout
                        << "1.register electronic\n2.purchase electronic\n3.calculate discount\n4.sell electronic\n5.calculate tax\n6.output electronic details\n7.exit\n";
                cin >> choice;
                switch (choice) {

                    case 1:
                        Electronics.register_item();
                        break;
                    case 2:
                        Electronics.purchase_item();
                        break;
                    case 3:
                        Electronics.calculate_discount();
                        break;
                    case 4:
                        Electronics.sell_item();
                        break;
                    case 5:
                        Electronics.calculate_tax();
                        break;
                    case 6:
                        Electronics.output();
                        break;
                    case 7:
                        exit_category = true;
                        break;
                    default:
                        cout << "invalid input\n";
                }
            }
            exit_category=false;
            break;
        case 4:
            exit_main=true;
            break;
        default:
            cout<<"invalid input\n";
    }
}

    return 0;
}