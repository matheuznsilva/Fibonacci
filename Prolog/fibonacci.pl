fib(0,[0]).                   % <- base case 1
fib(1,[0,1]).                 % <- base case 2
fib(N,Seq) :-
   N > 1,
   fib(N,SeqR,1,[1,0]),      % <- actual relation (all other cases)
   reverse(SeqR,Seq).             % <- reverse/2 from library(lists)

fib(N,Seq,N,Seq).
fib(N,Seq,N0,[B,A|Fs]) :-
   N > N0,
   N1 is N0+1,
   C is A+B,
   fib(N,Seq,N1,[C,B,A|Fs]). % <- recursão em calda

   