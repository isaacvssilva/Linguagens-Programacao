SRC=src/
OBJ=obj/
BIN=bin/

OBJS = main.o livro.o livraria.o livro_drama.o livro_comedia.o livro_aventura.o

all: folder app  run

app: $(OBJS)
	g++ $(OBJ)main.o $(OBJ)livro.o $(OBJ)livraria.o $(OBJ)livro_drama.o $(OBJ)livro_comedia.o $(OBJ)livro_aventura.o -o $(BIN)app

main.o: $(SRC)main.cpp
	g++ -c $(SRC)main.cpp -o $(OBJ)main.o -Wall

livro.o: $(SRC)livro.cpp
	g++ -c $< -o $(OBJ)livro.o -Wall

livraria.o: $(SRC)livraria.cpp
	g++ -c $< -o $(OBJ)livraria.o -Wall

livro_drama.o: $(SRC)livro_drama.cpp
	g++ -c $< -o $(OBJ)livro_drama.o -Wall

livro_comedia.o: $(SRC)livro_comedia.cpp
	g++ -c $< -o $(OBJ)livro_comedia.o -Wall
	
livro_aventura.o: $(SRC)livro_aventura.cpp
	g++ -c $< -o $(OBJ)livro_aventura.o -Wall

folder: 
	mkdir -p bin obj

clean:
	rm obj/ bin/ -rf obj/

run:
	@./$(BIN)app