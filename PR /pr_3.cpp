#include<iostream>
using namespace std;
 
class vehical
{ 
    int year;
    string manufacturer,model;
public:
    int vehicalID;
    static string totalvehical;

  vehical(){
    this->vehicleID = 0;
    this->year = 0;
    this->manufacturer = "";
    this->model = "";
  }

  void addvehical(){
    cout<<endl;
    cout<< "Enter vehical ID: ";
    cin>>vehicalID;
    cout<< "Enter manufacturer: ";
    cin>>manufacturer;
    cout<< "Enter model: ";
    cin>>model;
    cout<< "Enter year: ";
    cin>>year;
}

    void displayvehical(){

        cout<<endl;
        cout<<"___________________________"<<endl;
        cout<< "Vehical ID: "<<vehicalID<<endl;
        cout<< "Manufacturer: "<<manufacturer<<endl;
        cout<< "Model: "<<model<<endl;
        cout<< "Year: "<<year<<endl;
        cout<<"___________________________"<<endl;
  }
};

class car: public vehical
{
    string fualtype ;
};

class electroniccar: public car{ 
    string batteryCapacity;
};
class SportsCar : public electroniccar{
    string topSpeed;
};

class sedan : public car{};
class SUV : public car{};

class aircraft: public vehical{
    string FlightRange; 
};

class vehicalRegistries{
    vehical vehical[50];
    int currentIndex = 0 ;

    void addvehical(){
        vehical[currentIndex].addvehical();
        currentIndex++;
    }

    void displayvehical(){
        for(int i=0; i<currentIndex; i++){
            vehical[i].displayvehical();
        }
    }

    void searchvehical(){
        int id;
        cout<<"Enter vehical ID to search: ";
        cin>>id;
        for(int i=0; i<currentIndex; i++){
            if(vehical[i].vehicalID == id){
                vehical[i].displayvehical();}
        }
        cout<<"Vehical not found!"<<endl;
    }
}

 int main(){


    vehicalRegistries vr;
    int choice;
    do{
        cout<<"Enter your choice: "<<endl;
        cout<<"1. Add vehical"<<endl;
        cout<<"2. Display vehical"<<endl;
        cout<<"3. Search vehical"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                vr.addvehical();
                break;
            case 2:
                vr.displayvehical();
                break;
            case 3:
                vr.searchvehical();
                break;
            case 4:
                cout<<"Exiting..."<<endl;
                break;  }
    return 0;
 }}