OBJ = main.o getscore.o eval.o classify.o output.o
APPNAME=test.a
TAR = final.tar
$(APPNAME):$(OBJ)
	gcc -o $(APPNAME) $(OBJ)
%.O:%.C
	gcc -c -o $@ $<
clean:
	rm $(OBJ) $(APPNAME)
archive:
	tar cf $(TAR) *
 
	
