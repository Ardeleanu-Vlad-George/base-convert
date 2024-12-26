TRG := out/baseconvert

OBJ := obj/main.o

$(TRG) : $(OBJ)
	gcc -o $@ $^

$(OBJ) : obj/%.o : src/%.c
	gcc -c -o $@ $^ -std=c99

clean:
	rm $(OBJ)
