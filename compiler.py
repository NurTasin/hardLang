#!/usr/bin/env python

from sys import argv , exit
from os import path , system , environ , remove,getcwd
hardLang_path=path.join(getcwd(),'hardLang','hardLang.h')
hardLangHeader=open(hardLang_path,"r")
hardLangstuffs=hardLangHeader.readlines()
try:
	file_to_compile=argv[1]
except IndexError:
	hardLangHeader.close()
	print("Give a file to compile or see help by using --help flag")
	exit()
file=open(file_to_compile,"r")
out=path.join(getcwd(),"__cache__")
outFile=path.join(getcwd(),"__cache__","temp.cpp")
output=open(outFile,"w+")
output.write("""/*Generated using hardlang compiler ver_1.0
This project is MIT licensed and license holder is Nur Mahmud Ul Alam Tasin.
Copyright 2020 Nur Mahmud Ul Alam Tasin*/
//Source of hardLang.h\n""")
output.write("".join(hardLangstuffs))
output.write("\n\n//Main source by user.\n")
output.write("".join(file.readlines()))
file.close()
output.close()
system("g++ -std=c++11  -c {}/temp.cpp -o {}/temp.o".format(out,out))
system("g++  -o {}/temp {}/temp.o ".format(out,out))
system("cd {} && ./temp".format(out))
try:
	remove("{}/temp.o".format(out))
	remove("{}/temp".format(out))
except:
	pass