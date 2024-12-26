TRG := out/baseconvert

OBJ := obj/main.o obj/io.o 

$(TRG) : $(OBJ)
	gcc -o $@ $^

$(OBJ) : obj/%.o : src/%.c
	gcc -I inc/ -c -o $@ $^ -std=c99

clean:
	rm $(OBJ)
