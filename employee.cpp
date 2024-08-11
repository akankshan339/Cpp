// employee have 4 attributes ,initilize them at the time of obj creation
// with setCompName and getCompName as static
#include <iostream>
#include <string>
using namespace std;
class Employee
{
    int id, sal;
    string name, cname;

public:
    // Default constructor
    Employee()
    {
        id = 0;
        sal = 0;
        name = "";
        cname = "";
    }

    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return this->id;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void setSal(int sal)
    {
        this->sal = sal;
    }
    int getSal()
    {
        return this->sal;
    }
    void setComp_Name(string cname)
    {
        this->cname = cname;
    }
    string getComp_Name()
    {
        return this->cname;
    }
};

int main()
{
    Employee ob;
    int id, sal;
    string name, cname;
    cout << "Enter Id\n";
    cin >> id;
    cout << "Enter salary\n";
    cin >> sal;
    cout << "Enter name\n";
    cin >> name;
    cout << "Enter company name\n";
    cin >> cname;
    ob.setId(id);
    ob.setName(name);
    ob.setSal(sal);
    ob.setComp_Name(cname);
    cout << "Employee details are:\n";
    cout << "ID : " << ob.getId() << endl;
    cout << "SALARY : " << ob.getSal() << endl;
    cout << "EMPLOYEE NAME : " << ob.getName() << endl;
    cout << "COMPANY NAME : " << ob.getComp_Name() << endl;
    return 0;
}
/*
#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    int sal;
    string name;
    string cname;

public:
    // Default constructor
    Employee() {
        id = 0;
        sal = 0;
        name = "";
        cname = "";
    }

    // Setter methods
    void setId(int id) {
        this->id = id;
    }

    void setSal(int sal) {
        this->sal = sal;
    }

    void setName(string name) {
        this->name = name;
    }

    void setCompany_Name(string cname) {
        this->cname = cname;
    }

    // Getter methods
    int getId() {
        return id;
    }

    int getSal() {
        return sal;
    }

    string getName() {
        return name;
    }

    string getComp_Name() {
        return cname;
    }
};

int main() {
    Employee ob;

    int id, sal;
    string name, cname;

    cout << "Enter Id: ";
    cin >> id;
    ob.setId(id);

    cout << "Enter Salary: ";
    cin >> sal;
    ob.setSal(sal);

    cout << "Enter name: ";
    cin >> name;
    ob.setName(name);

    cout << "Enter Company name: ";
    cin >> cname;
    ob.setCompany_Name(cname);

    // Accessing the attributes using getter methods
    cout << "Employee Details:" << endl;
    cout << "ID: " << ob.getId() << endl;
    cout << "Salary: " << ob.getSal() << endl;
    cout << "Name: " << ob.getName() << endl;
    cout << "Company Name: " << ob.getComp_Name() << endl;

    return 0;
}
*/
