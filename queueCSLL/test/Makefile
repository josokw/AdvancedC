CC = gcc
INCLUDING = -I../app -IUnity
CFLAGS = -std=c99 -g -Wall -Wextra -Wpedantic \
         -Wlogical-op -Wshadow -Wformat=2 -Wwrite-strings -Wfloat-equal \
         -Wstrict-prototypes -Wredundant-decls -Wstrict-overflow \
		 $(INCLUDING)

EXECUTABLE = queueCSLLtest
SOURCES = $(wildcard *.c) \
          ../app/*.c \
		  $(wildcard Unity/*.c)
HEADERS = $(wildcard *.h) \
          ../app/*.h \
		  $(wildcard Unity/*.h)
OBJECTS = $(SOURCES:.c=.o)

.PHONY: all
all: $(EXECUTABLE)

-include depend

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $(CLIBS) -o $@

# Create dependency file
depend: $(SOURCES)
	$(CC) -MM $(CFLAGS) $^ > $@

# Create a clean environment
.PHONY: clean
clean:
	$(RM) $(EXECUTABLE) $(OBJECTS)

# Clean up dependency file
.PHONY: clean-depend
clean-depend: clean
	$(RM) depend

