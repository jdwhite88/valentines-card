all: clean valentine

valentine:
	g++ -g -o valentine valentine.cpp

clean:
	rm -f valentine
