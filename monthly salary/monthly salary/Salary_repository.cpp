//
//  Salary_repository.cpp
//  monthly salary
//
//  Created by Oddný Karen Arnardóttir on 05/12/2017.
//  Copyright © 2017 Oddný Karen Arnardóttir. All rights reserved.
//

#include "Salary_repository.hpp"
#include "salary_record.hpp"


SalaryRepository::SalaryRepository() {


}
void SalaryRepository::add_salary(const Salary_record& salary_record) {

    ofstream fout;
    
    fout.open ("/Users/OddnyKaren/Desktop/Salary.txt", ios::app);
    
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
    fin.open ("/Users/OddnyKaren/Desktop/Salary.txt");
    
    if (fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, a, ',');   /////
            cout << a << endl;
        }
    }
    fin.close();
     */
    
    
   /* ifstream fin;
    fin.open("/Users/OddnyKaren/Desktop/Salary.txt");
    
    Salary_record salary_record;
    fin >> salary_record;
    fin.close();
    */
}
