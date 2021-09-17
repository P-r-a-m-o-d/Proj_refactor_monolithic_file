CFLAGS = -Wall

all: fileio.o utils.o proj_refactor_file.o
	g++ $(CFLAGS) -o myexe fileio.o utils.o proj_refactor_file.o
	
fileio.o: ../fileio/fileio.cpp ../includes/fileio.h ../includes/constants.h
	g++ $(CFLAGS) -c ../fileio/fileio.cpp
	
utils.o: ../utils/utils.cpp ../includes/utils.h ../includes/constants.h
	g++ $(CFLAGS) -c ../utils/utils.cpp
	
proj_refactor_file.o: proj_refactor_file.cpp ../includes/constants.h ../includes/utils.h ../includes/fileio.h
	g++ $(CFLAGS) -c proj_refactor_file.cpp	
		
clean:
	rm fileio.o utils.o proj_refactor_file.o myexe