all:
	gcc main.c -o main 
run:
	./main

valgrind:
	valgrind --tool=cachegrind ./main	

perf:
	sudo perf stat -e task-clock,cycles,instructions,cache-references,cache-misses  ./main	

clean:
	rm main