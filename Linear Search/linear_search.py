# -*- coding: utf-8 -*-
"""
Created on Fri Sep 28 21:17:54 2018

@author: Nazrul
"""

def linear_search(aList, sizeOfList, aVar):
    result = False
    for i in range(sizeOfList):
        if aList[i] == aVar:
            print(aVar, "at " + str(i) + " Matched")
            result = True
        else:
            print(aVar, "at " + str(i) + " Not matched")
    return result


integers = [10,20,30,40,50,60,70,80,90,100]
find = 20

if linear_search(integers, len(integers), find):
    print("Found")
else:
    print("Not Found")

    