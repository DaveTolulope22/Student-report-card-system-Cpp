#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Person{
protected:
    string id;
    string firstName;
    string lastName;
    int age;
public:
       Person(string id, string firstName,string lastName,int age){

          this-> id = id;
          this-> firstName = firstName;
          this-> lastName = lastName;
          this-> age = age;
       }

   void Setid(){
     cin >> id;
   }
   string Getid(){
     return id;
   }

   void SetfirstName() {
      cin >> firstName;
   }
   string GetfirstName() {
      return firstName;
   }
  void SetlastName() {
      cin >> lastName;
   }
   string GetlastName() {
      return lastName;
   }
   void Setage() {
      cin >> age;
   }
   int  Getage() {
      return age;
   }



    // virtual string showreport() const = 0;

 friend ostream& operator<<(ostream& out,  Person& p){
		return out << "student ID:" << p.Getid() << "  " << "Firstname:" << p.GetfirstName() << "  " << "Lastname:" << p.GetlastName() << "  " << "age:" << p.Getage()<<endl;

	}
};


class Student : public Person{
     private:
    string Year;
public:
  Student(string id, string firstName,string lastName,int age,string Year):Person(id, firstName, lastName, age){
     this -> Year = Year;

  }
  bool checkId() {
  int n = Year.length();
  if(n !=4) return false;

}
   void SetYear() {

     cin >> Year;
  }
   string GetYear(){
      return  Year;
   }

 void SetAll() {
		Setid(); SetfirstName(); SetlastName(); Setage();
		SetYear();
		}
void display() {
		cout << endl;
		cout << "student ID:" << Getid() << "  " << "Firstname:" << GetfirstName() << "  " << "Lastname:" << GetlastName() << "  " << "age:" << Getage() << endl;
		cout << "Year of Progarm:" << GetYear() <<  "\n" << endl;
	}
};


class Professor : public Person{
     private:
    string subject;
public:
    Professor(string id, string firstName,string lastName,int age, string subject):Person(id,firstName,lastName,age){
      this-> subject = subject;

}
    void Setsubject(){
      cin >> subject;
}
     string Getsubject(){

       return subject;
     }

 void SetAll() {
		Setid(); SetfirstName(); SetlastName(); Setage();
		Setsubject();
		}

	 void display() {
		cout << endl;
		cout << "Professor ID:" << Getid() << "  " << "Firstname:" << GetfirstName() << "  " << "Lastname:" << GetlastName() << "  " << "age:" << Getage() << endl;
		cout << "Subject:" << Getsubject() <<  "\n" << endl;
	}
};

class Studentgrades: public Person{
private:
    string grade;
public:

  Studentgrades(string id, string firstName,string lastName,int age,string grade):Person(id,firstName,lastName,age){
     this -> grade = grade;

  }

   void Setgrade(){
      cin >>grade;
}
    string Getgrade(){
      return grade ;
     }

void SetAll() {

		Setid(); SetfirstName(); SetlastName(); Setage();
		Setgrade();
		}

		 void display() {
		cout << endl;
		cout << "Student ID:" << Getid() << "  " << "Firstname:" << GetfirstName() << "  " << "Lastname:" << GetlastName() << "  " << "age:" << Getage() << endl;
		cout << "grade :" << Getgrade () <<  "\n" << endl;
	}

};



int main()
{

     Student s1("ST4549988","Theo","Will",22,"2018");
     Student s2("ST4848444","Dave","Song",25,"2019");
     Student s3("ST6454154","Bob","Bill",20,"2020");
     Professor pf1("PRF789","Greg","Some",45,"Database");
     Professor pf2("PRF456","Mike","Rand",33,"Python");
     Professor pf3("PRF852","Sunday","noon",39,"SQL");
     Studentgrades st1("ST6454154","Bob","Bill",20,"Grade 6");
     Studentgrades st2("ST4848444","Dave","Song",25,"Grade 8");
     Studentgrades st3 ("ST4549988","Theo","Will",22," Grade 10");


    vector<Person*> person;
	person.push_back(&s1);
	person.push_back(&s2);
	person.push_back(&s3);
	person.push_back(&pf1);
	person.push_back(&pf2);
	person.push_back(&pf3);
	person.push_back(&st1);
	person.push_back(&st2);
	person.push_back(&st3);

    while (1){
		cout << "\n press 1 to view report info\n press 2 to update report info\n press 0 to exit: ";
		int choice;
		cin >> choice;
		if (choice == 0) {
			break;
		}
      switch (choice)
		{
		case 1:
			cout << "\nTo view the Student report:\n press 1 for the full table\n press 2 for to view Year of Students\n press 3 Subject professors\n press 4 grades of students\nPress 0 to exit" ;
			int choice1;
			cin >> choice1;
			switch (choice1)
			{
            case 1:

				s1.display(); s2.display();
				s3.display();pf1.display();
				pf2.display();pf3.display();
				st1.display();st2.display();
                st3.display();

				break;

         case 2:

				s1.display(); s2.display(); s3.display();

				break;

        case 3:
				pf1.display(); pf2.display(); pf3.display();
				break;
        case 4:
				st1.display(); st2.display(); st3.display();
				break;
			    default:
				break;
			}
			break;

			case 2:
			cout << "\n To Update information:\n please press 1,2,3 for Students \n please press 4,5,6 for Professors\n please press 7,8,9 for Student grades \n  [to Exit, please press 0]: " ;
			int choice2;
			cin >> choice2;
			switch (choice2)
			{

              	case 1:
				cout << "\nPlease input 1st Student ID, First name, Last name ,age, Year:" << endl;
				s1.SetAll();
				break;

              	case 2:
				cout << "\nPlease input 2nd Student ID, First name, Last name, age, Year:" << endl;
				s2.SetAll();
				break;

              	case 3:
				cout << "\nPlease input 3rd Student ID, First name, Last name , age,  Year:" << endl;
				s3.SetAll();
				break;

              	case 4:
				cout << "\nPlease input 1st Professor ID, First name, Last name , age,  Subject:" << endl;
				pf1.SetAll();
				break;

              	case 5:
				cout << "\nPlease input 2nd Professor ID, First name, Last name , age,  Subject:" << endl;
				pf2.SetAll();
				break;

              	case 6:
				cout << "\nPlease input 3rd Professor ID, First name, Last name , age,  Subject:" << endl;
				pf3.SetAll();
				break;

              	case 7:
				cout << "\nPlease input 1st Student grade , ID , First name, Last name , age,   grade:" << endl;
				st1.SetAll();
				break;

                case 8:
				cout << "\nPlease input 2nd Student grade , ID , First name, Last name , age,  grade:" << endl;
				st2.SetAll();
				break;

                case 9:
				cout << "\nPlease input 3rd Student grade , ID, First name, Last name , age,  grade:" << endl;
				st3.SetAll();
				break;

				default:
				break;

			}

			 default:
				break;
				break;
		}
     }
     return 0;
}




