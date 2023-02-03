all: sort search  selection_sort merge_sort sum_of_ints bubble_sort comparison

CFLAGS =  -lalgo -I ../lib -L ../lib

sort: sort.c
	gcc -g sort.c -o $@  $(CFLAGS)

search: search.c
	gcc -g search.c -o $@ $(CFLAGS)

selection_sort: selection_sort.c
	gcc -g sort.c -o $@  $(CFLAGS)

merge_sort: merge_sort.c
	gcc -g merge_sort.c -o  $@ $(CFLAGS)

sum_of_ints: sum_of_ints.c
	gcc -g sum_of_ints.c -o $@ ${CFLAGS}

bubble_sort: bubble_sort.c
	gcc -g bubble_sort.c -o $@ ${CFLAGS}	

comparison: comparison.c
	gcc -g comparison.c -o $@ ${CFLAGS}		
