/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on September 27, 2017, 12:52 PM
 */

#include <iostream>
#include <string>
using namespace std;

class ShopItemOrder
{
private:
    int total;
public:
    string pName;
    int pPrice;
    int orderList;
    void setName(string name)
    {
        name = pName;
    }
    void setPrice (int price)
    {
      price = pPrice;  
    }
    void addToList()
    {
        orderList++;
        total = total + pPrice;
    };
    
    
    
    
    
};




/*
 * 
 */
int main(int argc, char** argv) {
    string product;
    int num;
    ShopItemOrder ShoppinTime;
    cout << "Enter the name of the product"<< endl;
    cin >> product >> endl;
    ShoppinTime.setName(product);
    cout << "What is the price of " + ShoppinTime.pName + "?" << endl;
    cin >> num >> endl;
    ShoppinTime.setPrice(num);
    return 0;
}
