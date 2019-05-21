/*
 *
 * Filename        : TotalBill.cpp
 * FileType        : C++ Source File
 * Author          : Simran Kaur
 * CreatedOn       : 20/05/2019
 * CopyRights      : Airavath Foundation
 * Description     : Code file containing all the other functions of source
 *                   code except main. This file includes the function bill 
 *                   which computes total amount to be paid after shopping from 
 *                   a set of products by the customer.
*/


#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

inline long double bill (vector<int> v){
	map<string, long double>mp;
	mp["Mangoes"] = 60;
	mp["Toy Car"] = 100;
	mp["Rice"] = 150;
	mp["Cake"] = 200;
	mp["CornFlakes"] = 250;
	const string arr[5] = {"Mangoes" , "Toy Car" , "Rice" , "Cake" , "CornFlakes"};
	long double Total_Amount = 0.0;
	for (int i = 0; i < v.size(); i++) {
		if ((v[i] >= 0) & (v[i] < 5)) {
			Total_Amount += mp[arr[v[i]]];
		}
	}
	Total_Amount *= long double(1.1);
	return Total_Amount;
}
