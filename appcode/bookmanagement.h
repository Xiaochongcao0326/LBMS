#pragma once
#ifndef BOOKMANAGEMENT_H_INCLUDED
#define BOOKMANAGEMENT_H_INCLUDED
#include "graphics.h"
#include "extgraph.h"
#include "genlib.h"
#include "simpio.h"
#include "conio.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include <windows.h>
#include <olectl.h>
#include <mmsystem.h>
#include <wingdi.h>
#include <ole2.h>
#include <ocidl.h>
#include <winuser.h>
#include <math.h>

#include "linkedlist.h"
#include "imgui.h"
#include "global.h"
#include "reservationmanagement.h"
void search_by();
void order_filter();
void DrawBooks(int x);
void bookreserve_page();
void showbookinformationwindow(int x);
void bookedit_page();
void editbookinformationwindow(int x);
void addbookinformationwindow();
#endif