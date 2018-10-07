/*
 * fcat.c
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
		printf("error: no se especificó un archivo.\n");
		return 1;
	}
	FILE* file = fopen(argv[1], "r");
	char buffer[1024000];
	FILE* file2 = fopen(argv[2], "r");
	char buffer2[1024000];
	if(file != NULL && file2 != NULL)
 	{
		while (feof(file) == 0)
		{
			fgets(buffer, 1024000, file);
			printf("%s", buffer);
		}
		while (feof(file2) == 0)
		{
			fgets(buffer2, 1024000, file2);
			printf("%s", buffer2);
		}
		printf("\n");
 	} else
 	{
		printf("error: los archivos %s y/o %s no existen.\n", argv[1], argv[2]);
 		return 1;
	}
	fclose(file);
	fclose(file2);
	return 0;
}
