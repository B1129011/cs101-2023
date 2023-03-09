#include <stdio.h>
#include <string.h>

typedef struct employee {
    int em_id;
    char em_name[10];
    int em_age;
    char em_phone[12];
    float em_salary;

} employee_t;

void employee_info(employee_t my_emp) {
    printf("Employee ID: %d\n", my_emp.em_id);
    printf("Employee Name: %s\n", my_emp.em_name);
    printf("Employee Age: %d\n", my_emp.em_age);
    printf("Employee Phone: %s\n", my_emp.em_phone);
    printf("Employee Salary: %.2f\n", my_emp.em_salary);
    
}

int main() {
    employee_t employee_1 = {88, "IU Lee", 18, "0937123456", 1000.30};
    printf("Size of employee_t: %ld\n\n", sizeof(employee_t));
    employee_info(employee_1);
    return 0;
} 
