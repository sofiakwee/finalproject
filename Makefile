TARGET = calculator
LIBS = -lm
CC = gcc
CFLAGS = -g -Wall -I.

.PHONY: clean all default

default: $(TARGET)
all: default

HEADERS = $(wildcard *.h)
OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))

