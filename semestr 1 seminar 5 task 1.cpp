#include <iostream>
using namespace std;

class Student 
{
private:
    const std::string firstname; // Имя студента
    const std::string secondname; // Фамилия студента
    const std::string group; // Группа студента
    int age; // Возраст студента
    //unsigned grade; // Оценка студента
    int HP; // Здоровье студента
    int money; // Деньги студента
    int time_student; // Время бодрствованья студента
    //unsigned time = 0; // Время одного из действий студента
    int time_until_end_of_the_day; // Общее время бота студента
    int time_until_exam; // Общее время до экзамена
    int time_bot; // Общее время бота студента

public:
    // Конструктор студента
    Student(std::string p_firstname,
        std::string p_secondname,
        std::string p_group,
        int p_age,
        int p_HP = 100,
        int p_money = 100,
        int p_time_student = 0,
        int p_time_until_end_of_the_day = 24,
        int p_time_until_exam = 120 * 24,
        int p_time_bot = 0)
          : firstname(p_firstname)
          , secondname(p_secondname)
          , group(p_group)
          , age(p_age)
          , HP(p_HP)
          , money(p_money)
          , time_student(p_time_student)
          , time_until_end_of_the_day(p_time_until_end_of_the_day)
          , time_until_exam(p_time_until_exam)
          , time_bot(p_time_bot) {}

    // Деструктор
    ~Student() {};


    // Метод получения всей информации о студенте
    void Print()
    {
        std::cout << "\nFirstname: " << firstname
            << "\nSecondname: " << secondname
            << "\nGroup: " << group
            << "\nAge: " << age
            << "\nHP: " << HP
            << "\nMoney: " << money
            << "\nTime witout sleeping: " << time_student
            << "\nTime until end of the day: " << time_until_end_of_the_day
            << "\nTime until exam: " << time_until_exam
            << "\nTime the student studied in the semester: " << time_bot << std::endl;
    }

    // Получение значения здоровья  
    int GetHP() 
    {
        std::cout << "\nHP: ";
        return HP; 
    } 

    // Получения информации о деньгах 
    int GetMoney() 
    { 
        std::cout << "\nMoney: ";
        return money; 
    } 

    // Получения оставшегося времени в сутках
    int GetTimeUntilEndOfTheDay() 
    { 
        std::cout << "\nTime until end of the day: ";
        return time_until_end_of_the_day; 
    }  

    // Метод для еды
    void Eating(int time)
    {
        Time24(time);
        if (money - 1 * time <= 0)
        {
            throw std::invalid_argument("You are homeless.\n");
        }
        HP = HP + 1 * time;
        time_student = time + time_student;
        money = money - 1 * time;
    }

    // Метод для учебы в общаге
    void Studying_yourself(int time)
    {
        Time24(time);
        if (time_student <= 24)
        {
            HP = HP - 2 * time;
            time_student = time + time_student;
            time_bot = time_bot + time;
        }
        else
        {
            HP = HP - 6 * time;
            time_student = time + time_student;
            time_bot = time_bot + time / 2;
        }
    }

    // Метод для учебы на паре
    void Studying_lectures(int time)
    {
        Time24(time);
        if (time_student <= 24)
        {
            HP = HP - 1 * time;
            time_student = time + time_student;
            time_bot = time_bot + time;
        }
        else
        {
            HP = HP - 3 * time;
            time_student = time + time_student;
            time_bot = time_bot + time / 2;

        }
    }

    // Метод для сна
    void Sleeping(int time)
    {
        Time24(time);
        if (time <= 6)
        {
            HP = HP + 2 * time;
            time_student = time + time_student;
        }
        else
        {
            HP = HP + 6 * time;
            time_student = 0;
        }
    }

    // Метод для работы в лабе
    void Working(int time)
    {
        Time24(time);
        if (time_student <= 24)
        {
            HP = HP - 1 * time;
            time_student = time + time_student;
        }
        else
        {
            HP = HP - 2 * time;
            time_student = 0;
        }
        money = money + 1 * time;
    }

    // Метод для развлечений
    void Entertainment(int time)
    {
        Time24(time);
        if (money - 2 * time <= 0)
        {
            throw std::invalid_argument("You are homeless.\n");
        }
        else if (time_student <= 24)
        {
            HP = HP + 6 * time;
            time_student = time + time_student;
        }
        else
        {
            HP = HP + 2 * time;
            time_student = time + time_student;
        }
        money = money - 2 * time;
    }
    
