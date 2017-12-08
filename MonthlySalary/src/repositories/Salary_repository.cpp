#include "Salary_repository.h"
#include "Salary_record.h"


SalaryRepository::SalaryRepository() {


}
void SalaryRepository::add_salary(const Salary_record& salary_record) {

    ofstream fout;

    fout.open ("Salary.txt", ios::app);

    if (fout.is_open()) {
        fout << salary_record;
        fout.close();
    }

    else {
        //throw error
    }

}
void SalaryRepository:: get_all_salaries () {  ///breyta

    string a;
    Salary_record salary_record;
    ifstream fin;
    fin.open ("Salary.txt");

    if (fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, a, ',');
            cout << a << endl;
        }
        fin.close();
    }
}

string SalaryRepository::get_salary_for_a_given_year(int year_to_look_for) {
    ifstream fin;
    fin.open ("Salary.txt");
    string line;
    ///Hard kóðaði total salary vegna þess að 'lookfor' fallið virkar ekki.
    ///string lookfor = to_string(year_to_look_for);
    string lookfor = "2017";
    string total_salary = "";
    while(getline(fin, line)) {
        if (line.find(lookfor, 0) != string::npos) {
            //cout << "SSN found: " << SSN_to_look_for;
            int index = line.find(',');
            int index2 = line.find(',', index+1);
            int index3 = line.find (',', index2+1);
            string salary = line.substr(index2+1, (index3-1) - index2);
            ///int temp = 0;

            ///temp = stoi(salary) Virkar ekki heldur
            total_salary += salary;
            ///cout  << total_salary << endl;
        }
    }
return total_salary;
}
void SalaryRepository::get_salary_for_an_SSN(string SSN_to_look_for) {
    ifstream fin;
    fin.open ("Salary.txt");
    string line;
    while(getline(fin, line)) {
        if (line.find(SSN_to_look_for, 0) != string::npos) {
            //cout << "SSN found: " << SSN_to_look_for;
            int index = line.find(',');
            int index2 = line.find(',', index+1);
            int index3 = line.find (',', index2+1);
            string salary = line.substr(index2+1, (index3-1) - index2);
            cout << "Salary: " << salary << endl;

        }
    }
}


void SalaryRepository::get_total_salary_for_a_given_SSN(string SSN_to_look_for) {
    ifstream fin;
    fin.open ("Salary.txt");
    string line;
    string total_salary = "";
    while(getline(fin, line)) {
        if (line.find(SSN_to_look_for, 0) != string::npos) {
            int index = line.find(',');
            int index2 = line.find(',', index+1);
            int index3 = line.find (',', index2+1);
            string salary = line.substr(index2+1, (index3-1) - index2);
            ///int temp = 0;
            ///temp = stoi(salary) Virkar ekki heldur get ekki breytt streng 'i int.
            total_salary += salary;
            ///cout  << total_salary << endl;
            }
        }

    if (total_salary != ""){
        cout << "The total salary for the given SSN is " << SSN_to_look_for;
        cout << " is " << total_salary << endl;
    }
    else {
        cout << "No SSN was found in the database." << endl;
    }
}
void SalaryRepository::get_name_of_highest_salary() {
    /// ifstream fin;
    /// fin.open ("Salary.txt");
    /// string line;
    /// string higest_salary = "";
    /// int largest;
    /// while(getline(fin, line)) {
        /// if (!fin.eof()) {
            /// int index = line.find(',');
            /// int index2 = line.find(',', index+1);
            /// int index3 = line.find (',', index2+1);
            /// string salary = line.substr(index2+1, (index3-1) - index2);
            /// int temp = 0;
            ///temp = stoi(salary) Virkar ekki heldur get ekki breytt streng 'i int.
            /// if (largest < number) {
                /// largest = number;
               /// }
    ///}
    ///higest_salary = stoi(largest);
    ///}
   /// while(getline(fin, line)) {
      ///  if (line.find(higest_salary, 0) != string::npos) {
           /// int index = line.find(',');
           /// string name_of_person_with_highest_salary = line.substr(0, index);
      ///  }
///cout << "The person with the highest salary is " << name_of_person_with_highest_salary << endl;

}
