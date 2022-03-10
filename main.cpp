// Building an application that functions to sell cars.
// making use of struct function.
#include <iostream>
#include <vector>

using namespace std;

struct car
{
    string brand;
    string model;
    int year;
    string color;
    int price;
};
// above information create a memory like a database.



//creating a function.
void carScan (car c)
{
    cout << "Brand: " << c.brand << endl;
    cout << "Model of the car: " << c.model << endl;
    cout << "Year of Manufacture: " << c.year << endl;
    cout << "color of the car: " << c.color << endl;
    cout << "Price of the car: " << c.price << endl;

}


// creating a function to call all the cars.

void allCars(vector<car>c)
{
    for (unsigned int x = 0; x<c.size(); x++)
    {
        carScan(c[x]);
        cout << "######################################" << endl;
    }
}

// Writing a function to have the cheapest car.
void cheapestCar(vector<car>c){
cout << "########################################## " << endl;
cout << " The Cheapest Car:" << endl;
int minimum = 0;
car cheapest;

for(unsigned int x = 0; x<c.size(); x++ ){
    if((minimum == 0) || (minimum > c[x].price)){
    minimum = c[x].price;
    cheapest = c[x];
    }
}
carScan(cheapest);
}

// creating a function for the most expensive car.
void mostExpensiveCar(vector<car> c){
    cout << "########################################## " << endl;
cout << " The Most Expensive Car:" << endl;
    int maximum = 0;
    car mostExpensive;
for (unsigned int x=0;x<c.size();x++){
        if(maximum < c[x].price){
            maximum = c[x].price;
            mostExpensive = c[x];
        }
    }
 carScan(mostExpensive);
}

//cREATING A FUNCTION THAT SHOWS THE OLDEST CAR.
//STILL USING VOID FUNCTION.
void oldestCar(vector<car> c){
cout << "########################################## " << endl;
cout << " The Oldest Car:" << endl;
int minimum = 0;
car oldest;
for (unsigned int x=0;x,c.size();x++){
    if((minimum == 0) || (minimum > c[x].year)){
    minimum = c[x].year;
    oldest = c[x];
    }
}
    carScan(oldest);

}

//cREATING A FUNCTION THAT SHOWS THE NEWEST CAR.
//STILL USING VOID FUNCTION.
void newestCar(vector<car> c){
cout << "########################################## " << endl;
cout << " The Oldest Car:" << endl;
int maximum = 0;
car newest;
for (unsigned int x=0;x,c.size();x++){
    if(maximum < c[x].year){
    maximum = c[x].year;
    newest = c[x];
    }
}
    carScan(newest);
}

int main()
{
    //we are gonna have 7 cars defined.
    car c1,c2,c3,c4,c5,c6,c7;
    //defining the variable foe car One.
    c1.brand = "Toyota";
    c1.color = "Red";
    c1.model = "Avalon";
    c1.price = 50330;
    c1.year = 2015;

    //defining the variable foe car Two.
    c2.brand = "Toyota";
    c2.color = "Blue";
    c2.model = "Carmy";
    c2.price = 29858;
    c2.year = 2020;

    //defining the variable foe car Three.
    c3.brand = "Toyota";
    c3.color = "Grean";
    c3.model = "Rav4";
    c3.price = 80000;
    c3.year = 2021;


    //defining the variable foe car Four.
    c4.brand = "Nissan";
    c4.color = "Red";
    c4.model = "versa";
    c4.price = 14980;
    c4.year = 2021;


    //defining the variable foe car Five.
    c5.brand = "Nissan";
    c5.color = "White";
    c5.model = "Sentra";
    c5.price = 19510;
    c5.year = 2021;


    //defining the variable foe car Six.
    c6.brand = "Nissan";
    c6.color = "Gold";
    c6.model = "Altima";
    c6.price = 24550;
    c6.year = 2021;


    //defining the variable foe car Seven.
    c7.brand = "Nissan";
    c7.color = "Black";
    c7.model = " Maxima ";
    c7.price = 37030;
    c7.year = 2021;

    // creating a vector .
    vector<car> carsVector;
    carsVector.push_back(c1);
    carsVector.push_back(c2);
    carsVector.push_back(c3);
    carsVector.push_back(c4);
    carsVector.push_back(c5);
    carsVector.push_back(c6);
    carsVector.push_back(c7);



    // creating the ok entry.
    int entry;
    cout << "**********************************" << endl;
    cout << " select one of the options. " << endl;
    cout << " 1: All cars." << endl;
    cout << " 2: The cheapest car." << endl;
    cout << " 3: The most expensive car. " << endl;
    cout << " 4: The oldest car." << endl;
    cout << " 5: The newest car. " << endl;
    cout << " 6: The Brand Toyota." << endl;
    cout << " 7: The Brand Nissan. " << endl;
    cout << " 8: Cars with red color. " << endl;
    cin>>entry;


    switch (entry)
    {
    case 1:
        allCars(carsVector);
        break;
    case 2:
        cheapestCar(carsVector);
        break;
    case 3:
        mostExpensiveCar(carsVector);
        break;
    case 4:
        oldestCar(carsVector);
        break;
    case 5:
        newestCar(carsVector);
        break;
    case 6:
        break;
    case 7:
        break;
    default:
        cout << " Bad entry !!!! Try again!!! " << endl;
    }
    return 0;
}
