OPT = -Wall

cal: main.o Control.o Date.o Time.o Event.o Calendar.o List.o View.o SchoolEvent.o WorkEvent.o 
	g++ $(OPT) -o cal main.o Control.o Date.o Time.o Event.o Calendar.o List.o View.o SchoolEvent.o WorkEvent.o

main.o:	main.cc Control.h  
	g++ $(OPT) -c main.cc

Date.o:	Date.cc Date.h
	g++ $(OPT) -c Date.cc

Time.o:	Time.cc Time.h
	g++ $(OPT) -c Time.cc

Event.o: Event.cc Event.h
	g++ $(OPT) -c Event.cc

SchoolEvent.o: SchoolEvent.cc SchoolEvent.h
	g++ ${OPT} -c SchoolEvent.cc

WorkEvent.o: WorkEvent.cc WorkEvent.h
	g++ ${OPT} -c WorkEvent.cc

Calendar.o: Calendar.cc Calendar.h
	g++ $(OPT) -c Calendar.cc

List.o: List.cc List.h
	g++ ${OPT} -c List.cc

View.o: View.cc View.h
	g++ ${OPT} -c View.cc

Control.o: Control.cc Control.h
	g++ ${OPT} -c Control.cc

clean:
	rm -f *.o cal
