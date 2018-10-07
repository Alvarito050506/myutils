#
# Makefile
# 
# Copyright 2018 Alvarito050506 <donfrutosgomez@gmail.com>
# 
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; version 2 of the License.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
# MA 02110-1301, USA.
#

CFLAGS = -Wall
CC = gcc $(CFLAGS)
RM = rm -f
RMDIR = $(RM)r

all:
	mkdir ./output/
	$(CC) ./src/cat.c -o ./output/cat
	$(CC) ./src/echo.c -o ./output/echo
	$(CC) ./src/eval.c -o ./output/eval
	$(CC) ./src/fcat.c -o ./output/fcat
	$(CC) ./src/pause.c -o ./output/pause
	$(CC) ./src/read.c -o ./output/read
	$(CC) ./src/robotsays.c -o ./output/robotsays
	$(CC) ./src/touch.c -o ./output/touch
	$(CC) ./src/yes.c -o ./output/yes

clean:
	$(RMDIR) ./output/
