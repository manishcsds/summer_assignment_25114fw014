//employee salary management system
#include <iostream>
#include <vector>
using namespace std;
struct Employee {
    string name;
    int empID;
    double salary;
    double bonus;
    double deductions;
};
int main(){
    vector<Employee> employees;
    int choice;
    do{
        cout<<"\nemployee management system\n";
        cout<<"1. add employee salary details\n";
        cout<<"2. view employees salary details\n";
        cout<<"3. search employee salary by empID\n";
        cout<<"4. generate salary report\n";
        cout<<"5. exit\n";
        cout<<"enter your choice: ";
        cin>>choice;
        switch (choice){
            case 1:{
                Employee e;
                cout<<"enter employee name: ";
                cin>>e.name;
                cout<<"enter employee ID: ";
                cin>>e.empID;
                cout<<"enter employee salary: ";
                cin>>e.salary;
                cout<<"enter employee bonus: ";
                cin>>e.bonus;
                cout<<"enter employee deductions: ";
                cin>>e.deductions;
                employees.push_back(e);
            }
            break;
            case 2:{
                cout<<"\nlist of employees salary details\n";
                for(int i=0;i<employees.size();i++){
                    cout<<"employee ID: "<<employees[i].empID<<endl;
                    cout<<"name: "<<employees[i].name<<endl;
                    cout<<"salary: "<<employees[i].salary<<endl;
                    cout<<"bonus: "<<employees[i].bonus<<endl;
                    cout<<"deductions: "<<employees[i].deductions<<endl;
                    cout<<"-----------------------\n";
                }
            }
            break;
            case 3:{
                int empID;
                cout<<"enter employee ID to search: ";
                cin>>empID;
                bool found=false;
                for(int i=0;i<employees.size();i++){
                    if(employees[i].empID==empID){
                        cout<<"employee ID: "<<employees[i].empID<<endl;
                        cout<<"name: "<<employees[i].name<<endl;
                        cout<<"salary: "<<employees[i].salary<<endl;
                        cout<<"bonus: "<<employees[i].bonus<<endl;
                        cout<<"deductions: "<<employees[i].deductions<<endl;
                        cout<<"net salary: "<<employees[i].salary+employees[i].bonus-employees[i].deductions<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"employee not found\n";
                }
            }
            break;  
            case 4:{
                    cout<<"\nSalary Report\n";
                    for(int i=0;i<employees.size();i++){
                        double netSalary=employees[i].salary+employees[i].bonus-employees[i].deductions;
                        cout<<"employee ID: "<<employees[i].empID<<endl;
                        cout<<"name: "<<employees[i].name<<endl;
                        cout<<"net salary: "<<netSalary<<endl;
                        cout<<"-----------------------\n";
                    }
                }
            break;
            case 5:{
                cout<<"exiting the program\n";
            }   
            break;
            default:{
                cout<<"invalid choice\n";
            }
        }
    }while(choice!=5);
}