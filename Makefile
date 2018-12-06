CXX:= g++
CXXFLAGS:= -Wall -W -D__STDC_LIMIT_MACROS -DHAVE_INTTYPES_H -DHAVE_NETINET_IN_H
LDFLAGS:=
DEBUGFLAGS:= -g3 -gdwarf-2 -ggdb
OPTFLAG:= -O2
AR:= ar
ARFLAGS:= rcs

all: test_vector_erase test_block_read test_endian

test_vector_erase: test_vector_erase.cc
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LDFLAGS)  $(DEBUGFLAGS)
test_block_read: test_block_read.cc
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LDFLAGS)  $(DEBUGFLAGS)
test_endian: test_endian.cc
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LDFLAGS)  $(DEBUGFLAGS)

clean:
	rm -rf test_vector_erase test_block_read test_endian
