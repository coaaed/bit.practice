//control.h
#pragma once

void con_init();

void con_insert();
void con_select_name();
void con_select_number();
void con_update();
void con_delete();
void con_printall();
void con_exit();


int nametoidx(const char* name);
int numbertoidx(int number);

