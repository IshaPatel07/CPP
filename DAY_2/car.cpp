#include <iostream>
using namespace std;

class Car 
{
	public:
		int modelNo;
		string color;
		string modelName;
		string companyName;
		string type;
		bool isEV;
		float price;
		
		void setCar(int no,string col,string mname,string cname,bool isev,string typ,float amt)
		{
			modelNo = no;
			color = col;
			modelName  = mname;
			companyName = cname;
			isEV = isev;
			type = type;
			price = amt;
		}
		
		void getCar()
		{
			cout << endl;
			cout << "Model NO -"<< modelNo << endl;
			cout <<	"Model Name -" << modelName << endl;
			cout << "Company Name -" << companyName << endl;
			cout << "Color -" << color << endl;
			cout << "price -" << price << endl;
			cout << "type -" << type << endl;
			cout << "is EV ? -" << isEV << endl;
		}
};

int main() {
    
    Car a,b,c;
    
    a.setCar(123,"blue","R15","honda","false","bike",150000);
    
    a.getCar();

    return 0;
    
    
}

