IDIR = ../include
CC = g++
CFLAGS= -std=c++11 -I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = geonode.h
DEPS = $(patsubst %,$(IDIR)/%, $(_DEPS))

_OBJ = matrix.o matrixfunc.o
OBJ = $(patsubst %,$(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

geometry: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONEY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