    // Метод проверки здоровья
    void Check_HP()
    {
        if (HP <= 0)
        {
            std::cout << "Went to academ" << std::endl;
            std::cout << "End of the game" << std::endl;
            exit(0);
        }
    }

    // Метод экзаменовки
    void Exams()
    {
        if (time_bot <= 800)
        {
            std::cout << "Bye bye, go from here" << std::endl;
            std::cout << "End of the game" << std::endl;
            exit(0);
        }
        else
        {
            std::cout << "You did it!" << std::endl;
            std::cout << "End of the game" << std::endl;
            exit(0);
        }
    }

    // Метод проверки времени до конца дня
    void TimeDay(int time)
    {
        time_until_end_of_the_day = time_until_end_of_the_day - time;
        if (time_until_end_of_the_day < 0)
        {
            time_until_end_of_the_day = time_until_end_of_the_day + 24;
        }
    }

    // Метод проверки времени до начала экзаменов
    void TimeExam(int time)
    {
        time_until_exam = time_until_exam - time;
        if (time_until_exam <= 0) Exams();
    }

    // Метод раздачи стипендии
    void scholarship()
    {
        if (time_until_exam >= 2160 && time_until_exam <= 2184
         || time_until_exam >= 1440 && time_until_exam <= 1464 
         || time_until_exam >= 720 && time_until_exam <= 744)
        {
            money = money + 100;
        }
    }

    // Метод ограничения времени действий
    void Time24(int time) 
    {
        if (time > 24 || time < 0)
        {
            throw std::invalid_argument("\nYou can not do something more than 24 hours or less than 0 hours.\n");
        }
    }
};


int main()
{
    std::cout << "Student survival simulator" << std::endl;
    std::cout << "\nEnter student parameters: " << std::endl;
    std::string firstName, secondName, group;
    int age = 0;
    std::cout << "\nEnter student's firstName: ";
    std::cin >> firstName;
    std::cout << "\nEnter student's secondName: ";
    std::cin >> secondName;
    std::cout << "\nEnter student's group: ";
    std::cin >> group;
    std::cout << "\nEnter student's age: ";
    std::cin >> age;
    Student student(firstName, secondName, group, age);
    int condition = 1000 - 7;
    int time = 0;
    while (condition != 0)
    {
        try
        {
            std::cout << "\nWhat you wanna do?" << std::endl;
            std::cout << "1 - Present student's informatoin"
                << "\n2 - Presenting student's HP"
                << "\n3 - Presenting student's money"
                << "\n4 - Presenting time until end of the day"
                << "\n5 - Gonna Eat"
                << "\n6 - Gonna Study"
                << "\n7 - Gonna hear lecture"
                << "\n8 - Gonna sleep"
                << "\n9 - Gonna work"
                << "\n10 - Gonna watch anime" << std::endl;
            std::cout << "\nEnter command: ";
            std::cin >> condition;
            switch (condition)
            {
            case 1: // Печатает информацию о студенте
                student.Print();
                break;
            case 2: // Возращает состояние здоровья студента
                std::cout << student.GetHP() << std::endl;
                break;
            case 3: // Возращает количество денег у студента
                std::cout << student.GetMoney() << std::endl;
                break;
            case 4: // Возращает количество часов до конца дня
                std::cout << student.GetTimeUntilEndOfTheDay() << std::endl;
                break;
            case 5: // Еда
                std::cout << "\nEnter action time in hours: ";
                std::cin >> time;
                student.Eating(time);
                break;
            case 6: // Бот
                std::cout << "\nEnter action time in hours: ";
                std::cin >> time;
                student.Studying_yourself(time);
                break;
            case 7: // Посещение лекций
                std::cout << "\nEnter action time in hours: ";
                std::cin >> time;
                student.Studying_lectures(time);
                break;
            case 8: // Сон
                std::cout << "\nEnter action time in hours: ";
                std::cin >> time;
                student.Sleeping(time);
                break;
            case 9: // Работа в лабах
                std::cout << "\nEnter action time in hours: ";
                std::cin >> time;
                student.Working(time);
                break;
            case 10: // Смотрит аниме
                std::cout << "\nEnter action time in hours: ";
                std::cin >> time;
                student.Entertainment(time);
                break;
            default: // Другая команда
                std::cout << "\nWrong action" << std::endl;
            }
            student.Check_HP(); // Проверяем здоровье
            student.TimeDay(time); // Рассчитываем время
            student.TimeExam(time); // Рассчитываем время
            student.scholarship(); // Проверяем пора ли выдавать стипендию
        }
        catch (std::invalid_argument& e) // Лувиться ввод недопустимых параметров
        {
            cout << e.what();
        }
    }
}