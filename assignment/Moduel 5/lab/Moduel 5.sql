-- Q1
create schema School_db;
create table Students
(
Student_id int not null unique,
Student_name varchar(25) not null,
Age int not null,
Class int not null,
Address varchar(100) not null
);
insert into Students values(1,'Aryan Sharma',16,10,'45. MG Road. Delhi');
insert into Students values(2,'Priya verma',15,9,'23. Park Street. Kolkata');
insert into Students values(3,'Rahul Singh',17,11,'78. JP Nagar. Bengaluru');
insert into Students values(4,'Sneha Iyer',18,12,'12.Anna Salai. Chennai');
insert into Students values(5,'Aditya Patil',14,8,'55. FC Road. Pune');
select *from Students;

-- Q2

select Student_name,age from Students;

select *from Students where age>10;

-- Q3

create table Teachers
(
 Teacher_id int primary key,
 Teacher_name varchar(25) not null,
 Subject varchar(25) not null ,
 Email varchar(50) not null unique
);
alter table students add column Teacher_id int ,add constraint foreign key(Teacher_id) references teachers (teacher_id);

-- Q4

create table courses 
(
course_id int primary key,
course_name varchar(25) not null,
course_credits float not null
);

-- Q5

alter table courses add column course_duration int not null;

alter table courses drop column course_credits;


-- Q6

drop table students;

drop table teachers;


-- Q7
insert into courses values(1,'Full_Stack_Development',12);

insert into courses values(2,'Back_End_Development',6);

insert into courses values(3,'Digital_Marketing',6);

update courses set course_duration=8 where course_id=2;

delete from courses where course_id= 2;

-- Q8

select *from courses;
select * from courses order by course_duration desc;
select *from courses limit  2;

-- Q9
create user user1 identified by 'abc@123' default role admin;
create user user2 identified by 'abc@123' default role admin;

grant select on courses to user1;
revoke select on courses from user1;
grant insert on courses to user2;

-- Q10

insert into courses values(4,'Software_Engineering',12);
insert into courses values(5,'UI_UX_developer',6);
commit;
insert into courses values(6,'python_developer',8);
rollback;
savepoint s1;
update courses set course_name='software_Developer' where course_id=4;
savepoint s2;
update  courses set course_name='Graphic designer' where course_id=5;
rollback to s2;

-- Q 11
CREATE TABLE departments (
    department_id INT PRIMARY KEY,
    department_name VARCHAR(100) NOT NULL
);
CREATE TABLE employees (
    employee_id INT PRIMARY KEY,
    employee_name VARCHAR(50) NOT NULL,
    emplyee_salary INT NOT NULL,
    department_id INT,
    FOREIGN KEY (department_id) REFERENCES departments(department_id)
);

INSERT INTO departments  VALUES(1, 'HR');
INSERT INTO departments  VALUES(2, 'IT');
INSERT INTO departments  VALUES(3, 'Finance');
INSERT INTO departments  VALUES(4, 'Marketing');


INSERT INTO employees VALUES(101, 'Alice',30.000, 1);
INSERT INTO employees VALUES(102, 'Bob',21.000, 2);
INSERT INTO employees VALUES(103, 'Charlie',15.000 ,2);
INSERT INTO employees VALUES(104, 'David',32.000, 3);

select employees.employee_id, employees.employee_name, departments.department_name
from employees
inner join departments on employees.department_id = departments.department_id;

select departments.department_id, departments.department_name, employees.employee_name
from departments
left join employees on departments.department_id = employees.department_id;

-- Q12
SELECT departments.department_name, COUNT(employees.employee_id) AS employee_count
FROM departments
LEFT JOIN employees ON departments.department_id = employees.department_id
GROUP BY departments.department_name;


SELECT departments.department_name, 
       AVG(employees.emplyee_salary) AS avg_salary
FROM departments
LEFT JOIN employees ON departments.department_id = employees.department_id
GROUP BY departments.department_name;

-- Q13
DELIMITER &&
CREATE PROCEDURE GetEmployeesByDepartment(IN dept_id INT)
BEGIN
    SELECT employee_id, employee_name, emplyee_salary, department_id
    FROM employees
    WHERE department_id = dept_id;
END &&
DELIMITER ;

DELIMITER &&

CREATE PROCEDURE GetCourseDetails(IN course_id_input INT)
BEGIN
    SELECT course_id, course_name, course_duration
    FROM courses
    WHERE course_id = course_id_input;
END &&
DELIMITER ;
CALL GetCourseDetails(3);

-- Q14
CREATE VIEW EmployeeDepartmentView AS
SELECT employees.employee_id, 
       employees.employee_name, 
       employees.emplyee_salary, 
       departments.department_name
FROM employees
INNER JOIN departments ON employees.department_id = departments.department_id;

SELECT * FROM EmployeeDepartmentView;

ALTER VIEW EmployeeDepartmentView AS
SELECT employees.employee_id, 
       employees.employee_name, 
       employees.emplyee_salary, 
       departments.department_name
FROM employees
INNER JOIN departments ON employees.department_id = departments.department_id
WHERE employees.emplyee_salary >= 50000;

-- Q15

