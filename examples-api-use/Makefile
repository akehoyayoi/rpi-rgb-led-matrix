CXX=g++
CFLAGS=-Wall -O3 -g -std=c++11
CXXFLAGS=$(CFLAGS)
OBJECTS=demo-main.o minimal-example.o c-example.o text-example.o
BINARIES=demo minimal-example c-example text-example

# Where our library resides. You mostly only need to change the
# RGB_LIB_DISTRIBUTION, this is where the library is checked out.
RGB_LIB_DISTRIBUTION=..
RGB_INCDIR=$(RGB_LIB_DISTRIBUTION)/include
RGB_LIBDIR=$(RGB_LIB_DISTRIBUTION)/lib
RGB_LIBRARY_NAME=rgbmatrix
RGB_LIBRARY=$(RGB_LIBDIR)/lib$(RGB_LIBRARY_NAME).a
LDFLAGS+=-L$(RGB_LIBDIR) -l$(RGB_LIBRARY_NAME) -lrt -lm -lpthread

TAXI_LIB_DIST=./Stage
TAXI_INCDIR=$(TAXI_LIB_DIST)/inc
TAXI_SRCDIR=$(TAXI_LIB_DIST)/src
TAXI_LIBDIR=$(TAXI_LIB_DIST)/build
TAXI_LIBRARY_NAME=taxi
TAXI_LIBRARY=$(TAXI_LIBDIR)/$(TAXI_LIBRARY_NAME).a
LDFLAGS+=-L$(TAXI_LIBDIR) -l$(TAXI_LIBRARY_NAME)

all : $(BINARIES)

$(RGB_LIBRARY): FORCE
	$(MAKE) -C $(RGB_LIBDIR)

$(TAXI_LIBRARY): FORCE
	$(MAKE) -C $(TAXI_LIB_DIST)

demo : demo-main.o $(RGB_LIBRARY) $(TAXI_LIBRARY)
	$(CXX) $< -o $@ $(LDFLAGS)

minimal-example : minimal-example.o $(RGB_LIBRARY)
	$(CXX) $< -o $@ $(LDFLAGS)

text-example : text-example.o $(RGB_LIBRARY)
	$(CXX) $< -o $@ $(LDFLAGS)

# Since the C example uses the C++ library underneath, which depends on C++
# runtime stuff, you still have to also link -lstdc++
c-example : c-example.o $(RGB_LIBRARY)
	$(CC) $< -o $@ $(LDFLAGS) -lstdc++

%.o : %.cc
	$(CXX) -I$(RGB_INCDIR) -I$(TAXI_INCDIR) $(CXXFLAGS) -c -o $@ $<

%.o : %.c
	$(CC) -I$(RGB_INCDIR) -I$(TAXI_INCDIR) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(BINARIES)

FORCE:
.PHONY: FORCE
