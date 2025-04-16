#include <iostream>

class Spells_level_1 // заклинания первого уровня
{
public:
	Spells_level_1(const std::string& s) { std::cout << "Creating " << s << std::endl; } // Отчет о созании заклинания
	virtual ~Spells_level_1() {};                                                        // деструктор
	virtual std::string cast_level_1() const = 0;                                        // Отчет о вызове заклинания
};

class Expelliarmus : public Spells_level_1 // Атакующее заклинание первого уровня
{
public:
	Expelliarmus() : Spells_level_1( "Expelliarmus" ) {}
	std::string cast_level_1() const override // Гарантированное переопределение
	{
		return "Expelliarmus";
	}
};

class Protego : public Spells_level_1 // Защитное заклинание первого уровня
{
public:
	Protego() : Spells_level_1("Protego") {}
	std::string cast_level_1() const override
	{
		return "Protego";
	}
};

class Wingardium_Leviosa : public Spells_level_1 // Повседневное заклинание первого уровня
{
public:
	Wingardium_Leviosa() : Spells_level_1("Wingardium_Leviosa") {}
	std::string cast_level_1() const override
	{
		return "Wingardium_Leviosa";
	}
};

class Crucio : public Spells_level_1 // Непростительное заклинание первого уровня
{
public:
	Crucio() : Spells_level_1("Crucio") {}
	std::string cast_level_1() const override
	{
		return "Crucio";
	}
};


class Spells_level_2 // заклинания второго уровня
{
public:
	Spells_level_2(const std::string& s) { std::cout << "Creating " << s << std::endl; } // Отчет о созании заклинания
	virtual ~Spells_level_2() {};                                                        // деструктор
	virtual std::string cast_level_2() const = 0;                                        // Отчет о вызове заклинания
};

class Bombarda : public Spells_level_2 // Атакующее заклинание второго уровня
{
public:
	Bombarda() : Spells_level_2("Bombarda") {}
	std::string cast_level_2() const override 
	{
		return "Bombarda";
	}
};

class Protego_Diabolica : public Spells_level_2 // Защитное заклинание второго уровня
{
public:
	Protego_Diabolica() : Spells_level_2("Protego_Diabolica") {}
	std::string cast_level_2() const override 
	{
		return "Protego_Diabolica";
	}
};

class Lumos : public Spells_level_2 // Повседневное заклинание второго уровня
{
public:
	Lumos() : Spells_level_2("Lumos") {}
	std::string cast_level_2() const override 
	{
		return "Lumos";
	}
};

class Imperio : public Spells_level_2 // Непростительное заклинание второго уровня
{
public:
	Imperio() : Spells_level_2("Imperio") {}
	std::string cast_level_2() const override 
	{
		return "Imperio";
	}
};


class Spells_level_3 // заклинания третьего уровня
{
public:
	Spells_level_3(const std::string& s) { std::cout << "Creating " << s << std::endl; } // Отчет о созании заклинания
	virtual ~Spells_level_3() {};                                                        // деструктор
	virtual std::string cast_level_3() const = 0;                                        // Отчет о вызове заклинания
};

class Riddikulus : public Spells_level_3 // Атакующее заклинание третьего уровня
{
public:
	Riddikulus() : Spells_level_3("Riddikulus") {}
	std::string cast_level_3() const override 
	{
		return "Riddikulus";
	}
};

class Expecto_Patronum : public Spells_level_3 // Защитное заклинание третьего уровня
{
public:
	Expecto_Patronum() : Spells_level_3("Expecto_Patronum") {}
	std::string cast_level_3() const override 
	{
		return "Expecto_Patronum";
	}
};

class Nox : public Spells_level_3 // Повседневное заклинание третьего уровня
{
public:
	Nox() : Spells_level_3("Nox") {}
	std::string cast_level_3() const override 
	{
		return "Nox";
	}
};

class Avada_Kedavra : public Spells_level_3 // Непростительное заклинание третьего уровня
{
public:
	Avada_Kedavra() : Spells_level_3("Avada_Kedavra") {}
	std::string cast_level_3() const override 
	{
		return "Avada_Kedavra";
	}
};


class Spells_level_4 // заклинания четвертого уровня
{
public:
	Spells_level_4(const std::string& s) { std::cout << "Creating " << s << std::endl; } // Отчет о созании заклинания
	virtual ~Spells_level_4() {};                                                        // деструктор
	virtual std::string cast_level_4() const = 0;                                        // Отчет о вызове заклинания
};

class Petrificus_Totalus : public Spells_level_4 // Атакующее заклинание четвертого уровня
{
public:
	Petrificus_Totalus() : Spells_level_4("Petrificus_Totalus") {}
	std::string cast_level_4() const override 
	{
		return "Petrificus_Totalus";
	}
};

class Protego_Maxima : public Spells_level_4 // Защитное заклинание четвертого уровня
{
public:
	Protego_Maxima() : Spells_level_4("Protego_Maxima") {}
	std::string cast_level_4() const override 
	{
		return "Protego_Maxima";
	}
};

class Alohomora : public Spells_level_4 // Повседневное заклинание четвертого уровня
{
public:
	Alohomora() : Spells_level_4("Alohomora") {}
	std::string cast_level_4() const override 
	{
		return "Alohomora";
	}
};

class Absos_Marmelasa : public Spells_level_4 // Непростительное заклинание четвертого уровня
{
public:
	Absos_Marmelasa() : Spells_level_4("Absos_Marmelasa") {}
	std::string cast_level_4() const override 
	{
		return "Absos_Marmelasa";
	}
};

