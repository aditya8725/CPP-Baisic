/*
STL: STANDARD TEMPLATE LIBRARY

constainers:
2 types: 1) sequential container classes: vector,list,queue
         2) Associative container classes: set, multiset, map, multimap[binary tree]

set ->unique element unordered
multiset -> duplicate are allowed
map<key,value> - key has to be unique
multimap - key can be duplicate
======================================================================================
Iterators: to travel over elements of any container
begin(), end()
--------------------------------------------------------------------------------------
Algorithms: generic function those who work with any container

*/

#include<iostream>
#include<vector>

int main()
{
    std::vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    for(int i=0;i<v1.size();i++)
    {
        std::cout<<v1[i]<<"\t";
    }
}