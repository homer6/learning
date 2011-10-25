
LEX=flex


parse: parse.c parse.yy.c
	$(CC) -o $@  $(LDFLAGS) $^ 

parse.yy.c: parse.l
	$(LEX) $(LFLAGS) -o $@ $^

clean:
	$(RM) *.o
	$(RM) parse.yy.c
	$(RM) parse 

