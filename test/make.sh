cd ..
bash make.sh
cd test
gcc -Wall -o argman_handler argman_handler.c ../argman.o
bash argman_test.sh