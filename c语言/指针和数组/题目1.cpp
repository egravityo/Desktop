char* my_strcpy(char* dest,const char* str);
//1.写一个函数指针pf,能够指向my_strcpy
//2.写一个函数指针数组pfArr,能够存放4个my_strcpy函数的地址
解1： char* (*pf)(char*,const char*)
解2： char* (*pfArr[4])(char* ,const char*) 
