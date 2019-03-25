IDIR = ../include
CC = g++
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = helloworld.h
DEPS = $(patsubst %,$(IDIR)/%, $(_DEPS))

_OBJ = helloworld.o hellofunc.o
OBJ = $(patsubst %,$(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

helloworld: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONEY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
