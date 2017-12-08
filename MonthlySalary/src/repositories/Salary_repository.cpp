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
    Salary_record salary_record;  ///////
    ifstream fin;
    fin.open ("Salary.txt");

    if (fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, a, ',');   /////
            cout << a << endl;
        }

    fin.close();
    }
}
void SalaryRepository::get_salary_for_an_SSN(string SSN_to_look_for){
    ifstream fin;
    fin.open ("Salary.txt");
    string line;
    unsigned int countLine = 0;
    while(getline(fin, line)) {
        countLine++;
        if (line.find(SSN_to_look_for, 0) != string::npos) {
            //cout << "SSN found: " << SSN_to_look_for;
            int index = line.find(',');
            int index2 = line.find(',', index+1);
            cout << " line: " << countLine << "index" << index2 << endl;

    }
}

}

void SalaryRepository::get_salary () {  ///breyta

    /*string a;
    Salary_record salary_record;  ///////
    ifstream fin;
    fin.open ("Salary.txt");

    if (fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, a, ',');   /////
            cout << a << endl;
        }
    }
    fin.close();
     */


   /* ifstream fin;
    fin.open("Salary.txt");

    Salary_record salary_record;
    fin >> salary_record;
    fin.close();
    */
}
