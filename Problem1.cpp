# include <iostream> 

int main() {
    std::string name = "Kalam Rabbani";
    long grossSalary = 10000000L;
    double taxRate = 0.20;
    int install = 500000;
    int insur = 500000;

    long taxAmount = taxRate * grossSalary;

    long netSalary = grossSalary - taxAmount - install - insur;

    std::cout << "Payslip for Employee" << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Gross Salary: Rp" << grossSalary << std::endl;
    std::cout << "Tax (20%): Rp" << taxAmount << std::endl;
    std::cout << "Installment: Rp" << install << std::endl;
    std::cout << "Insurance: Rp" << insur << std::endl;
    std::cout << "Net Salary: Rp" << netSalary << std::endl;
    
    return 0;
}

