#include <iostream>
using namespace std;

class Students 
{
	public:
		 int RoleNo;
		 string Name;
		 string Email;
		 string Addres;
		 int Number;
		
		void setStudent(int roleno,string name,string email,string add,int num)
		{
			RoleNo= roleno;
			Name = name;
			Email  = email;
			Addres = add;
			Number = num;
		}
			
void getStudent()
{
    cout << "Enter role number: ";
    cin >> RoleNo;

    cout << "Enter name: ";
    cin >> Name;

    cout << "Enter email: ";
    cin >> Email;

    cout << "Enter address: ";
    cin >> Addres;

    cout << "Enter number: ";
    cin >> Number;
}

};

int main() {

		Students a,b,c;
//		a.setStudent(12,"isha","patelisha@123","udhna",123456678);
		a.getStudent();

    return 0;
    
    
}

