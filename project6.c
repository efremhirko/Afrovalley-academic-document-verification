 /*
      THIS IS DOCUMENTATION PART FOR THIS PROJECT
      
      department management system in c programming language is which manage students of the department.
      this means first off all teachers must be registered then students registered after this action was done teaching and 
      learning process is going on for several months. then on the end of semester marks of students should 
      be performed by teachers who offer the course. then those teachers show the student result to the students,
      if there is any error occurred while calculating the GRADE of students the system provided good interface to be corrected 
      the error, which means what we call it update or edit marks of student, after this  all of  process, teachers submitted 
      students mark to the department head then, it approved by him/her next it send to registrar office  to be documented.
      this action is iterative till the students graduated from the university. 
      to do all of this here in this project generally we use 15 distinct functions that means one main function which mandatory and 
      ten(14) user defined function. each function performed specific task. the system not allowed repetition of ID, USERNAME AND  PASSWORD for the same kind of users

       LIMITATION OF THE PROJECT  
            > some percent validation
            > course distribution
            > evaluation of teachers
            > no schedule 
		                                
		                                
		                                ======================================================================================================================                                                                                                                                                
	============				BULE HORA UNIVERSITY                                        ============
	============				COLLAGE OF INFORMATICS                                      ============
	============				DEPARTMENT OF SOFTWARE ENGINEERING                          ============
	============				COURSE TITLE: SYSTEM PROGRAMMING                            ============
	============			       COURSE CODE:SwEng-3072                                       ============  
	============				SYSTEM PROGRAMMING PROJECT                                  ============
	============			                                                                    ============
	============				Name                                           ID no        ============
	============				Ephrem  Hirko  Gufi                              Ru1360/12  ============
	============				Gamachu Dube   Bonaya                            Ru1400/12  ============
	============				Alamu   Bayane Lume                              Ru1684/12  ============
	============                                                                                       ============
	============                                                                                       ============
	============						Submitted to: Instructor Selamu Shirtawi.    ============
	============						 Submission date:30/05/2014                  ============   
	===============================================================================================================
*/
 /*link section*/
 #include <stdio.h>//this header file is to take input and give an out put

 #include <stdbool.h>//this header file is to check true or false conditions

 #include <stdlib.h>//i use this header file to use system clear screen built function

 #include <string.h>// is used for compare concatenate and copy string values

 /*definition section*/
 #define A_PLUS 4
 #define A 4
 #define A_MINUS 3.75
 #define B_PLUS 3.5
 #define B 3
 #define B_MINUS 2.75
 #define C_PLUS 2.5
 #define C 2
 #define C_MINUS 1.75
 #define D 1
 #define F 0
 /*global variable declaration section*/
 int numberofstudent = 0;
 int numberofteachers = 0;
 int numberofcourse = 0;
 /*function declaration section*/
 void exit();
 void registerteachers();
 void registernewstudent();
 void veiwregisteredteachers();
 void viewregisteredstudent();
 void viewyourresult();
 void calculateGPA();
 void viewresultstudent();
 void searchstudenntinformation();
 void updatestudentmarks();
 void deletestudent();
 void departementhead();
 void students();
 void teachers();
 /*A variable declaration with structure declaration*/
 struct iformation {
    //all in this are different data type of structure member
    char fname[25], mname[25], lname[25], col[20], dep[20], dept[20], gender[6], courses[15], nationality[15], region[30];
    char class_year[7], zone[30], woreda[30], acedamic_year[10], semester[10], program[10], admission_type[10], profession[30], course[30], username[15], password[15];
    int tel_no, number_of_course, age, ID;
    float marks[6], new_marks[6], sweight[6], ave, GPA, credit[30], totalofcradits, newcredit, add, newsum, sum;
    double points[10], credits[10], semesters[10];
 };
 //declaration two different variable of struct
 struct iformation stud[1000];
 struct iformation instructor[1000];

 int main() {
    int choice;
    //starting with main function
    int result;
    /* char getpassword[25];
     char cheack[25] = "SELAMU"; // This the password we used to enter the system
     printf("\nEnter password to start the system\n");
     printf("\n...");
     scanf("%s", getpassword);
     result = strcmp(getpassword, cheack);/*strcmp to compare string and if result is one it return false and if result is 0 it return true
       while (result != 0) {
       printf("\nEnter 0 to exit");
       printf("\nYour password is invalid,try again\n");
       printf("\n...");
       scanf("%s", getpassword);
       result = strcmp(getpassword, cheack);
       system("clear"); // system clear screen is used to clear the screen for user to use in simple way*/

    do {
       // blows are option page
       printf("\n\t\t\t\t*==========================================================*");
       printf("\n\t\t\t\t*==  WELCOME TO SOFTWARE ENGINEERING DEPARTMENT    ========*");
       printf("\n\t\t\t\t*==========================================================*");
       printf("\n\t\t\t\t*==========================================================*");
       printf("\n\t\t\t\t*===     0: to close the program           ================*");
       printf("\n\t\t\t\t*===     1: to department head interface   ================*");
       printf("\n\t\t\t\t*===     2: to teachers interface          ================*");
       printf("\n\t\t\t\t*===     3: to students interface          ================*");
       printf("\n\t\t\t\t*==========================================================*\n");
       printf("\n\t\t\t\t please enter your choice: ");
       scanf("%d", & choice);
       char idofstudent;
       switch (choice) {
          /*calling functions , each of them perform distinct task*/
       case 0:
          exit(0);
          break;
       case 1:
          system("clear"); //clear screen function it is built in function in stdlib.h hider file library function
          departementhead();
          break;
       case 2:
          system("clear");
          teachers();
          break;
       case 3:
          system("clear");
          students();
          break;
          system("clear");
       default:
          if (choice < 0 || choice > 3) {
             printf("\n\t\t\t\t invalid choice...");
          }
       }
    } while (choice != 0); //exit from the page
    return 0;
 }
 /* definition of function departementhead*/
 void departementhead() {
    system("clear"); //clear screen function it is built in function in stdlib.h hider file library function
    int option;
    printf("\n\t\t\t\t=============================================");
    printf("\n\t\t\t\t==== WELCOME TO BHU REGISTRATION SYSTEM =====");
    printf("\n\t\t\t\t=============================================");
    do {
       /*this bellows are option page for departmenthead officer*/
       printf("\n\t\t\t\t==============select your choice========================");
       printf("\n\t\t\t\t========================================================");
       printf("\n\t\t\t\t  0: to exit from the system       =====================");
       printf("\n\t\t\t\t  1: to register teachers          =====================");
       printf("\n\t\t\t\t  2: to register students          =====================");
       printf("\n\t\t\t\t  3: to view registered teachers   =====================");
       printf("\n\t\t\t\t  4: to view registered students   =====================");
       printf("\n\t\t\t\t  5: to search students            =====================");
       printf("\n\t\t\t\t  6: to delete students            =====================");
       printf("\n\t\t\t\t  7: to go main menu               =====================");
       printf("\n\t\t\t\t========================================================\n");
       printf("\n\t\t\t\t enter your choice: ");
       scanf("%d", & option);
       switch (option) {
          /*calling functions , each of them perform distinct task*/
       case 0:
          exit(0);
       case 1:
          system("clear");
          registerteachers();
          break;
       case 2:
          system("clear");
          registernewstudent();
          break;
       case 3:
          system("clear");
          veiwregisteredteachers();
          break;
       case 4:
          system("clear");
          viewregisteredstudent();
          break;
       case 5:
          system("clear");
          searchstudenntinformation();
          break;
       case 6:
          system("clear");
          deletestudent();
          break;
       case 7:
          system("clear");
          main();
          break;
       default:
          if (option < 0 || option > 7) {
             printf("\n invalid input please try again!");
          }
          break;
       }
    } while (option != 0);
 }
 /*definition of function teachers*/
 void teachers() {
    system("clear");
    int select;
    printf("\n\t\t\t\t==============================================");
    printf("\n\t\t\t\t===== WELCOME TO BHU REGISTRATION SYSTEM =====");
    printf("\n\t\t\t\t==============================================\n");
    printf("\n\t\t\t\t select your choice");
    do {
       printf("\n\t\t\t\t==============================================");
       printf("\n\t\t\t\t enter 0 exit from the system          =======");
       printf("\n\t\t\t\t enter 1 to calculate marks of student =======");
       printf("\n\t\t\t\t enter 2 to search student             =======");
       printf("\n\t\t\t\t enter 3 to edit/update student marks  =======");
       printf("\n\t\t\t\t enter 4 to go back registrar          =======");
       printf("\n\t\t\t\t enter 5 to go back main menu          =======");
       printf("\n\t\t\t\t==============================================\n");
       printf("\n\t\t\t\t enter your choice: ");
       scanf("%d", & select);
       switch (select) {
         /*calling functions , each of them perform distinct task*/
       case 0:
          exit(0);
          break;
       case 1:
          system("clear");
          calculateGPA();
          break;
       case 2:
          system("clear");
          viewresultstudent();
          break;
       case 3:
          system("clear");
          updatestudentmarks();
          break;
       case 4:
          system("clear");
          departementhead();
          break;
       case 5:
          system("clear");
          main();
          break;
          system("clear");
       default:
          if (select < 0 || select > 5) {
             printf("\n invalid input please try again!\n");
          }
          break;

       }
    } while (select != 0);
 }
 /*definition of function students*/
 void students() {
    int mircha;
    printf("\n\t\t\t\t============================================");
    printf("\n\t\t\t\t=== WELCOME TO BHU REGISTRATION SYSTEM =====");
    printf("\n\t\t\t\t============================================\n");
    do {
       printf("\n\t\t\t\t============================================");
       printf("\n\t\t\t\t====== enter 0 exit from the system ========");
       printf("\n\t\t\t\t====== enter 1 to see your result   ========");
       printf("\n\t\t\t\t====== enter 2 to go back main menu ========");
       printf("\n\t\t\t\t============================================\n");
       printf("\n\t\t\t\t enter your choice: ");
       scanf("%d", & mircha);

       switch (mircha) {
          /*calling functions , each of them perform distinct task*/
       case 0:
          exit(0);
          break;
       case 1:
          system("clear");
          viewyourresult();
          break;;
       case 2:
          system("clear");
          main();
          break;
          system("clear");
       default:
          if (mircha < 0 || mircha > 2) {
             printf("\n invalid input please try again!");
          }
          break;
       }
    } while (mircha != 0);
 }
 /*definition of function registerteachers*/
 void registerteachers() {
    system("clear");
    int ch, teach, i;
    int j = 1;
    do {
       printf("\n\t\t\t\t*==============================================*");
       printf("\n\t\t\t\t*=== enter 1: for add teacher info  ===========*");
       printf("\n\t\t\t\t*=== enter 2: back                  ===========*");
       printf("\n\t\t\t\t*==============================================*\n");
       printf("\n\t\t\t\t enter your choice: ");
       scanf("%d", & ch);
       switch (ch) {
       case 1:
          system("clear");
          printf("\n\t enter number of teachers you want to register: ");
          scanf("%d", & teach);
          for (int i = 0; i < teach; i++) {
             printf("\n\t enter information of teacher :%d \n", i + 1);
             printf("\n\t Enter teachers full name: ");
             scanf("%s%s%s", instructor[numberofteachers].fname, instructor[numberofteachers].mname, instructor[numberofteachers].lname);

             printf("\n\t enter id of the teacher: ");
             scanf("%d", & instructor[numberofteachers].ID);
             for (int k = 0; k < numberofteachers; k++) {
                if (instructor[numberofteachers].ID == instructor[k].ID) {
                   int x = 0;
                   while (instructor[numberofteachers].ID == instructor[k].ID) {
                      printf("\n\t This id is used before, create another!\n");
                      scanf("%d", & instructor[numberofteachers].ID);
                      system("clear");
                      x++;
                   }
                }
             }
             printf("\n\t Enter teachers age: ");
             scanf("%d", & instructor[numberofteachers].age);
             printf("\n\t Enter teachers gender: ");
             scanf("%s", instructor[numberofteachers].gender);
             printf("\n\t enter teachers profession: ");
             scanf("%s", instructor[numberofteachers].profession);
             printf("\n\t give username for teachers: "); //this method is just to make unique username for each of teachers
             scanf("%s", instructor[numberofteachers].username);
             printf("\n\t assign the course for the teacher: ");
             scanf("%s", instructor[numberofteachers].courses);
             for (int k = 0; k < numberofteachers; k++) {
                // strcmp(); function help us to compare string value
                int usedun = strcmp(instructor[numberofteachers].username, instructor[k].username);
                if (usedun == 0) {
                   int x = 0;
                   while (usedun == 0) {
                      printf("\n\t the username is already exist enter unique username: ");
                      scanf("%s", instructor[numberofteachers].username);
                      system("clear");
                      usedun = strcmp(instructor[numberofteachers].username, instructor[k].username);
                      system("clear");
                      x++;
                   }
                }
             }
             printf("\n\t give password for teachers: "); //this method is just to make unique password for each of teachers
             scanf("%s", instructor[numberofteachers].password);
             for (int k = 0; k < numberofteachers; k++) {
                // strcmp(); function help us to compare string value
                int usedun = strcmp(instructor[numberofteachers].password, instructor[k].password);
                if (usedun == 0) {
                   int x = 0;
                   while (usedun == 0) {
                      printf("\n\t the password is already exist enter unique password: ");
                      scanf("%s", instructor[numberofteachers].password);
                      system("clear");
                      usedun = strcmp(instructor[numberofteachers].password, instructor[k].password);
                      system("clear");
                      x++;
                   }
                }
             }
             numberofteachers += 1;
             system("clear");
          }
          break;
       case 2:
          departementhead();
          break;
       default:
          if (ch < 0 || ch > 3) {
             printf("\n\t invalid input please try again!\n");
          }
          break;
       }
    } while (ch != 0);
 }
 /*definition of function registernewstudent()*/
 void registernewstudent() {
 /*now we are going to register new student*/
    system("clear");
    int n, userID;
    char str1[50], str2[25];
    printf("\n\t enter number of student you want to register: ");
    scanf("%d", & n);
    for (int i = 0; i < n; i++) {
       printf("\n\t fill information of student %d  \n", i + 1);
       printf("\n\t full name of the student: ");
       scanf("%s %s %s", stud[numberofstudent].fname, stud[numberofstudent].mname, stud[numberofstudent].lname);

       printf("\n\t id of the student: ");
       scanf("%d", & stud[numberofstudent].ID);
       for (int k = 0; k < numberofstudent; k++) {
          if (stud[numberofstudent].ID == stud[k].ID) {
             int x = 0;
             while (stud[numberofstudent].ID == stud[k].ID) {
                printf("\n\t This id is used before create another: ");
                scanf("%d", & stud[numberofstudent].ID);
                system("clear");
                x++;
             }
          }
       }
       //strcmp is used to compare string  return it 0  if true it return 1 if not correct
       printf("\n\t give username for student: "); //this method is just to make unique username for each of registered student
       scanf("%s", stud[numberofstudent].username);
       for (int k = 0; k < numberofstudent; k++) {
          // strcmp(); function help us to compare string value
          int usedun = strcmp(stud[numberofstudent].username, stud[k].username);
          if (usedun == 0) {
             int x = 0;
             while (usedun == 0) {
                printf("\n\t the username is already exist create unique username: ");
                scanf("%s", stud[numberofstudent].username);
                system("clear");
                usedun = strcmp(stud[numberofstudent].username, stud[k].username);
                system("clear");
                x++;
             }
          }
       }
       printf("\n\t give password for student: "); //this method is just to make unique password for each of registered student
       scanf("%s", stud[numberofstudent].password);
       for (int k = 0; k < numberofstudent; k++) {
          int used_p = strcmp(stud[numberofstudent].password, stud[k].password);
          if (used_p == 0) {
             int x = 0;
             while (used_p == 0) {
                printf("\n\t the password is already exist create unique password: ");
                scanf("%s", stud[numberofstudent].password);
                used_p = strcmp(stud[numberofstudent].password, stud[k].password); //comparing two string  value
                x++;
                system("clear");
             }
          }
       }
       printf("\n\t enter collage of the student: ");
       scanf("%s", stud[numberofstudent].col);
       printf("\n\t enter department of the student: ");
       scanf("%s %s", stud[numberofstudent].dep, stud[numberofstudent].dept);
       printf("\n\t enter sex of the student: ");
       scanf("%s", stud[numberofstudent].gender);
       printf("\n\t nationality: ");
       scanf("%s", stud[numberofstudent].nationality);
       printf("\n\t enter your region: ");
       scanf("%s", stud[numberofstudent].region);
       printf("\n\t enter your zone: ");
       scanf("%s", stud[numberofstudent].zone);
       printf("\n\t enter your woreda: ");
       scanf("%s", stud[numberofstudent].woreda);
       printf("\n\t enter your tel_no: ");
       scanf("%d", & stud[numberofstudent].tel_no);
       printf("\n\t enter your academic_year: ");
       scanf("%s", stud[numberofstudent].acedamic_year);
       printf("\n\t enter semester: ");
       scanf("%s", stud[numberofstudent].semester);
       printf("\n\t enter program: ");
       scanf("%s", stud[numberofstudent].program);
       printf("\n\t enter class_year: ");
       scanf("%s", stud[numberofstudent].class_year);
       printf("\n\t enter admission_type: ");
       scanf("%s", stud[numberofstudent].admission_type);
       numberofstudent++; //increment number of student to store information
       system("clear");
    }
    printf("\n\t registration finished successfully\n");
 }
 /*definition of function viewregisteredstudent*/
 void viewregisteredstudent() {
    system("clear");
    if (numberofstudent <= 0) {
       printf("\n not found");
    } else {
       for (int i = 0; i < numberofstudent; i++) {
          printf("\n\t\t==============================================");
          printf("\n\t\t information of student: %d", i + 1);
          printf("\n\t\t==============================================\n");
          printf("\n\t\t Name:          %s %s %s \t\t", stud[i].fname, stud[i].mname, stud[i].lname);
          printf("\n\t\t ID number:     %d", stud[i].ID);
          printf("\n\t\t User Name:      %s", stud[i].username);
          printf("\n\t\t Password:       %s", stud[i].password);
          printf("\n\t\t Nationality:    %s", stud[i].nationality);
          printf("\n\t\t Region:         %s", stud[i].region);
          printf("\n\t\t Zone:           %s", stud[i].zone);
          printf("\n\t\t Woreda:         %s", stud[i].woreda);
          printf("\n\t\t Tel_no:         %d", stud[i].tel_no);
          printf("\n\t\t collage:        %s", stud[i].col);
          printf("\n\t\t department:     %s %s", stud[i].dep, stud[i].dept);
          printf("\n\t\t sex:            %s", stud[i].gender);
          printf("\n\t\t academic year:  %s", stud[i].acedamic_year);
          printf("\n\t\t program:        %s", stud[i].program);
          printf("\n\t\t semester:       %s", stud[i].semester);
          printf("\n\t\t class year:     %s", stud[i].class_year);
          printf("\n\t\t admission type: %s", stud[i].admission_type);
       }
    }
 }
 /*definition of function veiwregisteredteachers*/
 void veiwregisteredteachers() {
    system("clear");
    if (numberofteachers <= 0) {
       printf("\n not found");
    } else {
       int filano;
       printf("\n\t\t\t\t all registered teachers information is as follows");
       printf("\n\t\t\t\t select your choice\n");
       do {
          printf("\n\t\t*============================================*");
          printf("\n\t\t 0: to exit                            ======*");
          printf("\n\t\t 1: to see all teachers information    ======*");
          printf("\n\t\t 2: to go back                         ======*");
          printf("\n\t\t*============================================*\n");
          printf("\n\t\t enter your choice: ");
          scanf("%d", & filano);
          switch (filano) {
          case 0:
             exit(0);
             break;
          case 1:
             system("clear");
             for (int i = 0; i < numberofteachers; i++) {
                printf("\n\t\t====================================================");
                printf("\n\t\t  information of teacher: %d", i + 1);
                printf("\n\t\t====================================================\n");
                printf("\n\t\t teacher full name:  %s %s %s ", instructor[i].fname, instructor[i].mname, instructor[i].lname);
                printf("\n\t\t teacher id  :       %d         ", instructor[i].ID);
                printf("\n\t\t teacher age:        %d        ", instructor[i].age);
                printf("\n\t\t teacher gender:     %s     ", instructor[i].gender);
                printf("\n\t\t teacher profession: %s ", instructor[i].profession);
                printf("\n\t\t teacher username:   %s    ", instructor[i].username);
                printf("\n\t\t teacher  password:  %s   \n", instructor[i].password);
                printf("\n\t\t =====================================================\n");
             }
             break;;
          case 2:
             departementhead();
             break;
          default: {
             if (filano < 0 || filano > 2) {
                printf("\n invalid choice \n");
             }
             break;
          }
          }
       } while (filano != 0);
    }
 }
 /*definition of function calculateGPA*/
 void calculateGPA() {
    system("clear");
    int result1, result2, user_id, option, result3, result4;
    printf("\n\t well come\n");
    char username[15], upassword[15];
    printf("\n\t Login\n\t");
    printf("\n\t username:\n\t");
    scanf("%s", username);
    printf("\n\t password:\n\t");
    scanf("%s", upassword);
    for (int i = 0; i < numberofteachers; i++) {
       result1 = strcmp(upassword, instructor[i].password);
       result2 = strcmp(username, instructor[i].username);
       if (result1 == 0 && result2 == 0) {
          do {
             printf("\n\t\t================================");
             printf("\n\t\t 1:Calculate grade  ============");
             printf("\n\t\t 2:Back             ============");
             printf("\n\t\t 0:to exit          ============");
             printf("\n\t\t================================\n");
             printf("\n\t\t...");
             scanf("%d", & option);
             switch (option) {
             case 1:
                printf("\n\t enter id of student you want to calculate grade: ");
                scanf("%d", & user_id);
                for (int k = 0; k < numberofstudent; k++) {
                   if (stud[k].ID == user_id) {
                      stud[k].totalofcradits = 0;

                      stud[k].ave = 0;
                      stud[k].sum = 0;
                      stud[k].add = 0;
                      printf("\n\t enter number of course you want to grade for student %d: ", i + 1);
                      scanf("%d", & stud[k].number_of_course);
                      for (int j = 0; j < stud[k].number_of_course; j++) {
                         printf("\n\t enter mark for course %d: ", j + 1);
                         scanf("%f", & stud[k].marks[j]);
                         int x = 0;
                         while (stud[k].marks[j] < 0 || stud[k].marks[j] > 100) {
                            printf("\n\t the mark range should be between 0 and 100");
                            printf("\n\t please enter valid mark: ");
                            scanf("%f", & stud[k].marks[j]);
                            system("clear");
                            x++;
                         }
                         stud[k].sum += stud[k].marks[j];
                         printf("\n\t enter credithoure of course %d: ", j + 1);
                         scanf("%f", & stud[k].credit[j]);
                         stud[k].totalofcradits += stud[k].credit[j];
                         if (stud[k].marks[j] < 0 || stud[k].marks[j] > 100) {
                            printf("\n\t Wrong Entry\n");
                         } else if (stud[k].marks[j] >= 90 && stud[k].marks[j] <= 100) {
                            stud[k].sweight[j] = stud[k].credit[j] * A_PLUS;
                         } else if (stud[k].marks[j] >= 85 && stud[k].marks[j] < 90) {
                            stud[k].sweight[j] = stud[k].credit[j] * A;
                         } else if (stud[k].marks[j] >= 80 && stud[k].marks[j] < 85) {
                            stud[k].sweight[j] = stud[k].credit[j] * A_MINUS;
                         } else if (stud[k].marks[j] >= 75 && stud[k].marks[j] < 80) {
                            stud[k].sweight[j] = stud[k].credit[j] * B_PLUS;
                         } else if (stud[k].marks[j] >= 70 && stud[k].marks[j] < 75) {
                            stud[k].sweight[j] = stud[k].credit[j] * B;
                         } else if (stud[k].marks[j] >= 65 && stud[k].marks[j] < 70) {
                            stud[k].sweight[j] = stud[k].credit[j] * B_MINUS;
                         } else if (stud[k].marks[j] >= 60 && stud[k].marks[j] < 65) {
                            stud[k].sweight[j] = stud[k].credit[j] * C_PLUS;
                         } else if (stud[k].marks[j] >= 50 && stud[k].marks[j] < 60) {
                            stud[k].sweight[j] = stud[k].credit[j] * C;
                         } else if (stud[k].marks[j] >= 45 && stud[k].marks[j] < 50) {
                            stud[k].sweight[j] = stud[k].credit[j] * C_MINUS;
                         } else if (stud[k].marks[j] >= 40 && stud[k].marks[j] < 45) {
                            stud[k].sweight[j] = stud[k].credit[j] * D;
                         } else if (stud[k].marks[j] >= 0 && stud[k].marks[j] < 30) {
                            stud[k].sweight[j] = stud[k].credit[j] * F;
                         }
                         stud[k].add += stud[k].sweight[j];
                         //numberofcourse++;
                      }
                      stud[k].ave = stud[k].sum / stud[k].number_of_course;
                      stud[k].GPA = stud[k].add / stud[k].totalofcradits;
                      break;
                   } else {
                      if (k == numberofstudent - 1) {
                         printf("\n\t wrong id!");
                      }
                   }
                }
                break;
             case 2:
                teachers();
                break;
             default:
                if (option < 1 || option > 2) {
                   printf("\n invalid option\n");
                }
             }
          } while (option != 0);
       } else {
          if (i == numberofteachers - 1) {
             printf("\n\t wrong password and username!");
          }
       }
    }
 }

 //this function is to give output of grade depending on the mark of the grade 
 char grade(float mark) {
    if (mark < 0 || mark > 100) {
       printf("Wrong Entry");
    } else if (mark >= 90 && mark <= 100) {
       printf("A+");
    } else if (mark >= 85 && mark < 90) {
       return 65; //to return A GRADE
    } else if (mark >= 80 && mark < 85) {
       printf("A-");
    } else if (mark >= 75 && mark < 80) {
       printf("B+");
    } else if (mark >= 70 && mark < 75) {
       return 66; //to return B GRADE
    } else if (mark >= 65 && mark < 70) {
       printf("B-");
    } else if (mark >= 60 && mark < 65) {
       printf("C+");
    } else if (mark >= 50 && mark < 60) {
       return 67; //to return C GRADE
    } else if (mark >= 45 && mark < 50) {
       printf("C-");
    } else if (mark >= 40 && mark < 45) {
       return 68; //to return D GRADE
    } else if (mark >= 0 && mark < 40) {
       return 70; //to return F GRADE
    } else {
       printf("invalid input!");
    }
 }
 // this function is to view result of student 
 void viewresultstudent() {
    int user_id;
    if (numberofstudent == 0) {
       printf("\n\t\t\t\t not found!");
    } else {
       printf("\n\t\t\t\tenter id of student you want to see result: ");
       scanf("%d", & user_id);
       for (int i = 0; i < numberofstudent; i++) {
          // checking for id is match 
          if (user_id == stud[i].ID) {
             printf("\n\t\t\t\t********************************************************");
             printf("\n\t\t\t\tname: %s %s %s\n\t\t ID: %d", stud[i].fname, stud[i].mname, stud[i].lname, stud[i].ID);
             for (int j = 0; j < stud[i].number_of_course; j++) {
                // printf("\n\t\t\t\tcourese name%s", instructor[i].course[j]);
                printf("\n\t\t\t\t marks :%f", stud[i].marks[j]);
                printf("\n\t\t\t\t credit-hour :\t%f", stud[i].credit[j]);
                printf("\n\t\t\t\t Grade is: ");
                printf("%c", grade(stud[i].marks[j]));
             }
             printf("\n\t\t\t\t total credit:%f", stud[i].totalofcradits);
             printf("\n\t\t\t\t total credit times weight:%f\n", stud[i].add);
             printf("\n\t\t\t\t ave :%f\n", stud[i].ave);
             printf("\n\t\t\t\t GPA :%f\n", stud[i].GPA);
             printf("\n\t\t\t\t*********************************************************");
             break;
          } else {
             if (i == numberofstudent - 1) {
                printf("\n invalid id\n");
             }
          }
       }
    }
 }
 void viewyourresult() {
    char username[25], password[25];
    printf("\n\t\t\t\t Log In \n");
    printf("\n\t\t\t\t Username \n\t\t\t\t");
    scanf("%s", username);
    printf("\n\t\t\t\t Password \n\t\t\t\t");
    scanf("%s", password);
    for (int i = 0; i < numberofstudent; i++) {
       int unm = strcmp(stud[i].username, username);
       int pwm = strcmp(stud[i].password, password);
       if (unm == 0 && pwm == 0) {
          printf("\n\t\t\t\t********************************************************");
          printf("\n\t\t\t\t Logged As: %s", stud[i].fname);
          for (int j = 0; j < stud[i].number_of_course; j++) {
             // printf("\n\t\t\t\tcourese name%s", instructor[i].course[j]);
             printf("\n\t\t\t\t marks :%f", stud[i].marks[j]);
             printf("\n\t\t\t\t credit hour :\t%f", stud[i].credit[j]);
             printf("\n\t\t\t\t Grade is: ");
             printf("%c", grade(stud[i].marks[j]));
          }
          printf("\n\t\t\t\t total credit: %f", stud[i].totalofcradits);
          printf("\n\t\t\t\t total credit times weight: %f\n", stud[i].add);
          printf("\n\t\t\t\t average : %f\n", stud[i].ave);
          printf("\n\t\t\t\t GPA : %f\n", stud[i].GPA);
          if (stud[i].GPA >= 3.5 && stud[i].GPA < 3.75) {
             printf("\n\t\t\t\t high Destination ");
          } else if (stud[i].GPA >= 3.75 && stud[i].GPA <= 4.0) {
             printf("\n\t\t\t\t very high Destination ");
          } else if (stud[i].GPA >= 2.0 && stud[i].GPA < 3.5) {
             printf("\n\t\t\t\t work hard ");
          } else {
             printf("\n\t\t\t\t warning ");
          }
          printf("\n\t\t\t\t*********************************************************");
          break;
       } else {
          if (i == numberofstudent - 1) {
             printf("\n invalid username and password\n");
          }
       }
    }
 }
 //this function to search information of students for different purpose 
 void searchstudenntinformation() {
    system("clear");
    int user_id;
    if (numberofstudent <= 0) {
       printf("\n not found");
    } else {
       printf("\n\t\t\t\tenter id of student you want to see information: ");
       scanf("%d", & user_id);
       for (int i = 0; i < numberofstudent; i++) {
          if (user_id == stud[i].ID) {
             printf("\n\t\t****************************************************");
             printf("\n\t\t information of student: %d", i + 1);
             printf("\n\t\t****************************************************");
             printf("\n\t\t Name:          %s %s %s \t\t", stud[i].fname, stud[i].mname, stud[i].lname);
             printf("\n\t\t ID number:     %d", stud[i].ID);
             printf("\n\t\t User Name:      %s", stud[i].username);
             printf("\n\t\t Password:       %s", stud[i].password);
             printf("\n\t\t Nationality:    %s", stud[i].nationality);
             printf("\n\t\t Region:         %s", stud[i].region);
             printf("\n\t\t Zone:           %s", stud[i].zone);
             printf("\n\t\t Woreda:         %s", stud[i].woreda);
             printf("\n\t\t Tel_no:         %d", stud[i].tel_no);
             printf("\n\t\t collage:        %s", stud[i].col);
             printf("\n\t\t department:     %s %s", stud[i].dep, stud[i].dept);
             printf("\n\t\t sex:            %s", stud[i].gender);
             printf("\n\t\t academic year:  %s", stud[i].acedamic_year);
             printf("\n\t\t program:        %s", stud[i].program);
             printf("\n\t\t semester:       %s", stud[i].semester);
             printf("\n\t\t class year:     %s", stud[i].class_year);
             printf("\n\t\t admission type: %s", stud[i].admission_type);
             for (int j = 0; j < stud[i].number_of_course; j++) {
                printf("\n\t\t\t\t marks :       %f", stud[i].marks[j]);
                printf("\n\t\t\t\t credit hour : %f", stud[i].credit[j]);
                printf("\n\t\t\t\t Grade is: ");
                printf("%c", grade(stud[i].marks[j]));
             }
             printf("\n\t\t\t\t TOTAL ECTS:  %f", stud[i].totalofcradits);
             printf("\n\t\t\t\t ECTS*WEIGHT: %f", stud[i].add);
             printf("\n\t\t\t\t average:     %f", stud[i].ave);
             printf("\n\t\t\t\t GPA :        %f", stud[i].GPA);
             if (stud[i].GPA >= 3.5 && stud[i].GPA < 3.75) {
                printf("\n\t\t\t\t high Destination");
             } else if (stud[i].GPA >= 3.75 && stud[i].GPA <= 4.0) {
                printf("\n\t\t\t\t very high Destination ");
             } else if (stud[i].GPA >= 2.0 && stud[i].GPA < 3.5) {
                printf("\n\t\t\t\t work hard ");
             } else {
                printf("\n\t\t\t\t warning ");
             }
             printf("\n\t\t\t\t*********************************************************");
             break;
          } else {
             if (i == numberofstudent - 1) {
                printf("\n invalid id\n");
             }
          }
       }
    }
 }
 /*definition of function updatestudentmarks*/
 void updatestudentmarks() {
    //this function block help us to update/edit mark of student if it has got an error 
    system("clear");
    int result1, result2;
    float newadd, newave, newmarks[10];
    int user_id;
    printf("\n\t\t well come\n");
    char username[15], upassword[15];
    printf("\n\t\t\t\t Log In \n");
    printf("\n\t\t\t\t Username \n\t\t\t\t");
    scanf("%s", username);
    printf("\n\t\t\t\t Password \n\t\t\t\t");
    scanf("%s", upassword);
    for (int i = 0; i < numberofteachers; i++) {
       result1 = strcmp(upassword, instructor[i].password);
       result2 = strcmp(username, instructor[i].username);
       if (result1 == 0 && result2 == 0) {
          printf("\n\t\t enter id of student you want to update grade: ");
          scanf("%d", & user_id);
          for (int k = 0; k < numberofstudent; k++) {
             if (stud[k].ID == user_id) {
                newave = 0;
                stud[k].newsum = 0;
                newadd = 0;
                newmarks[k] = 0;
                for (int j = 0; j < stud[i].number_of_course; j++) {
                   printf("\n\t\t enter mark for course %d:", j + 1);
                   scanf("%f", & newmarks[j]);
                   int x = 0;
                   while (newmarks[j] < 0 || newmarks[j] > 100) {
                      printf("\n\t\t the mark range should be between 0 and 100");
                      printf("\n\t\t please enter valid mark: ");
                      scanf("%f", & newmarks[j]);
                      system("clear");
                      x++;
                   }
                   stud[k].marks[j] = newmarks[j];
                   stud[k].newsum += newmarks[j];
                   if (newmarks[j] < 0 || newmarks[j] > 100) {
                      printf("Wrong Entry");
                   } else if (newmarks[j] >= 90 && newmarks[j] <= 100) {
                      stud[k].sweight[j] = stud[k].credit[j] * A_PLUS;
                   } else if (newmarks[j] >= 85 && newmarks[j] < 90) {
                      stud[k].sweight[j] = stud[k].credit[j] * A;
                   } else if (newmarks[j] >= 80 && newmarks[j] < 85) {
                      stud[k].sweight[j] = stud[k].credit[j] * A_MINUS;
                   } else if (newmarks[j] >= 75 && newmarks[j] < 80) {
                      stud[k].sweight[j] = stud[k].credit[j] * B_PLUS;
                   } else if (newmarks[j] >= 70 && newmarks[j] < 75) {
                      stud[k].sweight[j] = stud[k].credit[j] * B;
                   } else if (newmarks[j] >= 65 && newmarks[j] < 70) {
                      stud[k].sweight[j] = stud[k].credit[j] * B_MINUS;
                   } else if (newmarks[j] >= 60 && newmarks[j] < 65) {
                      stud[k].sweight[j] = stud[k].credit[j] * C_PLUS;
                   } else if (newmarks[j] >= 50 && newmarks[j] < 60) {
                      stud[k].sweight[j] = stud[k].credit[j] * C;
                   } else if (newmarks[j] >= 45 && newmarks[j] < 50) {
                      stud[k].sweight[j] = stud[k].credit[j] * C_MINUS;
                   } else if (newmarks[j] >= 40 && newmarks[j] < 45) {
                      stud[k].sweight[j] = stud[k].credit[j] * D;
                   } else if (newmarks[j] >= 0 && newmarks[j] < 30) {
                      stud[k].sweight[j] = stud[k].credit[j] * F;
                   } else {
                      printf("\n you calculate it correctly");
                   }
                   newadd += stud[k].sweight[j];
                }
                stud[k].add = newadd;
                stud[k].ave = stud[k].newsum / stud[k].number_of_course;
                stud[k].GPA = stud[k].add / stud[k].totalofcradits;
                break;
             } else {
                if (k == numberofstudent - 1) {
                   printf("\n\t wrong id!");
                }
             }
          }
          // break;
       } else
       if (i == numberofteachers - 1) {
          printf("\n\t wrong password and username!");
       }
    }
 }
 //definition of function deletestudent
 void deletestudent() {
    system("clear");
    if (numberofstudent == 0) {
       printf("\n\t\t\t\tno one is gegistred");
    } else {
       int user_id, indexofstudent = 0;
       printf("\n enter id of student you want to delete from the list: ");
       scanf("%d", & user_id);
       //searching student you want to delete from the list by id
       for (int j = 0; j < numberofstudent; j++) {
          if (user_id == stud[j].ID) {
             indexofstudent = j;
             for (int i = indexofstudent; i < numberofstudent - 1; i++) {
                stud[i].ID = stud[i + 1].ID; // changing id
                strcpy(stud[i].fname, stud[i + 1].fname);
                strcpy(stud[i].mname, stud[i + 1].mname);
                strcpy(stud[i].lname, stud[i + 1].lname);  // cahging name                           
                strcpy(stud[i].username, stud[i + 1].username);
                strcpy(stud[i].password, stud[i + 1].password);
                strcpy(stud[i].col, stud[i + 1].col); // changing col
                strcpy(stud[i].dep, stud[i + 1].dep); // changing dep
                strcpy(stud[i].dept, stud[i + 1].dept); // changing dep
                strcpy(stud[i].gender, stud[i + 1].gender); // changing sex
                strcpy(stud[i].courses, stud[i + 1].courses); // changing courses
                strcpy(stud[i].nationality, stud[i + 1].nationality); // changing nationality
                strcpy(stud[i].region, stud[i + 1].region); // changing region
                strcpy(stud[i].zone, stud[i + 1].zone); // changing region
                strcpy(stud[i].woreda, stud[i + 1].woreda); // changing region
                strcpy(stud[i].acedamic_year, stud[i + 1].acedamic_year); //  region             
                strcpy(stud[i].program, stud[i + 1].program); // changing program
                strcpy(stud[i].semester, stud[i + 1].semester); //changing semester
                strcpy(stud[i].class_year, stud[i + 1].class_year); //  changing class_                    
                strcpy(stud[i].admission_type, stud[i + 1].admission_type); // changing region
                stud[i].tel_no = stud[i + 1].tel_no; // changing region
                stud[i].class_year, stud[i + 1].class_year; // changing region
                stud[i].number_of_course, stud[i + 1].number_of_course; // changing region
                stud[i].marks[i] = stud[i + 1].marks[i]; // changing region
                stud[i].new_marks[i] = stud[i + 1].new_marks[i]; // changing region
                stud[i].ave = stud[i + 1].ave; // changing region
                stud[i].newsum = stud[i + 1].newsum; // changing region
                stud[i].GPA = stud[i + 1].GPA; // changing region
                stud[i].credit[i] = stud[i + 1].credit[i]; // changing region
                stud[i].totalofcradits = stud[i + 1].totalofcradits; // changing region
                stud[i].newcredit = stud[i + 1].newcredit; // changing region
                stud[i].add = stud[i + 1].add; // changing region
                stud[i].sum = stud[i + 1].sum; // changing region
             }
             numberofstudent--;
             printf("\n student is deleted from the list now you can check!");
             break;
          } else {
             if (j == numberofstudent - 1) {
                printf("\n wrong entry \n");
             }
          }
       }
    }
 }

 // ===================================== END! THANK YOU  =====================================
