#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Задание № 1." << endl;
	cout << "Написать программу, реализирующую процедуры заказа и расчета его суммы в мини - пиццерии." << endl;
	cout << "В меню пиццерии предусмотрено 4 вида пиццы и три вида напитков." << endl;
	cout << "Пользователю выводится меню(в начале пиццы, потом напитки), содержащее код и название." << endl;
	cout << "Пользователь вводит код желаемого продукта, после чего вводит количество единиц данного продукта." << endl;
	cout << "В пиццерии предусмотрены скидки:" << endl;
	cout << "1. Если общая сумма заказа более 5000 руб, то размер скидки составляет 20 % от суммы заказа;" << endl;
	cout << "2. Каждая пятая пицца в подарок;" << endl;
	cout << "3. Для напитков с ценой более 100 руб., если количество в заказе более трех, то скидка 15 % -только на напитки, а не на весь заказ;" << endl;
	cout << "Вывести пользователю чек для оплаты в виде : название - количество - цена, итого к оплате." << endl;

	double pizza_101 = 546.3;
	double pizza_102 = 780.0;
	double pizza_103 = 762.52;
	double pizza_104 = 340.0;
	int count_pizza = 0;

	double drink_201 = 80.1;
	double drink_202 = 120.0;
	double drink_203 = 220.4;
	int count_drink = 0;

	double sum_pizza = 0;
	double sum_101 = 0;
	double sum_102 = 0;
	double sum_103 = 0;
	double sum_104 = 0;

	double sum_drink = 0;
	double sum_201 = 0;
	double sum_202 = 0;
	double sum_203 = 0;
	double sum = 0;
	int menu_1;
	int menu_2;
	int menu_3;
	double percent = 0;

	int count=0;
	int i = 1;
	int count_101=0;
	int count_102=0;
	int count_103=0;
	int count_104=0;
	int count_201=0;
	int count_202=0;
	int count_203=0;
	int count_sale = 0;
	
	double revenue = 0;
	double pizza_sale = 0;
	double sale_5 = 0;
	double sale_20 = 0;
	double sale_15 = 0;

	while (true)
	{
		cout << endl;
		cout << "Выберите действие: 1 - добавить покупателя; 2- узнать выручку. "; cin >> menu_1;
		cout << endl;
		switch (menu_1)
		{
		case 1:
		{
			//добавить покупателя
			cout << endl;
			cout << "Покупатель № " << i << endl;

			bool cheque = true;
			while (cheque)
			{
				cout << endl;
				cout << "Выберите действие: 1- добавить товар; 2 - выпустить чек. "; cin >> menu_2;
				cout << endl;
				switch (menu_2)
				{
				case 1: 
				{
					//Добавить товар
					cout << "Сделайте Ваш заказ: укажите код товара и его количество: " << endl;
					cout << "\t\t\t\t\tНаше меню: " << endl;
					cout << endl;
					cout << "\t\t\t\t\tПиццы: " << endl;
					cout << " Код товара " << " Наименование " << " Стоимость за ед., руб. " << endl;
					cout << " 101        " << " Гавайская    " << "      " << pizza_101 << endl;
					cout << " 102        " << " Портато      " << "      " << pizza_102 << endl;
					cout << " 103        " << " Верона       " << "      " << pizza_103 << endl;
					cout << " 104        " << " Токио        " << "      " << pizza_104 << endl;
					cout << endl;
					cout << endl;
					cout << "\t\t\t\t\tНапитки: " << endl;
					cout << " Код товара " << " Наименование " << " Стоимость за ед., руб. " << endl;
					cout << " 201        " << " Кофе капучино" << "      " << drink_201 << endl;
					cout << " 202        " << " Чай зеленый  " << "      " << drink_202 << endl;
					cout << " 203        " << " Лимонад      " << "      " << drink_203 << endl;
					cout << endl;

					cin >> menu_3;
					switch (menu_3)
					{
					case 101:
					{
						cout << endl;
						cout << "Введите количество - " << endl;
						cin >> count_101;
						cout << endl;

						sum_101 = count_101 * pizza_101; cout << sum_101;
					}
					break;

					case 102:
					{
						cout << endl;
						cout << "Введите количество - " << endl;
						cin >> count_102;
						cout << endl;

						sum_102 = count_102 * pizza_102; cout << sum_102;
					}
					break;

					case 103:
					{
						cout << endl;
						cout << "Введите количество - " << endl;
						cin >> count_103;
						cout << endl;

						sum_103 = count_103 * pizza_103; cout << sum_103;
					}
					break;

					case 104:
					{
						cout << endl;
						cout << "Введите количество - " << endl;
						cin >> count_104;
						cout << endl;

						sum_104 = count_104 * pizza_104; cout << sum_104;
					}
					break;

					case 201:
					{
						cout << endl;
						cout << "Введите количество - " << endl;
						cin >> count_201;
						cout << endl;

						sum_201 = count_201 * drink_201; cout << sum_201;
					}
					break;

					case 202:
					{
						cout << endl;
						cout << "Введите количество - " << endl;
						cin >> count_202;
						cout << endl;

						sum_202 = count_202 * drink_202; cout << sum_202;
					}
					break;

					case 203:
					{
						cout << endl;
						cout << "Введите количество - " << endl;
						cin >> count_203;
						cout << endl;

						sum_203 = count_203 * drink_203; cout << sum_203;
					}
					break;

					default: cerr << "\t\t\t\tОшибка выбора меню-3" << endl;
						break;
					}
				} 
				break;

				case 2: 
				{
					//Выпустить чек
					cout << "**************************************************************************************************************************************\n";
					cout << " * " << "\t\t\t\t\tЧЕК " << endl;
					cout << " * " << "\t\t\t\t\tПиццы: " << endl;
					cout << " * " << " Код товара " << " Наименование " << " Стоимость за ед., руб. " << " Кол-во " << " Стоимость всего, руб." << endl;
					cout << " * " << " 101        " << " Гавайская    " << "      " << pizza_101 << "                " << count_101 << "          " << sum_101 << endl;
					cout << " * " << " 102        " << " Портато      " << "      " << pizza_102 << "                " << count_102 << "          " << sum_102 << endl;
					cout << " * " << " 103        " << " Верона       " << "      " << pizza_103 << "                " << count_103 << "          " << sum_103 << endl;
					cout << " * " << " 104        " << " Токио        " << "      " << pizza_104 << "                " << count_104 << "          " << sum_104 << endl;
					cout << " * " << endl;
					cout << " * " << endl;
					cout << " * " << "\t\t\t\t\tНапитки: " << endl;
					cout << " * " << " Код товара " << " Наименование " << " Стоимость за ед., руб. " << " Кол-во " << " Стоимость всего, руб." << endl;
					cout << " * " << " 201        " << " Кофе капучино" << "      " << drink_201 << "                " << count_201 << "           " << sum_201 << endl;
					cout << " * " << " 202        " << " Чай зеленый  " << "      " << drink_202 << "                " << count_202 << "           " << sum_202 << endl;
					cout << " * " << " 203        " << " Лимонад      " << "      " << drink_203 << "                " << count_203 << "           " << sum_203 << endl;
					cout << " * " << endl;
					cout << "**************************************************************************************************************************************\n";
					sum_pizza = sum_101 + sum_102 + sum_103 + sum_104; cout << " * " << "Стоимость всех пицц - " << sum_pizza << endl;
					sum_drink = sum_201 + sum_202 + sum_203; cout << " * " << "Стоимость всех напитков  - " << sum_drink << endl;
					sum = sum_pizza + sum_drink; cout << " * " << "Сумма всего без скидок - " << sum << endl;
					cout << "**************************************************************************************************************************************\n";
					//cout << "Итого - " << sum << endl;

					count_pizza = count_101 + count_102 + count_103 + count_104; //cout << "count_pizza " << count_pizza << endl;

					if (sum < 5000)
					{
		
						if( count_pizza >= 5)
						{
							count_pizza = count_101 + count_102 + count_103 + count_104; //cout << "count_pizza " << count_pizza << endl;
							count_sale = count_pizza / 5; //cout << "count_sale " << count_sale << endl;
							pizza_sale = count_pizza * count_sale; //cout << "pizza_sale " << pizza_sale << endl;
							sale_5 = ((sum_101 + sum_102 + sum_103 + sum_104) / count_pizza) * count_sale; //cout << "sale_5 " << count_pizza << endl;
							sum_pizza = sum_101 + sum_102 + sum_103 + sum_104 - sale_5; //cout << "Стоимость пицц с 5-й бесплатной - " << sum_pizza << endl;
							cout << " * " << "Скидка за каждую 5-ю бесплатную пиццу - " << sale_5 << endl;
						}
						
						else
						{
							sum_pizza = sum_101 + sum_102 + sum_103 + sum_104; //cout << "Стоимость пицц без 5-й бесплатной - " << sum_pizza << endl;
						}

						if ((count_202 + count_203) >= 3)
						{
							sale_15 = (sum_201 + sum_202 + sum_203) * 0.15;
							sum_drink = sum_201 + sum_202 + sum_203-sale_15; //cout << "Стоимость всех напитков с 3 беспл - " << sum_drink << endl;
							cout << " * " << "Скидка за напитки - " << sale_15 << endl;
						}

						else
						{
							sum_drink = sum_201 + sum_202 + sum_203; //cout << " Стоимость напитков без скидок - " << sum_drink << endl;
						}
						
						sum = sum_pizza + sum_drink; //cout <<"Стоимость всего <5000 - " << sum << endl;
					}

					if (sum >= 5000)
					{
						if (count_pizza >= 5)
						{
							count_pizza = count_101 + count_102 + count_103 + count_104; //cout << "count_pizza " << count_pizza << endl;
							count_sale = count_pizza / 5; //cout << "count_sale " << count_sale << endl;
							pizza_sale = count_pizza * count_sale; //cout << "pizza_sale " << pizza_sale << endl;
							sale_5 = ((sum_101 + sum_102 + sum_103 + sum_104) / count_pizza) * count_sale;// cout << "sale_5 " << count_pizza << endl;
							sale_20 = (sum_101 + sum_102 + sum_103 + sum_104) *0.2; //cout << "sale_20 " << sale_20 << endl;
							sum_pizza = sum_101 + sum_102 + sum_103 + sum_104 - sale_5 - sale_20;// cout<< "Стоимость пицц с 5-й бесплатной - "  << sum_pizza << endl;
							cout << " * " << "Скидка за каждую 5-ю бесплатную пиццу - " << sale_5 << endl;
							cout << " * " << "Скидка за заказ свыше 5000 рублей - " << sale_20 << endl;
						}

						else
						{
							sum_pizza = (sum_101 + sum_102 + sum_103 + sum_104)- (sum_101 + sum_102 + sum_103 + sum_104)*0.2; //cout << "Стоимость пицц без 5-й бесплатной - "<< sum_pizza << endl;
						}

						if ((count_202 + count_203) >= 3)
						{
							sale_15 = (sum_201 + sum_202 + sum_203) * 0.15;
							sale_20 = (sum_201 + sum_202 + sum_203) * 0.2;
							sum_drink = sum_201 + sum_202 + sum_203 - (sum_201 + sum_202 + sum_203) * 0.15-(sum_201 + sum_202 + sum_203)*0.2; //cout << "Стоимость всех напитков с 3 беспл - "<< sum_drink << endl;
							cout << " * " << "Скидка за напитки - " << sale_15 << endl;
							cout << " * " << "Скидка за заказ свыше 5000 рублей - " << sale_20 << endl;
						}

						else
						{
							sum_drink = (sum_201 + sum_202 + sum_203) - (sum_201 + sum_202 + sum_203)*0.2; //cout<< "Стоимость напитков без скидочных - " << sum_drink << endl;
						}

						sum = sum_pizza + sum_drink; //cout << "Стоимость всего >=5000 - " << sum << endl;
					}
					cout << " * " << "Итого к оплате с учетом скидок - " <<sum<< endl;
					cout << "**************************************************************************************************************************************\n";

					cheque = false;
					revenue += sum;
					sum = 0;
					sum_101 = sum_102 = sum_103 = sum_104 = sum_201 = sum_202 = sum_203 = 0;
					count_101 = count_102 = count_103 = count_104 = count_201 = count_202 = count_203 = 0;
					i++;
				} 
				break;

				default: cerr << "\t\t\t\tОшибка выбора меню-2" << endl;
					break;
				}

			}
		}
		break;

		case 2:
		{
			//узнать выручку
			cout << endl;
			cout << "++++++++++++++++++++++++++++++" << endl;
			cout << "Выручка - " << revenue << endl;
			cout << "++++++++++++++++++++++++++++++" << endl;

			
		}
		break;

		default: cerr << "\t\t\t\tОшибка выбора меню-1" << endl;
			break;
		}

	}
	return 0;
}