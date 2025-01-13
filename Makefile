CC = emcc
CFLAGS = -Wall
LFLAGS = -I/workspaces/SDL/include -Llibs/ -lSDL3

BUILDDIR = build
TARGET = Taipan.html
SOURCES = main.c
RESOURCES = font.bmp

all: $(TARGET)

$(TARGET) : $(SOURCES)
	$(CC) $(CFLAGS) -o $(BUILDDIR)/$(TARGET) $(SOURCES) $(LFLAGS)