DELIMITER &&

CREATE TRIGGER New_employee_insert
AFTER INSERT ON employees
FOR EACH ROW
BEGIN
    INSERT INTO employees (employee_id, employee_name, emplyee_salary)
    VALUES (NEW.employee_id, NEW.employee_name,NEW.emplyee_salary, 'Employee Added');
END &&

DELIMITER ;

ALTER TABLE employees ADD COLUMN record time;

DELIMITER &&

CREATE TRIGGER before_employee_update
BEFORE UPDATE ON employees
FOR EACH ROW
BEGIN
    INSERT INTO before_employee_update VALUES (OLD.employee_id,OLD.employee_name,OLD.emplyee_salary,curtime());
END &&

DELIMITER ;

-- Q16
DECLARE
    total_employees NUMBER;
BEGIN
    SELECT COUNT(*) INTO total_employees FROM employees;
    DBMS_OUTPUT.PUT_LINE('Total Number of Employees: ' || total_employees);
END;


DECLARE
    total_sales NUMBER(10,2);  -- Variable to store total sales amount
BEGIN
    SELECT SUM(total_amount) INTO total_sales FROM orders;
    DBMS_OUTPUT.PUT_LINE('Total Sales Amount: ' || total_sales);
END;

-- Q17
DECLARE
    v_employee_id NUMBER := 101; 
    v_department_name VARCHAR2(100);
BEGIN
    
    SELECT department_name 
    INTO v_department_name 
    FROM employees e
    JOIN departments d ON e.department_id = d.department_id
    WHERE e.employee_id = v_employee_id;

    IF v_department_name = 'HR' THEN
        DBMS_OUTPUT.PUT_LINE('Employee ' || v_employee_id || ' works in the HR Department.');
    ELSIF v_department_name = 'IT' THEN
        DBMS_OUTPUT.PUT_LINE('Employee ' || v_employee_id || ' works in the IT Department.');
    ELSIF v_department_name = 'Finance' THEN
        DBMS_OUTPUT.PUT_LINE('Employee ' || v_employee_id || ' works in the Finance Department.');
    ELSE
        DBMS_OUTPUT.PUT_LINE('Employee ' || v_employee_id || ' works in another department: ' || v_department_name);
    END IF;
END;

    END IF;
END;

DECLARE
    CURSOR emp_cursor IS 
        SELECT employee_name FROM employees; -- Cursor to fetch employee names
BEGIN
    FOR emp_rec IN emp_cursor LOOP
        DBMS_OUTPUT.PUT_LINE('Employee Name: ' || emp_rec.employee_name);
    END LOOP;
END;

-- Q18

DECLARE

    CURSOR emp_cursor IS 
        SELECT employee_id, employee_name, department_id, emplyee_salary FROM employees;
    
    
    emp_record emp_cursor%ROWTYPE;
BEGIN

    OPEN emp_cursor;
    
    LOOP
    
        FETCH emp_cursor INTO emp_record;
        
        
        EXIT WHEN emp_cursor%NOTFOUND;
        

        DBMS_OUTPUT.PUT_LINE('Employee ID: ' || emp_record.employee_id ||
                             ', Name: ' || emp_record.employee_name ||
                             ', Department ID: ' || emp_record.department_id ||
                             ', Salary: ' || emp_record.emplyee_salary);
    END LOOP;

    CLOSE emp_cursor;
END;



DECLARE

    CURSOR course_cursor IS 
        SELECT course_id, course_name, course_duration FROM courses;

    course_record course_cursor%ROWTYPE;
BEGIN
    
    OPEN course_cursor;
    
    LOOP
        FETCH course_cursor INTO course_record;
        
        EXIT WHEN course_cursor%NOTFOUND;
        
        DBMS_OUTPUT.PUT_LINE('Course ID: ' || course_record.course_id ||
                             ', Name: ' || course_record.course_name ||
                             ', Duration: ' || course_record.course_duration || ' months');
    END LOOP;
    
    CLOSE course_cursor;
END;

-- Q19
BEGIN
    INSERT INTO courses (course_id, course_name, course_duration)
    VALUES (6, 'Data Structures', 4);

    INSERT INTO courses (course_id, course_name, course_duration)
        VALUES (7, 'PHP Programming', 3);

    SAVEPOINT before_third_insert;

    INSERT INTO courses (course_id, course_name, course_duration) 
    VALUES (8, 'Artificial Intelligence', 6);

    ROLLBACK TO before_third_insert;

    COMMIT;
    
    DBMS_OUTPUT.PUT_LINE('Transaction complete. Third insert rolled back.');
END;

BEGIN
    INSERT INTO courses (course_id, course_name, course_duration) 
    VALUES (9, 'Cloud Computing', 5);

    SAVEPOINT first_commit_point;

    INSERT INTO courses (course_id, course_name, course_duration) 
    VALUES (10, 'Cybersecurity', 4);

    COMMIT;

    INSERT INTO courses (course_id, course_name, course_duration) 
    VALUES (11, 'Blockchain Technology', 6);

    ROLLBACK;

    DBMS_OUTPUT.PUT_LINE('First insert committed, second insert rolled back.');
END;















