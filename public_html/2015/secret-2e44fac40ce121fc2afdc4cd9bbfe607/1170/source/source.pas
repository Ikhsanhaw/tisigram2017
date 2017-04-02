uses crt;
var
 a : string;
 n : integer;
begin
clrscr;
    readln(a);
    case (a) of
      'E' : n:=1;
      'D' : n:=2;
      'C' : n:=3;
      'B' : n:=4;
      'A' : n:=5;
      'S' : n:=6;
    end;
     writeln(n);
     readln;
end.