class Book_of_Marmelad // Книга заклинаний
{
public:
	virtual Spells_level_1* WriteSpell1() const = 0; // Функция для создание 1-уровневых заклинаний 
	virtual Spells_level_2* WriteSpell2() const = 0; // Функция для создание 2-уровневых заклинаний 
	virtual Spells_level_3* WriteSpell3() const = 0; // Функция для создание 3-уровневых заклинаний 
	virtual Spells_level_4* WriteSpell4() const = 0; // Функция для создание 4-уровневых заклинаний 
};

template<class Singleton> 
Singleton* GetSpellInstance() // Функция синглтон для щаблонных классов
{
	static Singleton* singleton = NULL;
	if (!singleton) singleton = new Singleton();
	return singleton;
}

template< class S1, class S2, class S3, class S4 > // Шаблонный класс создания заклинаний
class Four_Types_of_Marmelad : public Book_of_Marmelad
{
public:
	Spells_level_1* WriteSpell1() const override
	{
		return GetSpellInstance<S1>(); // Если заклинание еще не созданно то создаем
	}
	Spells_level_2* WriteSpell2() const override
	{
		return GetSpellInstance<S2>(); // Если заклинание еще не созданно то создаем
	}
	Spells_level_3* WriteSpell3() const override
	{
		return GetSpellInstance<S3>(); // Если заклинание еще не созданно то создаем
	}
	Spells_level_4* WriteSpell4() const override
	{
		return GetSpellInstance<S4>(); // Если заклинание еще не созданно то создаем
	}
};

typedef Four_Types_of_Marmelad<Expelliarmus, Bombarda, Riddikulus, Petrificus_Totalus> Attack_Spells;           // класс атакующих
typedef Four_Types_of_Marmelad<Protego, Protego_Diabolica, Expecto_Patronum, Protego_Maxima> Protection_Spells; // класс защитных
typedef Four_Types_of_Marmelad<Wingardium_Leviosa, Lumos, Nox, Alohomora> Casual_Spells;                        // класс повседневных
typedef Four_Types_of_Marmelad<Crucio, Imperio, Avada_Kedavra, Absos_Marmelasa> Unforgivable_Spells;            // класс непростительных

int main()
{
	// Показываю, что создать одно и тоже заклинание можно только один раз  

	Attack_Spells spell1lvl1;
	std::cout << spell1lvl1.WriteSpell1()->cast_level_1() << std::endl;
	std::cout << spell1lvl1.WriteSpell1()->cast_level_1() << std::endl;

	Protection_Spells spell2lvl1;
	std::cout << spell2lvl1.WriteSpell1()->cast_level_1() << std::endl;
	std::cout << spell2lvl1.WriteSpell1()->cast_level_1() << std::endl;

	Casual_Spells spell3lvl1;
	std::cout << spell3lvl1.WriteSpell1()->cast_level_1() << std::endl;
	std::cout << spell3lvl1.WriteSpell1()->cast_level_1() << std::endl;

	Unforgivable_Spells spell4lvl1;
	std::cout << spell4lvl1.WriteSpell1()->cast_level_1() << std::endl;
	std::cout << spell4lvl1.WriteSpell1()->cast_level_1() << std::endl;

	Attack_Spells spell1lvl2;
	std::cout << spell1lvl2.WriteSpell2()->cast_level_2() << std::endl;
	std::cout << spell1lvl2.WriteSpell2()->cast_level_2() << std::endl;

	Protection_Spells spell2lvl2;
	std::cout << spell2lvl2.WriteSpell2()->cast_level_2() << std::endl;
	std::cout << spell2lvl2.WriteSpell2()->cast_level_2() << std::endl;

	Casual_Spells spell3lvl2;
	std::cout << spell3lvl2.WriteSpell2()->cast_level_2() << std::endl;
	std::cout << spell3lvl2.WriteSpell2()->cast_level_2() << std::endl;

	Unforgivable_Spells spell4lvl2;
	std::cout << spell4lvl2.WriteSpell2()->cast_level_2() << std::endl;
	std::cout << spell4lvl2.WriteSpell2()->cast_level_2() << std::endl;

	Attack_Spells spell1lvl3;
	std::cout << spell1lvl3.WriteSpell3()->cast_level_3() << std::endl;
	std::cout << spell1lvl3.WriteSpell3()->cast_level_3() << std::endl;

	Protection_Spells spell2lvl3;
	std::cout << spell2lvl3.WriteSpell3()->cast_level_3() << std::endl;
	std::cout << spell2lvl3.WriteSpell3()->cast_level_3() << std::endl;

	Casual_Spells spell3lvl3;
	std::cout << spell3lvl3.WriteSpell3()->cast_level_3() << std::endl;
	std::cout << spell3lvl3.WriteSpell3()->cast_level_3() << std::endl;

	Unforgivable_Spells spell4lvl3;
	std::cout << spell4lvl3.WriteSpell3()->cast_level_3() << std::endl;
	std::cout << spell4lvl3.WriteSpell3()->cast_level_3() << std::endl;

	Attack_Spells spell1lvl4;
	std::cout << spell1lvl4.WriteSpell4()->cast_level_4() << std::endl;
	std::cout << spell1lvl4.WriteSpell4()->cast_level_4() << std::endl;

	Protection_Spells spell2lvl4;
	std::cout << spell2lvl4.WriteSpell4()->cast_level_4() << std::endl;
	std::cout << spell2lvl4.WriteSpell4()->cast_level_4() << std::endl;

	Casual_Spells spell3lvl4;
	std::cout << spell3lvl4.WriteSpell4()->cast_level_4() << std::endl;
	std::cout << spell3lvl4.WriteSpell4()->cast_level_4() << std::endl;

	Unforgivable_Spells spell4lvl4;
	std::cout << spell4lvl4.WriteSpell4()->cast_level_4() << std::endl;
	std::cout << spell4lvl4.WriteSpell4()->cast_level_4() << std::endl;
}