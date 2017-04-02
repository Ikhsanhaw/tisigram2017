program no1;
var
x:array[1..100] of double;
i,t:integer;
a:real;
begin
a:=exp(64*ln(2)) - 1;
readln(t);
if (t >= 1) and (t <= 100) then
begin
for i:=1 to t do
begin
       readln(x[i]);
end;
if (x[i] >= 0) then
begin
for i:=1 to t do
begin
        if(x[i] >= 0) and (x[i] <= a) then
        writeln('true')
        else
        writeln('false');
end;
end
else
exit;
end
else
exit;
writeln;
readln;
end.
