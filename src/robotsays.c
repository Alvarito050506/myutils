/*
 * robotsays.c
 * 
 * Copyright 2018 Alvarito050506 <donfrutosgomez@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <stdio.h>

int main(int argc, char* argv[])
{
	if(argv[1] == NULL)
	{
		printf("error: no se especificó una cadena de caracteres.\n");
		return 1;
	}
	printf("       .............................\n       %s\n       .............................\n  °    °      /\n   \\../      /\n  (o  o)    /\n   [--]\n _ _[]_ _\n| |    | |\n| | ' °| |\n| |    | |\n\\ /    \\ /\n ¿|    |°\n  ++++++\n  ! || !\n  ! || !\n  ! || !\n  !_||_!\n__-.  .-__\n", argv[1]);
	return 0;
}
