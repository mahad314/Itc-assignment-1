//Mahad Abubakar L1F26BSCS0314
//Task 1

/*
#include <iostream>

using namespace std;

int main() {
    float weight, height_cm, height_m, bmi;

    cout << "Enter your weight in kilograms (kg): ";
    cin >> weight;

    cout << "Enter your height in centimeters (cm): ";
    cin >> height_cm;

    height_m = height_cm / 100.0;
    bmi = weight / (height_m * height_m);

    cout << "Calculated BMI: " << bmi << endl;

    cout << "Weight Category: ";
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    }
    else if (bmi >= 18.5 && bmi < 25.0) {
        cout << "Normal Weight" << endl;
    }
    else {
        cout << "Overweight" << endl;
    }

    return 0;
}
//Sample output
//Enter your weight in kilograms (kg): 70
//Enter your height in centimeters (cm): 175
//Calculated BMI: 22.86
//Weight Category: Normal Weight


*/


//Task 2
/*

#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) {
        cout << "Positive Number" << endl;
    }
    else if (number < 0) {
        cout << "Negative Number" << endl;
    }
    else {
        cout << "Zero" << endl;
    }

    return 0;
}
//Sample output
//Enter an integer: 11
//Positive Number

*/

//Task 3

/*
#include <iostream>

using namespace std;

int main() {
    int quantity,price, total_bill, discount , final_bill;
    //I set the calue to 0 cause it wasnt working properly in the else statement cause there was no value of discount i think atleast
    discount = 0;

    cout << "Enter the price of one item (Rs.): ";
    cin >> price;

    cout << "Enter the quantity purchased: ";
    cin >> quantity;

    total_bill = price * quantity;

    cout << "Original Bill: Rs. " << total_bill << endl;

    if (total_bill >= 5000.0) {
        discount = total_bill * 0.10;
        final_bill = total_bill - discount;
        cout << "Discount Applied (10%): Rs. " << discount << endl;
    }
    else {
        final_bill = total_bill;
        cout << "No discount is applicable." << endl;
        cout << "Discount Amount: Rs. " << discount <<endl;
    }
    cout << "Final Bill: Rs. " << final_bill << endl;

    return 0;
}
//Sample output
//Enter the price of one item(Rs.) : 4000
//Enter the quantity purchased : 1
//Original Bill : Rs. 4000
//No discount is applicable.
//Discount Amount : Rs. 0
//Final Bill : Rs. 4000
*/