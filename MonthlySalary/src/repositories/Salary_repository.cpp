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
void SalaryRepository:: get_salary () {  ///breyta

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
