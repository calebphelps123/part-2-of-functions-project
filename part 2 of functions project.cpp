// part 2 of functions project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Function to get the input
void get_input(double& current_price, float& price_one_year_ago, float& price_two_year_ago) {
    cout << "Enter the current price of the item: $";
    cin >> current_price;
    cout << endl;
    cout << "Enter the price of the item one year ago: $";
    cin >> price_one_year_ago;
    cout << endl;
    cout << "Enter the price of the item two years ago: $";
    cin >> price_two_year_ago;
    cout << endl;
}

// Function to calculate the results
void calculate_results(double current_price, float price_one_year_ago, float price_two_year_ago, float& inflation_one_year_ago, float& inflation_two_years_ago) {
    // Calculate the inflation rate for one year ago
    inflation_one_year_ago = (current_price - price_one_year_ago) / price_one_year_ago * 100;

    // Calculate the inflation rate for two years ago
    inflation_two_years_ago = (current_price - price_two_year_ago) / price_two_year_ago * 100;
}

// Function to output the results
void output_results(float inflation_one_year_ago, float inflation_two_years_ago) {
    cout << "The inflation rate for one year ago is: " << inflation_one_year_ago << "%" << endl;
    cout << "The inflation rate for two years ago is: " << inflation_two_years_ago << "%" << endl;

    // Determine whether the inflation is increasing or decreasing
    if (inflation_one_year_ago > inflation_two_years_ago) {
        cout << "The inflation rate is increasing." << endl;
    }
    else if (inflation_one_year_ago < inflation_two_years_ago) {
        cout << "The inflation rate is decreasing." << endl;
    }
    else {
        cout << "The inflation rate is the same." << endl;
    }
}

// Main function
int main() {
    // Declare variables
    double current_price;
    float price_one_year_ago;
    float price_two_year_ago;
    float inflation_one_year_ago;
    float inflation_two_years_ago;

    // Get the input
    get_input(current_price, price_one_year_ago, price_two_year_ago);

    // Calculate the results
    calculate_results(current_price, price_one_year_ago, price_two_year_ago, inflation_one_year_ago, inflation_two_years_ago);

    // Output the results
    output_results(inflation_one_year_ago, inflation_two_years_ago);

    return 0;
}