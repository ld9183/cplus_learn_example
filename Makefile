CXX:= g++
CXXFLAGS:= -Wall -W -D__STDC_LIMIT_MACROS -DHAVE_INTTYPES_H -DHAVE_NETINET_IN_H
LDFLAGS:=
DEBUGFLAGS:= -g3 -gdwarf-2 -ggdb
OPTFLAG:= -O2
AR:= ar
ARFLAGS:= rcs

all: test_vector_erase test_block_read test_endian test_unix_time test_class test_quick_sort

test_vector_erase: test_vector_erase.cc
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LDFLAGS)  $(DEBUGFLAGS)
test_block_read: test_block_read.cc
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LDFLAGS)  $(DEBUGFLAGS)
test_endian: test_endian.cc
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LDFLAGS)  $(DEBUGFLAGS)
test_unix_time: test_unix_time.cc
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LDFLAGS)  $(DEBUGFLAGS)
test_class: test_class.cc
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LDFLAGS)  $(DEBUGFLAGS)
test_quick_sort: test_quick_sort.cc
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LDFLAGS)  $(DEBUGFLAGS)

clean:
	rm -rf test_vector_erase test_block_read test_endian test_unix_time test_class
