program no1;
var
x:array[1..1000] of double;
i,t:integer;
a,b:real;
begin
a:=exp(64*ln(2));
b:=a-1;
readln(t);
writeln;
for i:=1 to t do
begin
        readln(x[i]);
end;
for i:=1 to t do
begin
        if(x[i] >= 0) and (x[i] <= b) then
        writeln('true')
        else
        writeln('false');
end;
readln;
end.
