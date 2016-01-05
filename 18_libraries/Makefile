CFLAGS=-v
default: wacky_dynamic wacky_static sdl_example

wacky_static: wacky.c libwacky.a
	clang $^  -o $@

wacky_dynamic: wacky.c libwacky.so
	clang wacky.c -L. -lwacky -o $@

libwacky.a: wacky_math.o
	ar -rcv $@ $^

libwacky.so: wacky_math.o
	clang -shared -o libwacky.so wacky_math.o

wacky_math.o: wacky_math.c wacky_math.h
	clang -c -fPIC wacky_math.c -o $@

sdl_example: sdl_example.c
	clang $^ -lSDL -L/usr/local/lib -I/usr/local/include -pthread -o $@

.PHONY: clean
clean:
	rm -f *.o *.so wacky_dynamic wacky_static sdl_example;
