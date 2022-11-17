/* Copyright 2022 MIIIW <www.miiiw.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "blackio83.h"

#ifdef RGB_MATRIX_ENABLE

/* Leds on the CU80 go ltr > rtl > ltr > rlt > Ltr > rtl */
led_config_t g_led_config = {
	{  /* C0      C1      C2      C3      C4      C5      C6      C7      C8      C9      C10     C11     C12     C13     C14     C15 */
/*R0*/	{  0, NO_LED,      1,      2,      3,      4,      5,      6,      7,      8,     9,      10,     11,     12,     13,     14 },
/*R1*/	{ 29,     28,     27,     26,     25,     24,     23,     22,     21,     20,     19,     18,     17,     16, NO_LED,     15 },
/*R2*/	{ 30,     31,     32,     33,     34,     35,     36,     37,     38,     39,     40,     41,     42,     43, NO_LED,     44 },
/*R3*/	{ 58,     57,     56,     55,     54,     53,     52,     51,     50,     49,     48,     47,     46, NO_LED, NO_LED,     45 },
/*R4*/	{ 59,     60,     61,     62,     63,     64,     65,     66,     67,     68,     69,     70, NO_LED,     71, NO_LED,     72 },
/*R5*/	{ 82,     81,     80, NO_LED, NO_LED,     79, NO_LED, NO_LED,     78,     77,     76, NO_LED,     75,     74,     73, NO_LED },
    },
  	/*board layout accounting for led directions */
	{	{ 0,  0},   {10,  0}, {18,  0}, {26,  0}, {34,  0},   {44,  0}, {52,  0}, {60,  0}, {68,  0},     {78,  0}, {86,  0}, {94, 0}, {102, 0},    {112, 0},      {124, 0},
	//	{ 0, 20}, { 8, 20}, {16, 20}, {24, 20}, {32, 20}, {40, 20}, {48, 20}, {56, 20}, {64, 20}, {72, 20}, {80, 20}, {88, 20}, {96, 20},      {108,20},		   {124,20},
		{124,20},           {108,20},      {96, 20}, {88, 20}, {80, 20}, {72, 20}, {64, 20}, {56, 20}, {48, 20}, {40, 20}, {32, 20}, {24, 20}, {16, 20}, { 8, 20}, { 0, 20},
		  { 2, 36},   {12, 36}, {20, 36}, {28, 36}, {36, 36}, {44, 36}, {52, 36}, {60, 36}, {68, 36}, {76, 36}, {84, 36}, {92, 36}, {100,36},    {110,36},		   {124,36},
	//	   { 3, 52},      {14, 52}, {22, 52}, {30, 52}, {38, 52}, {46, 52}, {54, 52}, {62, 52}, {70, 52}, {78, 52}, {86, 52}, {94, 52},       {107, 52},           {124,52},
	    {124,52},           {107, 52},       {94, 52}, {86, 52}, {78, 52}, {70, 52}, {62, 52}, {54, 52}, {46, 52}, {38, 52}, {30, 52}, {22, 52}, {14, 52},      { 3, 52},
		       { 5, 68},      {18, 68}, {26, 68}, {34, 68}, {42, 68}, {50, 68}, {58, 68}, {66, 68}, {74, 68}, {82, 68}, {90, 68},         {104,68},    {114,72},   {124,68},
	//	 { 1, 84},  {10, 84},   {20, 84},                             {50, 84},                             {80, 84}, {88, 84}, {96, 84},    {106,88}, {114,88}, {122,88},
	      {122,88}, {114,88}, {106,88},    {96, 84}, {88, 84}, {80, 84},                             {50, 84},                             {20, 84},   {10, 84},   { 1, 84},                                                         
	},
  	/* marks scroll and caps as function modifiers for led effects */
	{	4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,  4, //15
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,  4, //15
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,  4, //15
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,     4, //14
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,   4,   4, //14
		4, 4, 4,       4,       4, 4, 4,   4, 4, 4,   //10
	}
};

#endif
