//myflie.h
#pragma once

//text
//프로그램이 종료될 때
void myfile_save_text(const MyArr* parr);
void myfile_load_text(MyArr* parr);

//binary
void myfile_save_binary(const MyArr* parr);
void myfile_load_binary(MyArr* parr);

