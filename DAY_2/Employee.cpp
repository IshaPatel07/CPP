#include <iostream>
using namespace std;

class Employe
{
	public:
		 int EmpId;
		 string Name;
		 string Email;
		 string Role;
		 string Addres;
		 int Number;
		
		void setEmploye(int employeeid,string name,string role,string email,string add,int num)
		{
			EmpId= employeeid;
			Name = name;
			Role = role;
			Email  = email;
			Addres = add;
			Number = num;
		}
			
void getEmploye()
{
    cout << "Enter emp Id: ";
    cin >> EmpId;

    cout << "Enter name: ";
    cin >> Name;
    
    cout << "Enter role: ";
    cin >> Role;
    
    cout << "Enter email: ";
    cin >> Email;

    cout << "Enter address: ";
    cin >> Addres;

    cout << "Enter number: ";
    cin >> Number;
}

};

int main() {

		Employe a,b,c;
		a.setEmploye(12,"isha","devloper","patelisha@123","udhna",123456678);
		a.getEmploye();

    return 0;
    
    
}

